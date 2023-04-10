#include<bits/stdc++.h>

using namespace std ;

int main()
{
    
    int a ;
    vector<int>v ;

    cin >> a ;

    for(int i=1 ; i<=sqrt(a) ; i++)
    {
        if(i==sqrt(a))
            v.push_back(i) ;
        else if(a%i==0)
        {
            v.push_back(i) ;
            v.push_back(a/i) ;
        }
    }

    sort(v.begin(),v.end()) ;

    for(int i=0 ; i<v.size() ; i++)
        cout << v[i] << endl ;

    return 0 ;

}