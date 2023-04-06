//Victor Drobyshevskyy 13
//Implementation of interface.h function checkSquare

#include "interface.h"
#include <math.h>

bool checkSquare(int x)
{
  return (sqrt(x) - (int)(sqrt(x)) == 0);
}