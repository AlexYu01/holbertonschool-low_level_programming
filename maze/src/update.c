#include "../inc/update.h"

/**
 * update_player - Update the player's camera and position based on their
 * input.
 *
 * @maze: Struct containing a pointer to the layout of the maze.
 * @keys: Pointer to the struct containing status of keys.
 * @status: Pointer to the struct containing variables on camera position.
 */
void update_player(map maze, keys_state *keys, player *status)
{
	double old_time;
	double frame_time;
	double move_speed;
	double rot_speed;
	SDL_bool mouse_mode;

	old_time = status->time;
	status->time = SDL_GetTicks();
	frame_time = (status->time - old_time) / 1000.0;
	move_speed = frame_time * 5.0;
	mouse_mode = SDL_GetRelativeMouseMode();
	rot_speed = frame_time * 3.0;
	if (keys->advance == 1)
		move_forwd(move_speed, maze, status);
	if (keys->retreat)
		move_backwd(move_speed, maze, status);
	if (keys->m_left == 1)
	{
		rotate_left(rot_speed, status);
		keys->m_left = 0;
	}
	if (keys->m_right == 1)
	{
		rotate_right(rot_speed, status);
		keys->m_right = 0;
	}
	if (keys->right == 1)
	{
		if (mouse_mode == 0)
			rotate_right(rot_speed, status);
		else
			move_right(move_speed, maze, status);
	}
	if (keys->left == 1)
	{
		if (mouse_mode == 0)
			rotate_left(rot_speed, status);
		else
			move_left(move_speed, maze, status);
	}
}
/**
 * move_forwd - Move the player forward if allowed (no wall).
 *
 * @move_speed: The speed at which the player moves.
 * @maze: Struct containing a pointer to the layout of the maze.
 * @status: Pointer to the struct containing variables on camera position.
 */
void move_forwd(double move_speed, map maze, player *status)
{
	if (maze.layout[(int)(status->pos_x + status->dir_x * move_speed)]
	[(int)status->pos_y] == '0')
		status->pos_x += status->dir_x * move_speed;
	if (maze.layout[(int)status->pos_x]
	[(int)(status->pos_y + status->dir_y * move_speed)] == '0')
		status->pos_y += status->dir_y * move_speed;
}

/**
 * move_backwd - Move the player backwards if allowed (no wall).
 *
 * @move_speed: The speed at which the player moves.
 * @maze: Struct containing a pointer to the layout of the maze.
 * @status: Pointer to the struct containing variables on camera position.
 */
void move_backwd(double move_speed, map maze, player *status)
{
	if (maze.layout[(int)(status->pos_x - status->dir_x * move_speed)]
	[(int)status->pos_y] == '0')
		status->pos_x -= status->dir_x * move_speed;
	if (maze.layout[(int)status->pos_x]
	[(int)(status->pos_y - status->dir_y * move_speed)] == '0')
		status->pos_y -= status->dir_y * move_speed;
}

/**
 * rotate_right - Rotate the camera right.
 *
 * @rot_speed: Speed at which the camera rotates.
 * @status: Pointer to the struct containing variables on camera position.
 */
void rotate_right(double rot_speed, player *status)
{
	double old_dir_x;
	double old_plane_x;

	old_dir_x = status->dir_x;
	status->dir_x = status->dir_x * cos(-rot_speed) - status->dir_y *
			sin(-rot_speed);
	status->dir_y = old_dir_x * sin(-rot_speed) + status->dir_y *
			cos(-rot_speed);
	old_plane_x = status->camera_plane_x;
	status->camera_plane_x = status->camera_plane_x * cos(-rot_speed) -
			status->camera_plane_y * sin(-rot_speed);
	status->camera_plane_y = old_plane_x * sin(-rot_speed) +
			status->camera_plane_y * cos(-rot_speed);
}

/**
 * rotate_left - Rotate the camera left.
 *
 * @rot_speed: Speed at which the camera rotates.
 * @status: Pointer to the struct containing variables on camera position.
 */
void rotate_left(double rot_speed, player *status)
{
	double old_dir_x;
	double old_plane_x;

	old_dir_x = status->dir_x;
	status->dir_x = status->dir_x * cos(rot_speed) - status->dir_y *
			sin(rot_speed);
	status->dir_y = old_dir_x * sin(rot_speed) + status->dir_y * cos(rot_speed);
	old_plane_x = status->camera_plane_x;
	status->camera_plane_x = status->camera_plane_x * cos(rot_speed) -
			status->camera_plane_y * sin(rot_speed);
	status->camera_plane_y = old_plane_x * sin(rot_speed) +
			status->camera_plane_y * cos(rot_speed);
}
