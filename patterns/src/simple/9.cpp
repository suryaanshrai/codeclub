#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
    int n=0,count=3;
    cout<<"Enter ntwh row=";
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=i;j++)
        {
            if(count%2==1)
            cout<<"1";
            else cout<<"0";
            count++;
        }
        cout<<endl;
    }
    cout << "\n\n\n[Press any key to exit]";
    getch();
}