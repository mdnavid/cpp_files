#include<bits/stdc++.h>

using namespace std ;

int main()
{
    
    int n ;
    vector<int>v ;

    cin >> n ;

    while(n--)
    {
        int a ;

        cin >> a ;

        if(a==0)
            v.push_back(a) ;
        else if(a>0)
            v.push_back(1) ;
        else
            v.push_back(2) ;
    }

    for(int i=0 ; i<v.size() ; i++)
        cout << v[i] << " " ;

    cout << endl ;

    return 0 ;

}