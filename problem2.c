#include<stdio.h>
int main()
{
    int a=0,b=0;
    for (a=1; a <1000; a++)
    {
        if (a % 3== 0 ||  a % 5==0) {
            b += a;
        }
    }
    printf("\nSum of multiples of b %d\n",b);
    return 0;
}