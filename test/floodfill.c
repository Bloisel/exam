#include <stdlib.h>
#include <stdio.h>


typedef struct  s_point
  {
    int           x;
    int           y;
  }               t_point;

void  flood_fill(char **tab, t_point size, t_point begin);
char** make_area(char** zone, t_point size);
void flood_fill_recursive(char **tab ,t_point size , t_point begin, char c ,char old_c );


char** make_area(char** zone, t_point size)
{
	char** new;

	new = malloc(sizeof(char*) * size.y);
	for (int i = 0; i < size.y; ++i)
	{
		new[i] = malloc(size.x + 1);
		for (int j = 0; j < size.x; ++j)
			new[i][j] = zone[i][j];
		new[i][size.x] = '\0';
	}

	return new;
}



// void	fill(char **tab, t_point size, t_point cur, char to_fill)
// {
// 	if (cur.y < 0 || cur.y >= size.y || cur.x < 0 || cur.x >= size.x
// 		|| tab[cur.y][cur.x] != to_fill)
//         {
//             printf("ökkk");
//             return;
//         }

// 	tab[cur.y][cur.x] = 'F';
// 	fill(tab, size, (t_point){cur.x - 1, cur.y}, to_fill);
// 	fill(tab, size, (t_point){cur.x , cur.y}, to_fill);
// 	fill(tab, size, (t_point){cur.x, cur.y - 1}, to_fill);
// 	fill(tab, size, (t_point){cur.x, cur.y + 1}, to_fill);
// }

// void	flood_fill(char **tab, t_point size, t_point begin)
// {
// 	fill(tab, size, begin, tab[begin.y][begin.x]);
// }


void flood_fill_recursive(char **tab, t_point size, t_point begin, char c, char old_c)
{
  if (begin.x < 0 || begin.x >= size.x || begin.y < 0 || begin.y >= size.y)
    return;
  if (tab[begin.y][begin.x] != old_c)
    return;
    
    
    tab[begin.y][begin.x] = c;
  
  flood_fill_recursive(tab, size, (t_point){begin.x - 1, begin.y}, c, old_c);
  flood_fill_recursive(tab, size, (t_point){begin.x + 1, begin.y}, c, old_c);
  flood_fill_recursive(tab, size, (t_point){begin.x, begin.y - 1}, c, old_c);
  flood_fill_recursive(tab, size, (t_point){begin.x, begin.y + 1}, c, old_c);
}

void flood_fill(char **tab, t_point size, t_point begin)
{
  char old_c = tab[begin.y][begin.x];
  char c = 'F';
  flood_fill_recursive(tab, size, begin, c, old_c);
}

int main(void)
{
	t_point size = {8, 5};
	char *zone[] = {
		"11111111",
		"10001001",
		"10010001",
		"10110001",
		"11100001",
	};

	char**  area = make_area(zone, size);
	for (int i = 0; i < size.y; ++i)
		printf("%s\n", area[i]);
	printf("\n");

	t_point begin = {7, 4};
	flood_fill(area, size, begin);
	for (int i = 0; i < size.y; ++i)
		printf("%s\n", area[i]);
	return (0);
}



// void fill(char **tab , t_point size , t_point begin ,  char to_fill)
    // fill (tab . size , begin , tab[begin.y][begin.x])

// void fill(char **tab , t_point size , t_point begin ,  char to_fill)
//{



//}