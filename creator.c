#include "fillit.h"

char    ***create(char ***massive)
{
  int i;
  int j;
  int k;

  k = 0;
  massive = (char ***)malloc(sizeof(char **) * 5);
  while (k < 4)
  {
    massive[k] = (char **) malloc(sizeof(char *) * 5);
    i = 0;
    while (i < 4) {
      massive[k][i] = (char *) malloc(sizeof(char) * 6);
      i++;
    }
    k++;
  }
  k = 0;
  while (k < 4)
  {
    fill(massive[k]);
    k++;
  }
  massive[k] = NULL;
  return (massive);
}
