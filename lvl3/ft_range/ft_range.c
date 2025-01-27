#include<stdlib.h>
#include<stdio.h>

int     *ft_range(int start, int end)
{
    int i;
    int j;
    int *range;

    j = abs((end - start));
    i = 0;
    range = (int *) malloc ((j) * sizeof(int));
    if(start <= end)
    {
        while (start <= end)
        {
            range[i] = start;
            start++;
            i++;
        }
    }
    else
        while (start >= end)
        {
            range[i] = start;
            start--;
            i++;
        }
    return (range);
}

int main(void)
{
    int start = 1;
    int end = 3;
    int *range;
    int i = 0;

    range = ft_range(start, end);
    while(i <= abs(start - end))
    {
        printf("%d", range[i]);
        i++;
    }
    return 0;
}