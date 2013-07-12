#include <stdio.h>

#define GRID_WIDTH 1
#define GRID_HEIGHT 1

#ifndef STARCRAFT_H
#include

int main(void)
{
    printf("Hello World!\n");
    return 0;
}

int select(int** array,int k,int N){

}

int sort(int** array,int N){

}

int swap(int* bigger,int* smaller){
    int temp = *smaller;
    *smaller = *bigger;
    *bigger = temp;
}

int event(pStarcraftUnit attacker,pStarcraftUnit defender,int event){

}

void getNearbyUnit(pStarcraftUnit){

}
