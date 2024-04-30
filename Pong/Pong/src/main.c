#include "main.h"
#include <raylib.h>

// Main game loop
void Loop() {
	while (!WindowShouldClose()) {
		Update();
		Draw();
	}
}

// Game rules
void Update() {
	//
}

void Draw() {
	// Get coordenates for the middle line
	Vector2 from = {.x = (GetScreenWidth() / 2.f), .y = 5};
	Vector2 to = {.x = (GetScreenWidth() / 2.f), .y = (GetScreenHeight() - 5.f)};
	
	// Creates the score
	const char* score_left = TextFormat("%d", 10);
	int score_size_left = MeasureText(score_left, 20);

	const char* score_right = TextFormat("%d", 11);

	BeginDrawing();
	ClearBackground(BLACK);
	
	// Draw the middle line
	DrawLineEx(from, to, 2, LIGHTGRAY);
	
	// Draw the score
	DrawText(score_left, (GetScreenWidth() / 2) - 10 - score_size_left, 10, 20, LIGHTGRAY);
	DrawText(score_right, (GetScreenWidth() / 2) + 10, 10, 20, LIGHTGRAY);

	EndDrawing();
}

int main() {
	int screen_width = 800;
	int screen_height = 450;
	InitWindow(screen_width, screen_height, "Pong");
	SetTargetFPS(60);

	Loop();

	return 0;
}
