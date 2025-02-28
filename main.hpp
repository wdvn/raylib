//#include "raylib.h"
//
//int main() {
//  InitWindow(800, 600, "raylib example");
//
//  while (!WindowShouldClose()) {
//    BeginDrawing();
//    ClearBackground(RAYWHITE);
//    DrawText("Hello, raylib!", 10, 10, 20, BLACK);
//    EndDrawing();
//  }
//
//  CloseWindow();
//  return 0;
//}

//compile
//clang++ main.cpp -o main -I./include -L./lib -lraylib -lGL -lX11 -lpthread -lm -ldl -Wl,-rpath,./lib
#ifdef DEBUG
#include <jule.hpp>
#endif

#include "raylib.h"