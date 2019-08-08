#include "fate/core.h"
#include "fate/gamestate.h"
#include "fate/window.h"

namespace Fate {

  void Game::Initialize(GameState& state) {
    Window::Initialize(state.windowState);
  }

  void Game::Run(GameState &state) {
    Window::Create(state.windowState);
  }

  void Game::Shutdown(GameState &state) {
    Window::Shutdown(state.windowState);
  }
}
