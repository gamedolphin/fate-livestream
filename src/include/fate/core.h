#pragma once
#include "gamestate.h"

namespace Fate {

  class Game {
  public:
    static void Initialize(GameState& state);
    static void Run(GameState& state);
    static void Shutdown(GameState& state);
  };
}
