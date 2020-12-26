// C++ program to find XOR without using ^
#include <bits/stdc++.h>
using namespace std;

// Returns XOR of x and y
int pairORSum(vector<int> arr, int n)
{
    int ans = 0; // Initialize result

    // Consider all pairs (arr[i], arr[j) such that
    // i < j
    for (int i = 0; i < n; i++){
        for (int j = i + 1; j < n; j++){
            ans = arr[i] ^ arr[j];
return ans;}}
}

// Driver program to test above function
int main()
{
int t,n,a,x ,i,j,y;
cin>>t;
while(t--){
    cin>>n>>a;
    vector<int> arr(n);
    for(i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    for(i=0;i<a;i++)
    {
        cin>>x>>y;
    }
    int d= pairORSum(arr,arr.size());
      cout << "XOR is " << d<<endl;
      }
}


