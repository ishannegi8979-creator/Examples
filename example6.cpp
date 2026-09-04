#include <iostream>
using namespace std ; 

int main (){

    int n;
    cin >> n ; 

    for (int row = 0 ; row < n ; row ++)
    {
        for (int col = 0 ; col < row + 1 ; col ++)
        {
            int k = col +1;
            char ch = k  + 'A' - 1;
            cout << ch ; 
        }
        for (int i = row ; i >= 1 ; i--)
        {
            int m = i ; 
            char ch = m + 'A' - 1;
            cout << ch ;
        }
        cout <<endl ;
    }
}