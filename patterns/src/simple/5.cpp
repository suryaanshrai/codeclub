#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
    int s;
    cout<<"Enter side=";
    cin>>s;
    int i,j;
    for(i=1;i<=s;i++)
    {
        for(j=s-i;j>0;j--)
        cout<<" ";
        if(i==1||i==s)
        for(j=1;j<=s;j++)
        cout<<"*";
        else 
        {
            cout<<"*";
            for(j=s-2;j>0;j--)
            cout<<" ";
            cout<<"*";
        }
        cout<<endl;
    }
    cout << "\n\n\n[Press any key to exit]";
    getch();
    return 0;
}