#include "graphic/ApolloRenderer.h"
#include "database/GameDatabase.h"


ApolloRenderer::ApolloRenderer(int ScreenWidth, int ScreenHeight, int Bbp, int Renderer)
{
    if(Renderer == APOLLO_SOFTWARE_RENDERER)
    {
         screen = SDL_SetVideoMode(ScreenWidth, ScreenHeight, Bbp, SDL_HWSURFACE|SDL_DOUBLEBUF);
         if ( !screen )
        {
            printf("Unable to set %d x %d video: %s\n", ScreenWidth, ScreenHeight, SDL_GetError());

        }else{
            printf("Successfully created New ApolloRenderer!");
        }
    }

    this.gamedatabase = &GameDatabase::getInstance();
}

Uint32 ApolloRenderer::Render()
{
    StartRenderTime = SDL_GetTicks();





    SDL_Flip(screen);
    EndRenderTime = SDL_GetTicks();
    return EndRenderTime-StartRenderTime;
}


void ApolloRenderer::CleanUp()
{
    SDL_FreeSurface(screen);
}
