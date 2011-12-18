#ifndef __GRAPHIC__H__
#define __GRAPHIC__H__

#include "util/Singleton.h"

class Image
{
    public:
        Image(char* image_src);
        void draw(int x, int y);
    private:
        SDL_Surface* image_surface;
        SDL_Surface* Screen_Surface;

};

SDL_Surface* loadImage(char* image_src);

#endif
