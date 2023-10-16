#include <iostream>
    #include <string>
    #include <sstream>
    #include<conio.h>
    using namespace std;

    int main() {
        cout << "Enter n (>=6):";
        int n;
        cin >> n;
        int side = n;
        for (int i = 0; i  < n/3; i++) {
            for(int j = (n/3-i); j > 0; j--) {
                cout << " ";
            }
            if (i == 0) {
                for (int j = 0; j < n; j++) {
                   cout << "*"; 
                }   
            }
            else {
                cout << "*";
                for (int j = 0; j < n - 2; j++) {
                    cout << " ";
                }
                cout << "*";
                for(int j =0; j < i-1; j++) {
                    cout << " ";
                }
                cout << "*";
            }
            side--;
            cout << "\n";
        }
        int spaces = n/3-1;
        for (int i = 0; i < n; i++) {
            if (i == 0 || i == n-1) {
                for (int j = 0; j < n; j++) {
                    cout << "*";
                }
            }
            else {
                cout << "*";
                for (int j = 0; j < n-2; j++) {
                    cout << " ";
                }
                cout << "*";
            }
            if (side > 0) {
                for(int j =0;j < n/3-1; j++) {
                    cout << " ";
                }
                cout << "*";
                side--;
            }
            else if (spaces > 0) {
                for (int j = 0; j < spaces-1;j++) {
                    cout << " ";                    
                }
                cout << "*";
                spaces--;
            }
            cout << "\n";
        }
        cout << "\n\n\n[Press any key to exit]";
        getch();
    }
