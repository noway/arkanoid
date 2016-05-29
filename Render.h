#ifndef RENDER_HEADER_ONCE
#define RENDER_HEADER_ONCE

#include <Windows.h>
#include <stdio.h>
#include "Main.h"

void remove_block(int y, int x);
void print_platform(point* platform);
void print_ball(point* shadow, point* ball);
void print_block_matrix();

#endif