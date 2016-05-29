#include "Util.h"

void move_cursor_to(int row, int column) {
	HANDLE console_window = GetStdHandle(STD_OUTPUT_HANDLE);
	COORD position;
	position.X = column;
	position.Y = row;
	SetConsoleCursorPosition(console_window, position);
}

void init_block_matrix(block blocks[BLOCKS_ROWS][BLOCKS_COLUMNS]) {
	for (size_t y = 0; y < BLOCKS_ROWS; y++) {
		for (size_t x = 0; x < BLOCKS_COLUMNS; x++) {
			blocks[y][x] = STANDS;
		}
	}
}