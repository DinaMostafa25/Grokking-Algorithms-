#include <bits/stdc++.h>
#define fast cin.tie(0); cin.sync_with_stdio(0); cout.tie(0);

using namespace std;

void  ss(   int a[], int n);

int main() {
    fast;
    int n;
    cin >> n ;

    int a[n] ;
    for ( int i =0; i< n; i++)
        cin >> a[i];

    ss(  a, n);

    for ( int i = 0 ; i <n; i++)
        cout << a[i]  << " ";
    cout << "\n";




    return 0;

}

void ss( int a[],int  n)
{
    for ( int i =0; i <n-1; i++)
    {
        int temp_idx = i;
        for ( int j=i+1; j <n; j++)
        {
            if (a[j] < a[temp_idx])
                temp_idx = j;
        }
        swap( a[temp_idx], a[i]);
    }


}