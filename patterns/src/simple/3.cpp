//program for diamond pattern using n
#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
    int n,i,j;
    cout<<"Enter the n row=";
    cin>>n; 
    //for upper half
    for(i=1;i<=n;i++)
    {
        for(j=n-i;j>=1;j--)
        cout<<" ";
        for(j=2*i-1;j>=1;j--)
        cout<<"*";
        cout<<endl;
    }
    //for lower half
    for(i=n;i>=1;i--)
    {
        for(j=n-i;j>=1;j--)
        cout<<" ";
        for(j=2*i-1;j>=1;j--)
        cout<<"*";
        cout<<endl;
    }
    cout << "\n\n\n[Press any key to exit]";
    getch();
    return 0;
}