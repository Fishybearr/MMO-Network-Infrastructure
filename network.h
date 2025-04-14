#ifndef NETWORK_H
#define NETWORK_H

typedef struct player
{
   int x;
   int y;
} player_t;

void* PackPlayerData(player_t);

#endif