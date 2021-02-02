#include<stdio.h>
int main()
{
    int n;
    printf("Enter a number \n");
    scanf("%d", &n);
    for(int i=1; i<=n; i++)
    {
        for(int j=n - i; j>0; j--) //For spacing
            printf(" ");
        for(int k=1;k<2*i;k++)
        {
            printf("%d", i);
        }
        printf("\n");
    }
    return 0;
}