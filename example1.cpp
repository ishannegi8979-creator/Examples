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
        for( int j = 0 ; j < l + 1 ; j = j + 1)
        {

            cout << "* " ;
        }
        cout << endl ;
    }
}