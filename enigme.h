#ifndef ENTETE_H_INCLUDED
#define ENTETE_H_INCLUDED
#include <SDL/SDL.h>
#include <SDL/SDL_image.h>
#include <math.h>
#include <time.h>

typedef struct
{
 SDL_Surface * img; //Surface
 SDL_Rect 	p; //rectangle
 int result;
}enigme;

void init_enigme(enigme * e) ;
void  generate_afficher (SDL_Surface * screen  , char image [],enigme *e, int alea) ;
void afficher_reponse( SDL_Surface *screen, int reponse, int running);





#endif
