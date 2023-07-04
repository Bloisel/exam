#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

int	*ft_range(int start, int end)
{
    int len = end - start + 1;
    int *range;
    int i = 0;

    if (len <= 0)
        return NULL;
    range = malloc(sizeof(int *) * len);
    if (range == 0)
        return NULL;
    while (i < len)
    {
        range[i] = start + i;
        i++;
    }
    return (range);
    

}

int	main(void)
{
    int *range;
    int i;
    
    range = ft_range(1, 5);
    if (!range)
    {
        printf("Memory allocation failed\n");
        return (1);
    }
    i = 0;
    while (range[i])
    {
        printf("%d ", range[i]);
        i++;
    }
    printf("\n");
    free(range);
    return (0);
}






ft_rrrange

int *range;
int i = 0;
int len = end - start + 1


if start > end 
    return ft_rrrrange(end , start)
range = malloc sizeof int * * len 

if (range)
{    
    while (i < len)
        range[i] = end;
        end--;
        i++;
}
return range 

