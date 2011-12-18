#ifndef __APOLLORENDERER__H__
#define __APOLLORENDERER__H__

#include <SDL/SDL.h>

const int APOLLO_HARDWARE_RENDERER = 1;
const int APOLLO_SOFTWARE_RENDERER = 0;

class ApolloRenderer
{
    public:
        ApolloRenderer(int ScreenWidth, int ScreenHeight, int Bbp, int Renderer);
        Uint32 Render();
        void CleanUp();
    private:
        SDL_Surface* screen;
        Uint32 StartRenderTime;
        Uint32 EndRenderTime;
        GameDatabase* gamedatabase;

};

#endif
