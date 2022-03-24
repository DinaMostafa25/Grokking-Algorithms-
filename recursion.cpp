#include <bits/stdc++.h>
#define fast cin.tie(0); cin.sync_with_stdio(0); cout.tie(0);

using namespace std;

int bs( int a[], int r, int l, int target);

int main() {
    fast;
    int n, target;
    cin >> n >> target;
    int a[n];
    for ( int i=0; i<n; i++)
        cin >> a[i];

    sort(a, a+n);
    int idx =  bs(a, 0, n-1, target);

    if (idx == -1 )
        cout << "Target not found !!\n";
    else
        cout <<"Target found\n";


    return 0;


}

int bs( int a[], int l, int r, int target)
{
    // Base case
    if( l > r)
        return -1;

    int mid = (l+r) / 2;
    // int mid = l +( r-l)/2; // to avoid overflow

    if ( target == a[mid])
        return mid;
    else if ( target < a[mid])
        return bs( a, l, mid-1, target);
    else
        return bs( a, mid+1,r, target);

}