#include "egg.hpp"
// egg implementation will go here.

void Egg::draw(SDL_Renderer *gRenderer, SDL_Texture *assets)
{
    SDL_RenderCopy(gRenderer, assets, &srcRect, &moverRect);

    if (moverRect.y < 530)
    {
        srcRect = {204, 0, 280, 199};
        drop();
    }
    else if (moverRect.y >= 530)
    {
        srcRect = {204, 200, 280, 430};
    }
}
void Egg::drop()
{
    // moverRect.x += 2; // moves the egg one pixel towards right, should it be in fly function??
    moverRect.y += 2;
}
Egg::Egg()
{
}
Egg::Egg(int x, int y) // these are mouse coordinates
{
    // src coorinates from assets.png file, they have been found using spritecow.com
    srcRect = {204, 0, 280, 199};

    // it will display egg on x = 30, y = 40 location, the size of egg is 50 width, 60 height
    moverRect = {x, y, 84, 60};
}