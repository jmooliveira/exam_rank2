#include<aio.h>
#include<stdio.h>
#include<string.h>

size_t	ft_strcspn(const char *s, const char *reject)
{
    size_t i = 0;
    
    while(s[i])
    {
        if(s[i] == *reject)
            break;
        i++;
    }
    return i;
}
/*
int main(void)
{
    const char *s = "Jefferson";
    const char *reject = "J";
    
    printf("%ld\n",ft_strcspn(s, reject));
    printf("%ld\n",strcspn(s, reject));
    printf("%ld\n",strspn(s, reject));
    return 0;
}
*/