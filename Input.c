#include "Input.h"

void query_input(point *ball, point* platform, vector* speed) {
	char buffer = '\0';

	buffer = '\0';

	if (_kbhit()){
		buffer = _getch();
	}

	if (buffer == 'a') {
		platform->x -= 2;
		platform->x = (int)fmax(platform->x, 0);
		if (!speed->component.x && !speed->component.y) {
			ball->x = platform->x + BALL_PLATFORM_OFFSET;
		}
	}
	else if (buffer == 'd') {
		platform->x += 2;
		platform->x = (int)fmin(platform->x, CONSOLE_WIDTH - PLATFORM_WIDTH);
		if (!speed->component.x && !speed->component.y) {
			ball->x = platform->x + BALL_PLATFORM_OFFSET;
		}
	}
	else if (buffer == ' ') {
		if (!speed->component.x && !speed->component.y) {
			speed->component.x = -1;
			speed->component.y = -1;
		}
	}
}
