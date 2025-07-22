// Enum demo
// Date : 22-JUL-2025

#include <stdio.h>


enum transportmode {
    TRUCK, TRAIN, FLIGHT, SHIP
};

void main()
{
  enum transportmode mode = TRUCK;

       if(mode == TRUCK)  // road
           printf("Road");
       else
         if(mode == TRAIN)  // train
           ;
}


