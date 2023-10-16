#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
    int n,i,j;
    cout<<"Enter the nth row=";
    cin>>n;
    for(i=1; i<=n;i++)
    {
        for(j=n-i;j>=1;j--)
        cout<<" ";
        cout<<"*";
        for(j=2*(i-1)-1;j>=1;j--)
        cout<<" ";
        if(i>1)
        cout<<"*";
        cout<<endl;
    }
        for(i=n;i>=1;i--)
    {
        for(j=n-i;j>=1;j--)
        cout<<" ";
        cout<<"*";
        for(j=2*(i-1)-1;j>=1;j--)
        cout<<" ";
        if(i>1)
        cout<<"*";
        cout<<endl;
    }
    cout << "\n\n\n[Press any key to exit]";
    getch();
    return 0;
}