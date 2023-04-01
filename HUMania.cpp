#include <iostream>
#include "HUMania.hpp"
#include <vector>
using namespace std;

vector<Pigeon> pig_vect;
vector<Egg> Egg_vect;
vector<Nest> nest_vect;

void HUMania::drawObjects()
{
    // call draw functions of all the objects here

    // p1.draw(gRenderer, assets);
    for (int i = 0; i < pig_vect.size(); i++)
    {
        pig_vect[i].draw(gRenderer, assets);
    }
    for (int i = 0; i < Egg_vect.size(); i++)
    {
        Egg_vect[i].draw(gRenderer, assets);
    }
    for (int i = 0; i < nest_vect.size(); i++)
    {
        nest_vect[i].draw(gRenderer, assets);
    }
}

void HUMania::createObject(int x, int y)
{
    int random;
    random = rand() % 3;
    std::cout << "Mouse clicked at: " << x << " -- " << y << std::endl;
    if (random == 0)
    {
        pig_vect.push_back(Pigeon(x, y));
    }
    else if (random == 1)
    {
        Egg_vect.push_back(Egg(x, y));
    }
    else if (random == 2)
    {
        nest_vect.push_back(Nest(x, y));
    }
}

HUMania::HUMania(SDL_Renderer *renderer, SDL_Texture *asst) : gRenderer(renderer), assets(asst) {}
