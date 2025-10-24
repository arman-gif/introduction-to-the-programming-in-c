
#include<stdio.h>

int main()

{

   int a;
   scanf("%d", &a);

   if(a%2 == 0)
   {
    printf ("even\n");

    if(a%6 == 0)
    {
        printf("divisible by 6");
    }
    else
    {
        printf("not divisible by 6");
    }
   }
   else
   {
    printf("odd\n");

    if (a%3 == 0)
    {
        printf("divisible by 3");
    }
    else
    {
        printf("not divisible by 3");
    }
   }
   

    return 0;

}


