#include "pigeon.hpp"
// pigeon implementation will go here.

void Pigeon::draw(SDL_Renderer *gRenderer, SDL_Texture *assets)
{
    SDL_RenderCopy(gRenderer, assets, &srcRect, &moverRect);
    fly();

    if (frame == 0)
    {
        srcRect = {0, 0, 160, 133};
        frame++;
    }
    else if (frame == 1)
    {
        srcRect = {0, 150, 160, 133};
        frame++;
    }
    else if (frame == 2)
    {
        srcRect = {0, 280, 160, 133};
        frame++;
    }
    else
    {
        srcRect = {0, 0, 160, 133};
        frame = 0;
    }
}
void Pigeon::fly()
{
    if ((moverRect.x <= 1000 or moverRect.y >= 0) && reversal == false)
    {
        moverRect.x += 2; // moves the pigeon one pixel towards right, should it be in fly function??
        moverRect.y -= 2;
    }

    if ((moverRect.x >= 1000 or moverRect.y <= 0))
    {
        reversal = true;
    }
    if (reversal == true)
    {
        moverRect.x -= 2; // moves the pigeon one pixel towards right, should it be in fly function??
        moverRect.y += 2;
    }
}
Pigeon::Pigeon()
{
}
Pigeon::Pigeon(int x, int y) // these are mouse coordinates
{
    // src coorinates from assets.png file, they have been found using spritecow.com
    srcRect = {0, 0, 160, 133};

    // it will display pigeon on x = 30, y = 40 location, the size of pigeon is 50 width, 60 height
    moverRect = {x, y, 50, 60};
}