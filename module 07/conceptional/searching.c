
#include<stdio.h>
int main()
{
    int tc;
    scanf("%d", &tc);

    while (tc--)
    {
        int k_th;
        scanf("%d", &k_th);

        int start =0;

        for(int i = 1; i<=k_th; i++)
        {

            start++;
            if(start%3 == 0){
                start++;
                if(start %10 == 3)
                {
                    start++;
                }
            }
            else if(start%10 == 3){
                start++;
                if(start%3 == 0)
                {
                    start++;
                }
            }

        }
        printf("%d\n", start);
    }

    return 0;
}


