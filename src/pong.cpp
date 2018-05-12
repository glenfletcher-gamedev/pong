#include "pong.h"
#include <iostream>

AGL_IMPLIEMENT_GAME(Pong)

const sf::Vector2i size = {800, 600};
const float radius = 10.f;
const float FPS = 30.0f;
const float refresh = 5.0f;

bool Pong::onInit() {
    setSize(size);
    setTitle("Pong");
    setFPS(FPS);
    setRefresh(refresh);
    return true;
}

void Pong::onExit() {
    objectManager().destroyAll();
}

void Pong::onEvent(sf::Event &e) {

}

void Pong::onUpdate(float dt) {
    objectManager().update(dt, S); // Handle Physics
    S = !S; // flip state
}

void Pong::onDraw(sf::RenderTarget &canvas, float alpha) {
    objectManager().draw(canvas, alpha, S); // Draw Game Objects
}
