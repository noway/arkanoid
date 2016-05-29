#include "Render.h"


void remove_block(int y, int x) {
	move_cursor_to(y * BLOCK_HEIGHT, x * BLOCK_WIDTH);
	printf("     ");
	move_cursor_to(y * BLOCK_HEIGHT + 1, x * BLOCK_WIDTH);
	printf("     ");
}

void print_platform(point* platform) {
	move_cursor_to(CONSOLE_HEIGHT - 1, 0);
	for (size_t i = 0; i < CONSOLE_WIDTH; i++)
	{
		printf(" ");
	}
	move_cursor_to(CONSOLE_HEIGHT - 1, platform->x);
	printf("_____\n"); // PLATFORM_WIDTH characters
}

void print_ball(point* shadow, point* ball) {
	move_cursor_to(shadow->y, shadow->x);
	printf(" ");

	move_cursor_to(ball->y, ball->x);
	printf("*");

	shadow->x = ball->x;
	shadow->y = ball->y;
}

void print_block_matrix() {
	for (size_t y = 0; y < BLOCKS_ROWS; y++) {
		for (size_t x = 0; x < BLOCKS_COLUMNS; x++) {
			move_cursor_to(y * BLOCK_HEIGHT, x * BLOCK_WIDTH);
			printf("ÉÍÍÍ»"); // shows as box drawing characters in 850 code page
			move_cursor_to(y * BLOCK_HEIGHT + 1, x * BLOCK_WIDTH);
			printf("ÈÍÍÍ¼");
		}
	}
}