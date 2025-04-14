#include "raylib.h"
#include <stdio.h>
#include <stdlib.h>
#include <libwebsockets.h>



/**
    This will be moved to network.c later
    ALSO: switch from rectangle to player struct to store more data
*/
void* PackPlayerData(int playerID,Rectangle)
{
    //Packed layout should be similar to:
    // playerId (4Bytes) --> xPos(4Bytes) --> yPos(4Bytes)
    
    //When reading from the server, there should just be an array of bytes with
    //all of this data for each player, then end the signal with something to
    //denote end of stream
    
    return NULL;
}





int main(void)
{
    
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
        DrawFPS(0,0);
        DrawRectangleRec(player,RAYWHITE);
        EndDrawing();
    }
    
    //This is probably not needed
    if(WindowShouldClose())
    {
        
            return 0;
    }
    
    
}
