#include<conio.h>
#include<stdio.h>
int main(){
	int count,n;
	printf("Enter the nth row=");
	scanf("%d",&n);
	int i,j;
	for(i=1;i<=n;i++)
    {
    	if(i%2==1) count=1;
    	else count=0;
        for(j=1;j<=i;j++,count++)
            printf("%d ",count%2);
        printf("\n");
    }
    printf("\n\n\n[Press any key to exit]");
    getch();	
}
