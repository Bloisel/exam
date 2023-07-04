#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <string.h>

typedef struct  s_point
{
    int           x;
    int           y;
}               t_point;

void flood_fill_recursive(char **tab, t_point size, t_point begin, char c, char old_c)
{
    if (begin.x < 0 || begin.x >= size.x || begin.y < 0 || begin.y >=size.y)
        return;
    if (tab[begin.y][begin.x] != old_c)
        return;
    tab[begin.y][begin.x] = c;

    flood_fill_recursive(tab , size , (t_point){begin.x - 1 , begin.y} , c , old_c);
    flood_fill_recursive(tab , size , (t_point){begin.x + 1 , begin.y} , c , old_c);
    flood_fill_recursive(tab , size , (t_point){begin.x , begin.y - 1} , c , old_c);
    flood_fill_recursive(tab , size , (t_point){begin.x , begin.y + 1} , c , old_c);
}

void flood_fill(char **tab, t_point size, t_point begin)
{
    char old_c = tab[begin.y][begin.x];
    char c = 'F';
    flood_fill_recursive(tab, size, begin, c , old_c);
}