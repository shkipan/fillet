#include "fillit.h"

int check_iter(char **tetra, int x, int y, char letter)
{
    tetra[x][y] = letter;
    if ((y < 3) && tetra[x][y + 1] == '#')
        check_iter(tetra, x, y + 1, letter);
    if ((x < 3) && tetra[x + 1][y] == '#')
        check_iter(tetra, x + 1, y, letter);
    if ((y > 0) && tetra[x][y - 1] == '#')
        check_iter(tetra, x, y - 1, letter);
    if ((x > 0) && tetra[x - 1][y] == '#')
        check_iter(tetra, x - 1, y, letter);
    return (1);
}

int valid_tetramino(char **tetra, char letter)
{
    int i;
    int j;

    i = 0;
    while (i < 4)
    {
        j = 0;
        while (j < 4)
        {
           if (tetra[i][j] == '#')
           {
               check_iter(tetra, i, j, letter);
               return (0);
           }
            j++;
        }
        i++;
    }
    return (1);
}