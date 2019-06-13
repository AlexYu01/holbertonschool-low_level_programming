#ifndef MAZE_INPUT_H
#define MAZE_INPUT_H

#include <SDL2/SDL.h>
#include "init.h"

int poll_inputs(keys_state *keys);

void update_player(keys_state keys, player *status);

#endif
