#ifndef PONG_MAIN_H
#define PONG_MAIN_H
#include <raylib.h>
#endif

typedef struct {
	Pad player1;
	Pad playet2;
	Ball ball;
} GameData;

void Loop(GameData* data);
void Update(GameData* data);
void Draw(GameData* data);
