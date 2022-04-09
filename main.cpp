/*****************
    only Windows
 *****************/
#ifdef _WIN32
#include <SDL.h>
#pragma comment(lib, "SDL2.lib")
#pragma comment(lib, "glew32s.lib")
#pragma comment(lib, "opengl32.lib")

/*****************
    other OS
 *****************/
#else
#include <SDL2/SDL.h>
#endif



int main() {
    SDL_Window* window;
    SDL_Init(SDL_INIT_EVERYTHING);

    window = SDL_CreateWindow("C++ OpenGL Tutorial", SDL_WINDOWPOS_CENTERED, SDL_WINDOWPOS_CENTERED, 800, 600, SDL_WINDOW_OPENGL);
    SDL_GLContext glContext = SDL_GL_CreateContext(window);

    bool close = false;
    while (!close) {

        SDL_Event event;
        while (SDL_PollEvent(&event)) {
            if (event.type == SDL_QUIT) {
                close = true;
            }
        }
    }

    return 0;
}
