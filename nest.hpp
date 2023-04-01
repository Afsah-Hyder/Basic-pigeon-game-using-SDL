#include <SDL.h>

class Nest
{
    SDL_Rect srcRect, moverRect;

public:
    // add the fly function here as well.
    int frame=0;
    void draw(SDL_Renderer *, SDL_Texture *assets);

    Nest();
    Nest(int x_pos, int y_pos); // may add other overloaded constructors here...
};