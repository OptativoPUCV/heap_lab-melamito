#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <ctype.h>
#include "heap.h"

typedef struct nodo{
   void* data;
   int priority;
}heapElem;

typedef struct Heap{
  heapElem* heapArray;
  int size;
  int capac;
} Heap;


void* heap_top(Heap* pq){
    return NULL;
}



void heap_push(Heap* pq, void* data, int priority){
  if(pq->size+1>pq->capac){
        //printf("se expande de %i a ", pq->capac);
        pq->capac=(pq->capac)*2+1;
        //printf("%i * %lu", pq->capac, sizeof(heapElem));
        pq->heapArray=realloc(pq->heapArray, (pq->capac)*sizeof(heapElem));
    }

    /*Flotación*/
    int now = pq->size;
    while(now>0 && pq->heapArray[(now-1)/2].priority < priority)
        {
                pq->heapArray[now] = pq->heapArray[(now-1)/2];
                now = (now -1)/2;
        }
    pq->heapArray[now].priority = priority;
    pq->heapArray[now].data = data;
    pq->size++;
}


void heap_pop(Heap* pq){

}

Heap* createHeap(){

   return NULL;
}
