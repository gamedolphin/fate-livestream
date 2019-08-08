#include <iostream>
#include <fate/log.h>
#include <fate/gamestate.h>
#include <fate/core.h>

int main() {

  Fate::GameState gameState;

  gameState.windowState = {
                           .windowTitle = "HELLO WORLD",
                           .width = 800,
                           .height = 600
  };

  Fate::Game::Initialize(gameState);

  Fate::Game::Run(gameState);

  Fate::Game::Shutdown(gameState);

  return 0;
}
