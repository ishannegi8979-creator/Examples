#include <iostream>
using namespace std ; 

 int main () {
      
      int n ; 
      cin >> n ; 

      for (int row = 0 ; row < n ; row ++ ){

        for (int col= 0 ; col <  n -row ; col++)
        {
            cout << "*";
        }

      for ( int i = 0 ; i < 2*row+1 ; i++)
      {
        cout << " ";
      }

       for (int k = 0 ; k < n - row ; k++)
       {
        cout << "*";
       }
     cout << endl;
      }
for (int row = 0 ; row < n ; row ++ ){

        for (int col= 0 ; col <  row +1  ; col++)
        {
            cout << "*";
        }

      for ( int i = 0 ; i < 2*n-2*row-1 ; i++)
      {
        cout << " ";
      }

       for (int k = 0 ; k < row+1 ; k++)
       {
        cout << "*";
       }
     cout << endl;
 }
}