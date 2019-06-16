#ifndef MAZE_MAZE_H
#define MAZE_MAZE_H

#include <SDL2/SDL.h>
#include "init.h"
#include "input.h"
#include "update.h"

void render_maze(SDL_Instance instance, map maze, player status);

void render_walls(SDL_Instance instance, map maze, player status);

void calculate_step(player status, camera *vars);

char do_DDA(map maze, camera *vars);

void draw_line(SDL_Instance instance, int window_x, double perp_wall_dist,
		player status);

#endif
