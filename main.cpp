#include "raylib.h"

// Classes
int main()
{
    int winWidth{800};
    int winHeight{600};
    char winTitle[] = "Title";

    InitWindow(winWidth, winHeight, winTitle);

    // Declarations
    
    // Texture2D texture = LoadTexture("path");

    SetTargetFPS(60);
    while(!WindowShouldClose())
    {
        BeginDrawing();
        ClearBackground(WHITE);

        // Game logic

        EndDrawing();
    }

    // Unload Textures
    //UnloadTexture(texture);

    CloseWindow();
}