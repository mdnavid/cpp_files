#include<bits/stdc++.h>

using namespace std ;

int main()
{
    
    vector<int>v ;

    for(int i = 0 ; i<3 ; i++)
    {
        int a ;
        cin >> a ;
        v.push_back(a) ;
    }

   //sort(v.begin(),v.end()) ;

    sort(v.begin(), v.end());


   cout << v[0] << " " << v[2] << endl ;

    return 0 ;

}