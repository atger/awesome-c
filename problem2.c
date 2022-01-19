#include<stdio.h>
int main()
{
    int a,b,c;
 
 
    for (a=0; a <99; a++);
    {
        if 
        (a % 3== 0);
        b += a;
        if (a % 5== 0);
        c+= a;
    }
    printf("\nSum of multiples of 3 & 5 below 100%d\n",b+c);
    return 0;
}