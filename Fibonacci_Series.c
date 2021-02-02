#include<stdio.h>
int main()
{
    int n, a=0, b=1;
    printf("Enter a number \n");
    scanf("%d", &n);
    printf("%d ", b);
    for(int i=1; i<n; i++)
    {
        int c =b;
        b += a;
        a =c;
        printf("%d ",b);
    }
    return 0;
}