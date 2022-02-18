#include <gb/gb.h>
#include <gb/metasprites.h>
#include "util.h"
#include "Gameplay/ghosts.h"
#include "Gameplay/Pacman.h"
#include "Gameplay/Character.h"
#include "graphics/Pacman.h"
#include "graphics/Ghosts.h"
#include "graphics/GhostsScared.h"
#include "graphics/GhostsEaten.h"
#include "graphics/Map.h"
#include "graphics/Dots.h"
#include "graphics/TargetTiles.h"
#include "cOMMON.h"

uint8_t ghostsReady=0;
uint8_t ghostsResetting=0;
uint16_t scatterChaseCounter,frightenedTimer;
uint8_t scatterOrChaseMode=CHASE;
uint8_t frigtenedTwoFrameAnimator,frigtenedOffset;


// Where each ghost starts, and where they scatter to
const Vector2D GhostsStartPositions[]={ {9,12}, {10,10},  {10,12}, {11,12}};
const Vector2D GhostsScatterTargets[]={ {20,27}, {18,-4},  {2,-4}, {0,27}};

// An eay way to get a directional priority using one of our direction values
// None, Up, Right, Down, Left respectively
const uint8_t DirectionalPriorities[]={ 3, 0, 1, 2 };


void GetGhostNextDirection(uint8_t ghostIndex){

}

void GetGhostTargetTile(uint8_t ghostIndex){
}

void SetupGhosts(){
}

void UpdateSingleGhost(uint8_t i){
}
void DrawGhost(uint8_t i){
}


void UpdateScatterOrChaseMode(){
}

void UpdateAllGhosts(){
}