#include<stdio.h>
int main()
{
    int n, a=0, b=1;
    printf("Enter a number \n");
    scanf("%d", &n);
    for (int i=1; i<n; i++)
    {
        for(int j=n-i;j>0;j--)
            printf(" ");
        for(int j=1; j<i; j++)
        {
            int c =b;
            b += a;
            a =c;
            printf("%d ",b);
        }
        printf("\n");
    }
    return 0;
}