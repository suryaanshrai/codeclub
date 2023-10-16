#include<conio.h>
#include<stdio.h>
int main()
{	
	int m,n,i,j,d;
    printf("Enter x (the number of peaks in the wave): ");
    scanf("%d",&m);
    printf("Enter y (the height of the wave): ");
    scanf("%d",&n);
    for(i=1;i<=n;i++){
        //first row
        if(i==1){
            for(j=0;j<=m;j++){
            if(j==0) for(d=1;d<=n-1;d++) printf(" ");
            else {
                printf("*");
                for(d=1;d<=2*(n-1)-1;d++) printf(" ");
            }
            }
        }
        //last row
        else if(i==n){
            printf("*");
            for(j=1;j<=m;j++){
                for(d=1;d<=2*(n-1)-1;d++) printf(" ");
                printf("*");
            }
        }
        //other rows
        else {
            for(d=1;d<=n-i;d++) printf(" ");
            for(j=1;j<=m;j++){
                printf("*");
                for(d=1;d<=2*(i-1)-1;d++) printf(" ");
                printf("*");
                for(d=1;d<=2*(n-i)-1;d++) printf(" ");
            }
        }
        printf("\n");
    }
    printf("\n\n\n[Press any key to exit]");
    getch();
}
