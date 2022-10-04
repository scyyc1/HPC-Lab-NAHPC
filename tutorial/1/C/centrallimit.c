#include <stdlib.h>
#include <stdio.h>
#include "uni.h"

#define SEED  5743

int main(int argc, char **argv)
{

  float sample;
  
  rinit(SEED);

  sample = uni();

  printf("Random number: %f \n", sample);
  
  
}
