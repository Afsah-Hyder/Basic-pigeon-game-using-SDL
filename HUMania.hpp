#include <SDL.h>
#include "pigeon.hpp"
#include "egg.hpp"
#include "nest.hpp"
class HUMania
{
    SDL_Renderer *gRenderer;
    SDL_Texture *assets;

    // Right now we're creating one pigeon,
    //  In the solution you have to create vectors of pigeons, eggs, and nests

public:
    HUMania(SDL_Renderer *, SDL_Texture *);
    void drawObjects();
    void createObject(int, int);
};