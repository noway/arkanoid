#include <stdio.h>

#include "Main.h"

int main(int argc, char* argv[]) {

	block blocks[BLOCKS_ROWS][BLOCKS_COLUMNS] = { 0 };

	point ball = { BALL_PLATFORM_OFFSET, CONSOLE_HEIGHT };
	point shadow = { BALL_PLATFORM_OFFSET, CONSOLE_HEIGHT };
	point platform = { 0, CONSOLE_HEIGHT };
	vector speed = { { 0, 0 } };

	unsigned int skip = 0;

	init_block_matrix(blocks);
	print_block_matrix(blocks);

	while (1) {
		print_platform(&platform);
		print_ball(&shadow, &ball);

		Sleep(1000/24); // cinematic experience

		query_input(&ball, &platform, &speed);
		ball_physics(&skip, &ball, &platform, blocks, &speed);
	}
	return 0;
}