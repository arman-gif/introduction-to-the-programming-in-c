#include<stdio.h>

int main()
{
    int N;

    scanf("%d", &N);

    if(N == 1000)
    {
        printf("Bad luck!\n");
    }
    else if(N < 1499)
    {
        printf("I will buy Punjabi\n");
    }
    else if(N >= 1500)
    {
        printf("I will buy Punjabi\n");
        printf("I will buy new shoes\n");
        printf("Alisa will buy new shoes\n");
    }

    return 0;
}
