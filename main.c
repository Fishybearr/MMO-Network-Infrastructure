#include "raylib.h"
#include <stdio.h>
int main(void)
{
    printf("Hello World");
    
    //create window
    const int screenWidth = 800;
    const int screenHeight = 800;
    
    InitWindow(screenWidth,screenHeight,"MMO Test Window");
    
    SetTargetFPS(60);
    
    SetExitKey(KEY_NULL);
    
    Rectangle player = {20,20,50,50};
    
    
    
    
    while(!WindowShouldClose())
    {
        //Movement
        //if key press player.x or y ++ or --
        
        //Render
        BeginDrawing();
        ClearBackground(BLUE);
        DrawText("Hey",0,0,34,RAYWHITE);
        DrawRectangleRec(player,RAYWHITE);
        EndDrawing();
    }
    
    //This is probably not needed
    if(WindowShouldClose())
    {
            return 0;
    }
    
    
}