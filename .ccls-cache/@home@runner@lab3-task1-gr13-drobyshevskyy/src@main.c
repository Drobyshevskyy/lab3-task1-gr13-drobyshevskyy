//Victor Drobyshevskyy 13

//main function takes array elements from command line arguments and prints each of them that is not a complete square

#include <stdio.h>
#include <stdlib.h>
#include "interface.h"

int main (int argc, char *argv[])
{
	for (int i = 0; i < argc; i++) 
    {
      int x = atoi(argv[i]);
      if (!checkSquare(x))
      {
        printf("%i ", x);
      }
    }
  return 0;
}
