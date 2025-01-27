unsigned int    lcm(unsigned int a, unsigned int b)
{
    unsigned int res;
    if(a == 0 || b == 0)
        return 0;
    if(a < b) res = a;
    else  res = b;
    while(1)
    {
        if(res % a == 0 && res % b == 0)
            return res;
        res++;
    }
    return (res);
}

#include<stdio.h>

int main(void)
{
    unsigned int a;
    unsigned int b;

    scanf("%d%d", &a, &b);
    printf("%d\n", lcm(a, b));
    return 0;
}