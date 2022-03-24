#include <bits/stdc++.h>
#define fast cin.tie(0); cin.sync_with_stdio(0); cout.tie(0);

using namespace std;

void qs( int a[],int right, int left);
int partition( int a[], int right, int left );
int main() {
    fast;
    int n ;
    cin >> n  ;
    int a[n];
    for ( int i=0; i<n; i++)
        cin >> a[i];
    qs(a, 0, n);

    for ( int i=0; i<n; i++)
        cout << a[i]  << " ";



    return 0;


}

void qs(  int a[], int left, int right)
{
    if ( left  < right)
    {
        int piv_idx = partition(a, left, right);
        // sort the part on the left first
        qs(a, left, piv_idx);
        // then sort the part on the right
        qs(a, piv_idx+1, right);

    }


}
int partition( int a[], int right, int left )
{
    int p1 = right;
    int p2 = left;
    int pivot = a[right];

    while(p1 <p2)
    {
        // increase first pointer till you get the first element greater han the pivot
        do {
            p1++;
        }while(a[p1] <= pivot );
        //  decrease last pointer till you get the first element less han the pivot
        do {
            p2--;
        }while(a[p2] > pivot );
        // swap this two elements so the right side us lees than the pivot and thr right disde is greater than the pivot
        if ( p1 < p2 )
            swap(a[p1], a[p2]);
    }
    // then the pivot is on its right position
    swap(a[right], a[p2]);

    return p2;// the idx of the pivot

}