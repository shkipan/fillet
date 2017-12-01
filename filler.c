#include "fillit.h"

#define x1 "....\n##..\n##..\n....\n"

void fill(char **letter)
{
  int i;
  int j;

  i = 0;
  while (i < 4)
  {
    j = 0;
    while(j < 5)
    {
        letter[i][j] = x1[5 * i + j];
        j++;
    }
    letter[i][j] = '\0';
    i++;
  }
  letter[i] = NULL;
}
