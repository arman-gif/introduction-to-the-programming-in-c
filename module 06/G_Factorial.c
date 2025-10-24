#include <stdio.h>

int main()
{
    int t, n;
    scanf("%d", &t); 

    for(int i = 1; i <= t; i++)
    {
        scanf("%d", &n);  
        long long fact = 1;

        for(int i = 1; i <= n; i++)
        {
            fact = fact * i;
        }

        printf("%lld\n", fact);
    }

    return 0;
}

