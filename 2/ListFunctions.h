//
// Created by Radek on 27.10.2018.
//

#ifndef UNTITLED1_LISTFUNCTIONS_H
#define UNTITLED1_LISTFUNCTIONS_H

void startList(Pair **list, int listSize);
void add(Pair **list, Pair pair, int *listSize, int* pairsNumber);
void printList(Pair *list, int pairsNumber);
void freeList(Pair **list);
#endif //UNTITLED1_LISTFUNCTIONS_H
