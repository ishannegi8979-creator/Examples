#include <iostream>
using namespace std;
int main ()
{
    int n ; 
    cin >> n ;

    for ( int row = 0 ; row < n ; row = row +1)
    {
        for ( int j = 0 ; j < n-row-1 ; j = j+1)
        {
            cout <<" ";
        }
             for( int k = 0 ; k < 2*row+1 ; k=k+1)
             {
                if (k==0 || k== 2 * row)
                {
                    cout << "*";
                }
                else{
                    cout << " ";
                }
             }
             cout << endl ; 
             
            
             }
             for ( int row = 0 ; row < n ; row++){
                for (int m = 0 ; m < row ; m= m+1)
             {
                cout <<  " " ; 
             }
             for ( int v = 0 ; v < 2*n-2*row+1 ; v++)
             {
                    if (v==0 || v== 2*n - 2*row-1-1)
                    {
                        cout << "*";
                    }
                    else {
                        cout << " ";
                    }

             }
               cout << endl;

        }
    }

    