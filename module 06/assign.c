
#include<stdio.h>
int main()
{
    int N;
    scanf("%d", &N);

    int V;
    int positive = 0, negative = 0;
    for(int i = 1; i<=N; i++)
    {
        scanf("%d", &V);
        if(V > 0)
        {
            positive = positive + V;
        }
        else if(V < 0)
        {
            negative = negative + V;
        }
    }
    printf("%d %d\n", positive, negative);

    return 0;
}

