#include "fate/window.h"
#include "fate/log.h"
#include <SDL2/SDL.h>

namespace Fate {

  void Window::Initialize(WindowState& state) {
    if( SDL_Init( SDL_INIT_EVERYTHING ) < 0 ) {
      LogError( "SDL could not initialize!");
    }
  }

  void Window::Create(WindowState& state) {
    LogMessage("Initializing window");
    state.windowHandle = SDL_CreateWindow( state.windowTitle.c_str(),
                                           SDL_WINDOWPOS_UNDEFINED,
                                           SDL_WINDOWPOS_UNDEFINED,
                                           state.width,
                                           state.height,
                                           SDL_WINDOW_SHOWN );
    if( state.windowHandle == nullptr ) {
      LogError( "Window could not be created! ");
    }

    SDL_Delay( 2000 );
  }

  void Window::Shutdown(WindowState& state) {
    LogMessage("Shutting down window");
    if(state.windowHandle != nullptr) {
      SDL_DestroyWindow(state.windowHandle);
    }

    SDL_Quit();
  }
};
