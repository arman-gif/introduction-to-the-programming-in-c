
#include<stdio.h>

int main()
{

    long long int a, b, c, d;
    long long int sum;
    scanf("%lld %lld %lld %lld", &a, &b, &c, &d);

    sum = (a*b)-(c*d);
    printf("Difference = %lld\n", sum);

    return 0;
}
