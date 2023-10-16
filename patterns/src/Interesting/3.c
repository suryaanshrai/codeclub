#include<conio.h>
#include<stdio.h>
int main()
{
    int n,i,j,k;
    printf("Enter n (<=9): ");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        if(i==0)
        {
            for(j=2*n-1;j>0;j--)
            printf("%d ",n);
        }
        else
        {
            for(j=n;j>=n-i;j--)
            printf("%d ",j);
            for(j++,k=2*(n-i-1)-1;k>0;k--)
            printf("%d ",j);
            if(i==n-1)j++;
            for(;j<=n;j++)
            printf("%d ",j);
        }
        printf("\n");
    }
    for(i=n-2;i>=0;i--)
    {
        if(i==0)
        {
            for(j=2*n-1;j>0;j--)
            printf("%d ",n);
        }
        else
        {
            for(j=n;j>=n-i;j--)
            printf("%d ",j);
            for(j++,k=2*(n-i-1)-1;k>0;k--)
            printf("%d ",j);
            if(i==n-1)j++;
            for(;j<=n;j++)
            printf("%d ",j);
        }
        printf("\n");
    }
    printf("\n\n\n[Press any key to exit]");
    getch();
}




