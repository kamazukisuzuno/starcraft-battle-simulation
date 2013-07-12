#ifndef STARCRAFT_H
#define STARCRAFT_H

typedef struct{
    int     attack;
    float   attackInterval;
    int     range;
    int     splashRadius;
    int     health;
    int     shield;
    int     defence;
    int     shieldDefence;
    float   movementSpeed;
    int     collsionRadius;
    int     attributes;
}StarcraftUnit,*pStarcraftUnit;

typedef struct{
    pStarcraftUnit starcraftUnit;
    int isAlive;
    int x;
    int y;
}InGameUnit,*pInGameUnit;

typedef struct{
    pInGameUnit units[256];
    int unitsCount;
}MapGrid,*pMapGrid;

typedef struct{

}Map,*pMap;



#endif // STARCRAFT_H
