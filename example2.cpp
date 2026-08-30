# include <iostream>
using namespace std ;

int main () {

    int n ; 

    cin >> n; 

    
    for ( int l = 0 ; l < n ; l = l + 1)
    {

        for ( int p = 0 ; p < n - l - 1 ; p = p + 1)
        {
            cout << " ";
        }
        for ( int j = 0 ; j < l + 1 ; j = j + 1)
        {

            cout << "* " ;
        }
        cout << endl ;
    }

    for ( int row = 0 ; row < n ; row = row + 1)
    {

        for ( int c = 0 ; c < row ; c = c + 1)
        {
            cout << " ";
        }
        for( int a = 0 ; a < n-row ; a = a + 1)
        {

            cout << "* " ;
        }
        cout << endl ;
    }
}

