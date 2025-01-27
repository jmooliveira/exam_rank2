#include<stdio.h>

int    ft_strcmp(char *s1, char *s2)
{
    int i = 0;

    while((s1[i] || s2[i]) && s1[i] == s2[i])
        i++;
    return(s1[i] - s2[i]);
}
/*
int main(void)
{
    char *src1 = "Jefferson";
    char *src2 = "Jefferson";

    printf("%d\n",ft_strcmp(src1, src2));
    return 0;
}
*/