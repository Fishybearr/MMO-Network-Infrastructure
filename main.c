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
    player.x = 20;
    player.y = 20;
    
    
    
    
    while(!WindowShouldClose())
    {
        //Movement
        //if key press player.x or y ++ or --
        if(IsKeyDown(KEY_D))
        {
            
            player.x += 10;
        }
        
        if(IsKeyDown(KEY_A))
        {
            
            player.x -= 10;
        }
        
        if(IsKeyDown(KEY_W))
        {
            
            player.y -= 10;
        }
        
        if(IsKeyDown(KEY_S))
        {
            
            player.y += 10;
        }
        
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