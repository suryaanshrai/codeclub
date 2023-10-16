#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
    int n;
    cout<<"Enter n=";
    cin>>n;
    int i,j;
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=i;j++) cout<<"*";
        for(j=2*(n-i)-1;j>0;j--) cout<<" ";
        if(i==n) cout<<"\b";
        for(j=1;j<=i;j++) cout<<"*";
        cout<<endl;
    }
        for(i=n;i>0;i--)
    {
        for(j=1;j<=i;j++) cout<<"*";
        for(j=2*(n-i)-1;j>0;j--) cout<<" ";
        if(i==n) cout<<"\b";
        for(j=1;j<=i;j++) cout<<"*";
        cout<<endl;
    }
    cout << "\n\n\n[Press any key to exit]";
    getch();
    return 0;
}