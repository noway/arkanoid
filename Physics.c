#include "Physics.h"

void ball_physics(int* skip, point* ball, point* platform, block blocks[BLOCKS_ROWS][BLOCKS_COLUMNS], vector* speed) {
	if (!*skip){
		ball->x += speed->component.x;
		ball->y += speed->component.y;
	}
	(*skip)++;
	if (*skip == 2) {
		*skip = 0;
	}

	if (ball->x < 0) {
		ball->x += 1;
		speed->component.x *= -1;
	}
	else if (ball->x >= CONSOLE_WIDTH) {
		ball->x -= 1;
		speed->component.x *= -1;
	}

	if (ball->y < 0) {
		ball->y += 1;
		speed->component.y *= -1;
	}
	else if (ball->y >= CONSOLE_HEIGHT) {
		if (ball->x >= platform->x && ball->x <= platform->x + PLATFORM_WIDTH){
			ball->y -= 1;
			speed->component.y *= -1;
		}
		else {
			ball->x = platform->x + 2;
			ball->y = 14;
			speed->component.x = 0;
			speed->component.y = 0;
		}
	}

	if (ball->y < 6) {
		int block_row = ball->y / BLOCK_HEIGHT;
		int block_column = ball->x / BLOCK_WIDTH;

		if (blocks[block_row][block_column] == STANDS) {

			blocks[block_row][block_column] = EMPTY;
			remove_block(block_row, block_column);

			speed->component.x *= -1;
			speed->component.y *= -1;
		}
	}
}
