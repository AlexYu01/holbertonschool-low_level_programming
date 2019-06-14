#ifndef MAZE_UPDATE_H
#define MAZE_UPDATE_H

#include <SDL2/SDL.h>
#include "init.h"

void update_player(map maze, keys_state *keys, player *status);

void move_forwd(double move_speed, map maze, player *status);

void move_backwd(double move_speed, map maze, player *status);

void move_left(double move_speed, map maze, player *status);

void move_right(double move_speed, map maze, player *status);

void rotate_left(double rot_speed, player *status);

void rotate_right(double rot_speed, player *status);

#endif
