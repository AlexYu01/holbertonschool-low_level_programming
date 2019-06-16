#include "../inc/update.h"

/**
 * move_left - Move the player laterally left if allowed (no wall). Takes
 * the perpendicular of dir_x and dir_y to acquire lateral distance.
 *
 * @maze: Struct containing a pointer to the layout of the maze.
 * @status: Pointer to the struct containing variables on camera position.
 */
void move_left(map maze, player *status)
{
	double dist_x;
	double dist_y;

	dist_x = status->dir_y * status->move_speed;
	dist_y = status->dir_x * status->move_speed;
	if (maze.layout[(int)(status->pos_x - dist_x)][(int)status->pos_y] == '0')
		status->pos_x -= dist_x;
	if (maze.layout[(int)status->pos_x][(int)(status->pos_x + dist_y)] == '0')
		status->pos_y += dist_y;
}

/**
 * move_right - Move the player laterally right if allowed (no wall). Takes
 * the perpendicular of dir_x and dir_y to acquire lateral distance.
 *
 * @maze: Struct containing a pointer to the layout of the maze.
 * @status: Pointer to the struct containing variables on camera position.
 */
void move_right(map maze, player *status)
{
	double dist_x;
	double dist_y;

	dist_x = status->dir_y * status->move_speed;
	dist_y = status->dir_x * status->move_speed;
	if (maze.layout[(int)(status->pos_x + dist_x)][(int)status->pos_y] == '0')
		status->pos_x += dist_x;
	if (maze.layout[(int)status->pos_x][(int)(status->pos_y - dist_y)] == '0')
		status->pos_y -= dist_y;
}
