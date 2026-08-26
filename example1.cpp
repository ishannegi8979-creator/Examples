# include <iostream>
using namespace std ;

int main () {

    int n ; 

    cin >> n; 

    for ( int row = 0 ; row < n ; row = row + 1)
    {

        for ( int p = 0 ; p < n - row - 1 ; p = p + 1)
        {
            cout << " ";
        }
        for( int j = 0 ; j < row + 1 ; j = j + 1)
        {

            cout << "* " ;
        }
        cout << endl ;
    }
}