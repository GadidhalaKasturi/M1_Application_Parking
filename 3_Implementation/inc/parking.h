/** 
* @file parking.h
* parking has seven operations
*
*/
#ifndef PARKING_H
#define PARKING_H

#include <stdio.h>
#include <stdlib.h>
#include <stdio_ext.h>

struct vehicle
{
    int num;
    int row;
    int col;
  int type;
  struct tm *at;
};

#endif  /* #define __PARKING_H__ */
