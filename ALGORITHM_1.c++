#include<bits/stdc++.h>
using namespace std ;

void selection_sort(int n , vector<int> &v)
{
    for(int i = 0 ; i < n-1 ; i++)
    {
        int mini = i ;
        for(int j = i+1 ; j < n ; j ++)
        {
            if(v[j] < v[mini])
            {
                mini = j ;
            }
        }
        swap(v[i] , v[mini]) ;
    }
    for(auto i : v)
    {
        cout << i << " " ;
    }
}

signed main()
{
    int n ;
    cin >> n ;
    vector<int>v(n);
    for(auto &i:v)
    {
        cin >> i ;
    }
    selection_sort(n , v);
}