#include<bits/stdc++.h>

using namespace std ;

int main()
{
    
    int n ;
    map<int,int>mp ;

    cin >> n ;

    for(int i=0 ; i<n ; i++)
    {
        int a ;

        cin >> a ;

        if(a<=10)
            mp[i] = a ;
    
    }

    map<int,int> :: iterator it = mp.begin() ;

    while (it != mp.end())
    {
        cout << "A[" << it->first << "] = " << it->second << endl ;
        ++it ;
    }
    

    return 0 ;

}