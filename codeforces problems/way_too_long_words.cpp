#include<bits/stdc++.h>

using namespace std ;

void operation_one(string b)
{
    //cout << b[0] << b.length()-2 << b[b.length()-1] << endl ;

    if(b.length()<=10)
        cout << b << endl ;
    else
    {
        cout << b[0] << b.length()-2 << b[b.length()-1] << endl ;
    }
}

int main()
{

    int n ;

    cin >> n ;

    while (n)
    {
        string a ;

        cin >> a ;

        operation_one(a) ;

        n-- ;
    }
    

}