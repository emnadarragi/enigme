#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include <SDL/SDL.h>
#include <SDL/SDL_mixer.h>
#include <SDL/SDL_image.h>
#include "enigme.h"
#include <math.h>
#include <time.h>

int main()
{
  enigme  e;
  SDL_Surface *screen=NULL;
  SDL_Surface *texte=NULL;

  SDL_Event event;

  char image[10]="";
  int running=1;
  int random,x,y,reponse;

  srand(time(NULL));
  SDL_Init(SDL_INIT_EVERYTHING);
  SDL_EnableUNICODE(SDL_ENABLE); //obtain the character's codes corresponding to received keyboard events
  screen=SDL_SetVideoMode(618,575,32,SDL_HWSURFACE  |  SDL_DOUBLEBUF );
  init_enigme(&e);
  srand(time(NULL));
random =  rand()%3 +1;
generate_afficher (screen, image, &e,random);

  while(running)
  {

    
    SDL_Flip(screen);
    while(SDL_PollEvent(&event))
    {
           switch(event.type)
           {
               case SDL_QUIT:
                   running = 0;
                   break;
              case SDL_MOUSEBUTTONDOWN:
                /*printf("x= %d / y= %d\n",event.motion.x,event.motion.y);*/ //pour determiner les coordinees
                 if(event.button.button == SDL_BUTTON_LEFT)
                 {
                   x = event.button.x;
                   y = event.button.y;
                   switch (random)
                   {
                     case 1:
                     if((x>70) && (x<132) && (y>472) && (y<530))
                     {
                       reponse=1;
srand(time(NULL));
  random =  rand()%3 +1;
afficher_reponse(screen,reponse,running);
generate_afficher (screen, image, &e,random);
                     }
                     else if((x>270) && (x<330) && (y>472) && (y<530))
                     {
                       reponse=2;
srand(time(NULL));
  random =  rand()%3 +1;
afficher_reponse(screen,reponse,running);

generate_afficher (screen, image, &e,random);
                     }

                       break;
case 2:
                     if((x>389) && (x<418) && (y>400) && (y<430))
                     {
                       reponse=1;
srand(time(NULL));
  random =  rand()%3 +1;
afficher_reponse(screen,reponse,running);
generate_afficher (screen, image, &e,random);
                     }
                     else if((x>97) && (x<126) && (y>400) && (y<430))
                     {
                       reponse=2;
srand(time(NULL));
  random =  rand()%3 +1;
afficher_reponse(screen,reponse,running);
generate_afficher (screen, image, &e,random);
                     }

                       break;
case 3:
                     if((x>52) && (x<81) && (y>422) && (y<451))
                     {
                       reponse=1;

  random =  rand()%3 +1;
afficher_reponse(screen,reponse,running);
generate_afficher (screen, image, &e,random);
                     }
                     else if((x>260) && (x<290) && (y>422) && (y<451))
                     {
                       reponse=2;

  random =  rand()%3 +1;
afficher_reponse(screen,reponse,running);
generate_afficher (screen, image, &e,random);
    }
else if((x>52) && (x<81) && (y>465) && (y<495))
                     {
                       reponse=1;

  random =  rand()%3 +1;
afficher_reponse(screen,reponse,running);
generate_afficher (screen, image, &e,random);
                     }
else if((x>260) && (x<290) && (y>465) && (y<495))
                     {
                       reponse=2;

  random =  rand()%3 +1;
afficher_reponse(screen,reponse,running);

                     }

                       break;

                   }
                   

                 }
                 break;
           }

    }

generate_afficher (screen, image, &e,random);
  }
  SDL_Flip(screen);
  SDL_FreeSurface(screen);
  SDL_Quit();
  return running;
}
