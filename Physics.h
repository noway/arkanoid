#ifndef PHYSICS_HEADER_ONCE
#define PHYSICS_HEADER_ONCE

#include <Windows.h>
#include <math.h>
#include "Main.h"

void ball_physics(int* skip, point* ball, point* platform, block blocks[BLOCKS_ROWS][BLOCKS_COLUMNS], vector* speed);

#endif