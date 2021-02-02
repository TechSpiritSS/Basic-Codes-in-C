#include<stdio.h>
int main()
{
    int n, n2, sum=0;
    printf("Enter a number \n");
    scanf("%d", &n);
    n2 = n;
    while(n>0)
    {
        int r = n%10;
        sum += r;
        n /= 10;
    }
    printf("Sum of each digit of %d is %d", n2, sum);
    return 0;
}