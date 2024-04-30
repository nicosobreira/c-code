#include <raylib.h>

typedef struct {
	int UpButton;
	int DownButton;
} InputScheme;

typedef struct {
	InputScheme Scheme;
	int Score;
	float Speed;

	Vector2 Position;
	Vector2 Size;
} Pad;

void UpdatePad(Pad* pad) {
	int height = GetScreenHeight();

	if (IsKeyDown(pad->Scheme.DownButton)) {
		pad->Position.y += GetFrameTime() * pad->Speed;

		// Limit the movement
		if (pad->Position.y + pad->Size.y / 2 > height) {
			pad->Position.y = height - pad->Size.y / 2;
		}
	}

	if (IsKeyDown(pad->Scheme.UpButton)) {
		pad->Position.y -= GetFrameTime() * pad->Speed;

		if (pad->Position.y - pad->Size.y / 2 < 0) {
			pad->Position.y = pad->Size.y / 2;
			}
	}
}

void DrawPad(Pad* pad) {
	DrawRectangle(pad->Position.x, pad->Position.y - (pad->Size.y / 2), pad->Size.x, pad->Size.y, WHITE);
}
