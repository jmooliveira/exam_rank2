#include<stdio.h>
#include<stdlib.h>

int     *ft_rrange(int start, int end)
{
    int *r_range;
    int i;
    int j;
    int swap;
    int begin;

    r_range  = (int *) malloc ((abs(end - start) + 1) * sizeof(int));
    if(!r_range)
        return 0;
    i = 0;
    if(start <= end)
    {
        begin = start;
        while(i <= abs(start - end))
        {
            r_range[i] = begin;
            begin++;
            i++;
        }
    }
    else
    {
        begin = end;
        while(i <= abs(start - end))
        {
            r_range[i] = begin;
            begin++;
            i++;
        }
    }
    i = 0;
    j = abs(end - start);
    while(i <= j / 2)
    {
        swap = r_range[i];
        r_range[i] = r_range[j];
        r_range[j] = swap;
        j--;
        i++;
    }
    return r_range;
}

int main(int ac, char *av[])
{
    int start = atoi(av[1]);
    int end = atoi(av[2]);
    int *range;
    int i = 0;

    if(ac == 3)
    {
        range = ft_rrange( start, end);
        while(i < (abs(end-start) + 1))
        {
            printf("%d", range[i]);
            i++;
        }
    }
    return 0;
}