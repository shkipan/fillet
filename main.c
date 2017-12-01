#include "fillit.h"

int main(void)
{
  int i;
  char ***field;

  field = create(field);
  i = 0;
  while (i < 4)
  {
    ft_put_tetramino(field[i]);
    i++;
  }
  free(field);
  return (0);
}
