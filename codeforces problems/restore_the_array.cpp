#include<bits/stdc++.h>

using namespace std ;

int main()
{

    int t ;

    cin >> t ;

    while (t)
    {
        int n , flag = 1 ;
        vector<int>v ;

        cin >> n ;

        for(int i = 0 ; i < n-1 ; i++)
        {
            int a ;
            cin >> a ;
            v.push_back(a) ;
            //cout << v[i] << " " ;
        }

        //cout << v.size() << endl ;

        for(int i = 0 ; i < v.size() ; i++)
        {
            //cout << v[i] << " " ;
            if(v[i]<v[i+1] && flag)
            {
                cout << "0 " ;
                flag -- ;
                i-- ;
            }
            cout << v[i] << " " ;
        }
        
        cout << endl ;
        
        t-- ;
    }
    

}