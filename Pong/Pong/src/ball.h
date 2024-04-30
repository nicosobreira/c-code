#include "pad.h"
#include <raylib.h>

typedef struct {
  Vector2 Position;
  Vector2 Velocity;
} Ball;

void UpdateBall(Ball *ball) {
  ball->Position.x += GetFrameTime() * ball->Velocity.x;
  ball->Position.y += GetFrameTime() * ball->Velocity.y;
}
void DrawBall(Ball *ball) {
  DrawRectangle(ball->Position.x - 5, ball->Position.y - 5, 10, 10, WHITE);
}
bool ColisionBallPad(Ball *ball, Pad* pad) {
  if (ball->Position.x >= pad->Position.x &&
      ball->Position.x <= pad->Position.x + pad->Size.x) {
    if (ball->Position.y >= pad->Position.y - (pad->Size.y / 2) &&
        ball->Position.y <= pad->Position.y + (pad->Size.y / 2)) {
      return true;
    }
  }
  return false;
}
