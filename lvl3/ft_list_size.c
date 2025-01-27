#include<stddef.h>

typedef struct    s_list
{
    struct s_list *next;
    void          *data;
}                 t_list;

int	ft_list_size(t_list *begin_list)
{
    t_list  *start;
    int     i;

    start = begin_list;
    i = 0;
    while(start != NULL)
    {
        start = start->next;
        i++;
    }
    return (i);
}