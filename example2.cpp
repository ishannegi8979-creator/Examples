# include <iostream>
using namespace std ;

int main () {

    int n ; 

    cin >> n; 

    for ( int row = 0 ; row < n ; row = row + 1)
    {

        for ( int p = 0 ; p < row ; p = p + 1)
        {
            cout << " ";
        }
        for( int j = 0 ; j < n-row ; j = j + 1)
        {

            cout << "* " ;
        }
        cout << endl ;
    }
}