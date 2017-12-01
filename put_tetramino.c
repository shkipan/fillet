#include "fillit.h"

void  ft_put_tetramino(char **tetra) {
  int i;
  int j;

  i = 0;
  while (i < 4) {
    j = 0;
    while (j < 5)
    {
      ft_putchar(tetra[i][j]);
      j++;
    }
    i++;
  }
}
