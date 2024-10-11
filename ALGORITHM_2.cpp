#include<bits/stdc++.h>
using namespace std ;

void bubble_sort(int n , vector< int >&v)
{
    for(int i = n-1 ; i >= 1 ; i--)
    {
        bool did_swap = true ;
        for(int j = 0 ; j < i ; j++)
        {
            if(v[j] > v[j+1])
            {
                swap(v[j] , v[j+1]);
                did_swap = false ;
            }
        }
        if(did_swap)
        {
            break ;
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
    bubble_sort(n , v);
}