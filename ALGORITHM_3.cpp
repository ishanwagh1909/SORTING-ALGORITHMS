#include<bits/stdc++.h>
using namespace std ;

void insertion_sort(int n , vector< int >&v)
{
    for(int i = 0 ; i < n ; i ++)
    {
        int j = i ;
        while(j > 0 and v[j] < v[j-1])
        {
            swap(v[j] , v[j-1]);
            j -= 1 ;
        }
    }
    for(auto i :v)
    {
        cout << i << " ";
    }
}

signed main()
{
    int n ;
    cin >> n ;
    vector< int >v(n);
    for(auto &i:v)
    {
        cin >> i ;
    }
    insertion_sort(n , v);
}