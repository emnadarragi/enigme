#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include <SDL/SDL.h>
#include <SDL/SDL_mixer.h>
#include <SDL/SDL_image.h>
#include "enigme.h"
#include <math.h>
#include <time.h>


void init_enigme(enigme * e)
{
	e->p.x=0;
	e->p.y=0;
	e->img=NULL;
  e->result=0;
}

void generate_afficher (SDL_Surface * screen  , char image [],enigme *e, int alea)
{
  //srand(time(NULL));
  /*alea =  rand()%3 +1; //supposant qu'on a 3 enigmes*/
  sprintf(image ,"%d.png",alea); //tab3eth l nombre aleatoire f un pointeur qui est image de façon l output par exemple 2.png
  e->img = IMG_Load(image); //on load l'image 2.png
  SDL_BlitSurface(e->img,NULL,screen,&(e->p)) ;
  SDL_Flip(screen) ;
}

void afficher_reponse( SDL_Surface *screen, int reponse,int running)
{
   SDL_Surface *right=NULL;
	 SDL_Surface *wrong=NULL;
   SDL_Rect positionright, positionwrong;
	 SDL_Event event;
positionright.x=450;
positionright.y=450;
positionwrong.x=450;
positionwrong.y=450;
while(running)
{
	while(SDL_PollEvent(&event))
	{
				 switch(event.type)
				 {
						 case SDL_QUIT:
								 running = 0;
								 break;
				 }
				 
	}
if(reponse==1)
			 	{
			 	right=IMG_Load("right.png");
			 	SDL_BlitSurface(right,NULL,screen,&positionright);
			 	SDL_Flip(screen);
			 	}
			 	else if(reponse==2)
			 	{
			 	wrong=IMG_Load("wrong.png");
			 	SDL_BlitSurface(wrong,NULL,screen,&positionwrong);
			 	SDL_Flip(screen);
			 	}

}

SDL_Flip(screen);

}
