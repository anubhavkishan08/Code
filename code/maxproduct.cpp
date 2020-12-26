// C++ program to find the maximum product of a subarray
// of size k.
#include <bits/stdc++.h>
using namespace std;

// Driver code
int main()
{
    int t,a,k;
    cin>>t>>k;
    vector<int> arr;
    while(t>0)
    {
        a=t%10;
        arr.push_back(a);
        t=t/10;
    }
	int n=arr.size();

	int MaxProduct = 1;
	for (int i=0; i<k; i++)
		MaxProduct *= arr[i];

	int prev_product = MaxProduct;

	for (int i=1; i<=n-k; i++)
	{
		int curr_product = (prev_product/arr[i-1]) *
							arr[i+k-1];
		MaxProduct = max(MaxProduct, curr_product);
		prev_product = curr_product;
	}
	cout<<MaxProduct<<" ";

	/*k = 4;
	cout << findMaxProduct(arr1, n, k) << endl;

	int arr2[] = {2, 5, 8, 1, 1, 3};
	k = 3;
	n = sizeof(arr2)/sizeof(arr2[0]);
	cout << findMaxProduct(arr2, n, k);
*/
	return 0;
}
