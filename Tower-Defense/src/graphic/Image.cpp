#include "graphic/Image.h"


Image::Image(char *image_src)
{
    image_surface = loadImage(image_src);

}

Image::draw(int x, int y);
{
    SDL_Rect img_offset;
    img_offset.x = x;
    img_offset.y = y;
    SDL_BlitSurface(image_surface,NULL,Screen_Surface,&img_offset);
}


SDL_Surface* loadImage(char* image_src)
{
    SDL_Surface* optimizedImage = NULL;
    SDL_Surface* tmp_surface = IMG_Load(image_src);
    if(tmp_surface!=NULL)
    {
        optimizedImage = SDL_DisplayFormat(tmp_surface);
        SDL_FreeSurface(tmp_surface);
    }
    return optimizedImage;
}
