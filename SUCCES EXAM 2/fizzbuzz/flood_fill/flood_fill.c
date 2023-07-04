#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>
 typedef struct  s_point
  {
    int           x;
    int           y;
  }               t_point;


void  flood_fill_recursvie(char **tab, t_point size, t_point begin , char old_c , char c)
{
    if (begin.x >= size.x || begin.x < 0 || begin.y >= size.y || begin.y < 0)
        return;
    if (tab[begin.y][begin.x] != old_c)
        return;
    tab[begin.y][begin.x] = c;
    flood_fill_recursvie(tab , size , (t_point){begin.x - 1 , begin.y} , old_c , c);
    flood_fill_recursvie(tab , size , (t_point){begin.x + 1, begin.y} , old_c , c);
    flood_fill_recursvie(tab , size , (t_point){begin.x , begin.y - 1} , old_c , c);
    flood_fill_recursvie(tab , size , (t_point){begin.x , begin.y + 1} , old_c , c);
}

void  flood_fill(char **tab, t_point size, t_point begin)
{
    char old_c = tab[begin.y][begin.x];
    char c = 'F';
    flood_fill_recursvie(tab , size , begin , old_c , c);
}
