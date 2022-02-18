#include <gb/gb.h>
#include <gb/metasprites.h>
#include "common.h"
#include "Gameplay/Character.h"
#include "util.h"
#include "graphics/Map.h"
#include "graphics/Dots.h"

uint8_t directionsCharacterCanMoveIn[4] = {0,0,0,0},numberOfDirectionsCharacterCanMoveIn=0;

void GetDirectionsCharacterCanMoveIn(Character *character,uint8_t allowReverse){
}

uint8_t CanCharacterMoveInThisDirection(Character *character, uint8_t direction){

    return 0;
}


void TryChangeDirection(Character *character, uint8_t nextDirection){
}

uint8_t MoveForward(Character *character, uint8_t speed){
    return 0;
}

void DrawCharacter(Character *character, metasprite_t const *metasprites, uint8_t baseSprite, uint8_t baseTile){
}