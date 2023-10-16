#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
    int n;
    cout<<"Enter the n: ";
    cin>>n;
    int i,j;
    for(i=1;i<=n;i++)
    {
        for(j=n-i;j>0;j--)
        cout<<" ";
        for(j=1;j<=i;j++)
        cout<<j<<" ";
        cout<<endl;
    }
    cout << "\n\n\n[Press any key to exit]";
    getch();
    return 0;
}