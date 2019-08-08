#pragma once
#include <string>

struct SDL_Window;

namespace Fate {

  class Game;

  struct WindowState {
    std::string windowTitle;
    int width;
    int height;
    SDL_Window* windowHandle = nullptr;
  };

  class Window {
  private:
    friend class Game;
    static void Initialize(WindowState& state);
    static void Create(WindowState& state);
    static void Shutdown(WindowState& state);
  };
}
