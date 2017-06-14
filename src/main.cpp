#include <SDL.h>

int main(int, char**)
{
	SDL_Window* window = SDL_CreateWindow("main", 0,0, 800, 600, 0);

	SDL_Delay(3000);

	SDL_DestroyWindow(window);

	return 0;
}