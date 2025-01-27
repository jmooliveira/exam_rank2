#include<string.h> 
#include<stdio.h>

size_t ft_len(const char *s)
{
    size_t i = 0;
    while(s[i])
        i++;
    return i;
}

size_t	ft_strcspn(const char *s, const char *reject)
{
    int i = 0;
    int j = 0;
    int menor = ft_len(s);;

    while(s[i])
    {
        j = 0;
        while(reject[j])
        {
            if(reject[j] == s[i])
                if(i < menor)
                    menor = i;
            j++;
        }
        i++;
    }
    return menor;
}
/*
int main(void)
{
    char *str = "Jefferson";
    char *reject = "rf";

    printf("%ld\n", ft_strcspn(str, reject));
    printf("%ld\n", strcspn(str, reject));
    return 0;
}
*/