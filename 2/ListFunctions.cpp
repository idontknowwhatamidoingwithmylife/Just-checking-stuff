//
// Created by Radek on 27.10.2018.
//
#include <cstdlib>
#include <iostream>
#include "Pair.h"
#include "ListFunctions.h"
void startList(Pair **list, int listSize){
    #ifdef DEBUG
        std::cout << "Alokacja pamieci." << std::endl;
    #endif

    *list = (Pair *)malloc(sizeof(Pair) * listSize);
}

void add(Pair **list, Pair pair, int *listSize, int *pairsNumber){
    #ifdef DEBUG
        std::cout << "Dodawanie " << *pairsNumber << " elementu." << std::endl;
    #endif

    (*pairsNumber)++;
    if(*listSize < *pairsNumber) {
        (*listSize)++;
        *list = (Pair *)realloc(*list, sizeof(Pair) * (*listSize));
    }
    (*list)[*pairsNumber - 1] = pair;
}

void printList(Pair *list, int pairsNumber){
    for(int i = 0; i < pairsNumber; i++)
        std::cout << "(" << list[i].x << ", " << list[i].y << ")\n";
}

void freeList(Pair **list){
    #ifdef DEBUG
    std::cout << "Zwalnianie pamieci." << std::endl;
    #endif
    free(*list);
}
