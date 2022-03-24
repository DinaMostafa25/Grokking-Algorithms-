#include <bits/stdc++.h>
#define fast cin.tie(0); cin.sync_with_stdio(0); cout.tie(0);

using namespace std;

int bs( int l, int r, int a[], int num);

int main() {
    fast;
    int n, num, l, r;
    cin >> n >> num; // length of the array && the desired num

    int a[n] ;
    for ( int i =0; i< n; i++)
        cin >> a[i];

    cin >> l >> r; // first && last idx

    //sort (a, a+n);
    int idx = bs(l, r, a, num);

    cout << idx;


    return 0;

}

int bs( int l, int r, int a[], int num)
{
    int res = -1;
    while( l<=r)
    {
        //int mid = (l+r)/2;
        int mid = l + ( r - l) / 2;

        if (a[mid] == num)
            res =  mid;
        if (a[mid] > num)
            r = mid-1;
        else
            l = mid +1 ;
    }

    return res;

}

