#ifndef MAIN_HEADER_ONCE
#define MAIN_HEADER_ONCE

#define BLOCKS_ROWS 3
#define BLOCKS_COLUMNS 10

#define BLOCK_HEIGHT 2
#define BLOCK_WIDTH 5

#define CONSOLE_WIDTH (BLOCK_WIDTH * BLOCKS_COLUMNS)
#define CONSOLE_HEIGHT (BLOCKS_ROWS * BLOCK_HEIGHT + 9)

#define PLATFORM_WIDTH 5
#define BALL_PLATFORM_OFFSET 2

enum Block {
	EMPTY,
	STANDS,
};

struct Point {
	int x;
	int y;
};

struct Vector {
	struct Point component;
};

typedef enum Block block;
typedef struct Point point;
typedef struct Vector vector;

#include "Input.h"
#include "Physics.h"
#include "Render.h"
#include "Util.h"


#endif