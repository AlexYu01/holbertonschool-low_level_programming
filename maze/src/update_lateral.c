#include "../inc/update.h"

/**
 * move_left - Move the player forward if allowed (no wall).
 *
 * @move_speed: The speed at which the player moves.
 * @maze: Struct containing a pointer to the layout of the maze.
 * @status: Pointer to the struct containing variables on camera position.
 */
void move_left(double move_speed, map maze, player *status)
{
	if (maze.layout[(int)(status->pos_x - status->dir_y * move_speed)]
	[(int)status->pos_y] == '0')
		status->pos_x -= status->dir_y * move_speed;
	if (maze.layout[(int)status->pos_x][(int)(status->pos_x + status->dir_y *
	move_speed)] == '0')
		status->pos_y += status->dir_x * move_speed;
}

/**
 * move_right - Move the player forward if allowed (no wall).
 *
 * @move_speed: The speed at which the player moves.
 * @maze: Struct containing a pointer to the layout of the maze.
 * @status: Pointer to the struct containing variables on camera position.
 */
void move_right(double move_speed, map maze, player *status)
{
	if (maze.layout[(int)(status->pos_x + status->dir_y * move_speed)]
	[(int)status->pos_y] == '0')
		status->pos_x += status->dir_y * move_speed;
	if (maze.layout[(int)status->pos_x][(int)(status->pos_y - status->dir_x *
	move_speed)] == '0')
		status->pos_y -= status->dir_x * move_speed;
}
