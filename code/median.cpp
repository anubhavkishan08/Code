
// CPP program to find median
#include <bits/stdc++.h>
using namespace std;

// Function for calculating median
double findMedian(int a[], int n)
{
    // First we sort the array
    sort(a, a + n);

    // check for even case
    if (n % 2 != 0)
        return (double)a[n / 2];

    return (double)(a[(n - 1) / 2] + a[n / 2]) / 2.0;
}

// Driver program
int main()
{
    int i,n,t,a[60];
   cin>>t;
   for(i=0;i<t;i++)
    cin>>a[i];
    cout << "Median = " << findMedian(a, n) << endl;
    return 0;
}
