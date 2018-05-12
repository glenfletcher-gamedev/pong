#ifndef GETTINGSTARTED_H
#define GETTINGSTARTED_H

#include <game.h>
#include <vector>


class Pong : public Game
{
    private:
        bool onInit();
        void onExit();
        void onEvent(sf::Event &e);
        void onUpdate(float dt);
        void onDraw(sf::RenderTarget &canvas, float alpha);

        EntityID player, computer, ball;

        int S = 1;
};

#endif // GETTINGSTARTED_H
