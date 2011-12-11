
#ifdef _WIN32
#include <SDL/SDL.h>
#else
#include <SDL.h>
#endif

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

};
