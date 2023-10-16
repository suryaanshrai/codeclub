#include<iostream>
#include <conio.h>
using namespace std;
int main()
{
    int n;
    cout<<"Enter nth row=";
    cin>>n;
    int p[n][n];
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<=i;j++)
        {
            if(j==0||i==j)
            p[i][j]=1;
            else p[i][j]=p[i-1][j-1]+p[i-1][j];
        }
    }
    for(int i=0;i<n;i++)
    {
        for(int j=1;j<=n-i;j++)
        cout<<" ";
        for(int j=0;j<=i;j++)
        cout<<p[i][j]<<" ";
        cout<<endl;
    }cout << "\n\n\n[Press any key to exit]";
    getch();
    return 0;
}