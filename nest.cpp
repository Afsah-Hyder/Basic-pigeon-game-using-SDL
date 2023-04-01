#include "nest.hpp"
// nest implementation will go here.

void Nest::draw(SDL_Renderer *gRenderer, SDL_Texture *assets)
{
    SDL_RenderCopy(gRenderer, assets, &srcRect, &moverRect);

    if (frame == 0)
    {
        srcRect = {440, 0, 647, 151};
        frame++;
    }
    else if (frame == 1)
    {
        srcRect = {440, 148, 647, 151};
        frame++;
    }
    else if (frame == 2)
    {
        srcRect = {440, 305, 647, 151};
        frame++;
    }
    else
    {
        srcRect = {440, 0, 647, 151};
        frame = 0;
    }
}

Nest::Nest()
{
}
Nest::Nest(int x, int y) // these are mouse coordinates
{
    // src coorinates from assets.png file, they have been found using spritecow.com
    srcRect = {440, 0, 647, 151};

    // it will display nest on x = 30, y = 40 location, the size of nest is 50 width, 60 height
    moverRect = {x, y, 123, 123};
}