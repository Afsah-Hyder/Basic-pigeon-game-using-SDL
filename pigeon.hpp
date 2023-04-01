#include <SDL.h>

class Pigeon
{
    SDL_Rect srcRect, moverRect;

public:
    int frame = 0;
    bool reversal = false;
    // add the fly function here as well.
    void draw(SDL_Renderer *, SDL_Texture *assets);
    void fly();
    Pigeon();
    Pigeon(int x_pos, int y_pos); // may add other overloaded constructors here...
};
