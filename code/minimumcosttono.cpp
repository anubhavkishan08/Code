// C++ program to minimum cost to buy
// N kilograms of sweet for M persons
#include <bits/stdc++.h>
using namespace std;

// Function to find the minimum cost of sweets
int finds(int m, int n, vector<int> adj)
{
	// Defining the sweet array
	int sweet[n + 1];

	// DP array to store the values
	int dp[n + 1][n + 1][n + 1];

	sweet[0] = 0;

	// Since index starts from 1 we
	// reassign the array into sweet
	for (int i = 1; i <= m; ++i)
		sweet[i] = adj[i - 1];

	// Assigning base cases for dp array
	for (int i = 0; i <= m; ++i) {
		for (int k = 0; k <= n; ++k)

			// At 0 it is free
			dp[i][0][k] = 0;

		// Package not available for desirable amount of sweets
		for (int k = 1; k <= n; ++k)
			dp[i][k][0] = -1;
	}

	for (int i = 0; i <= m; ++i) {
		for (int j = 1; j <= n; ++j) {
			for (int k = 1; k <= n; ++k) {

				dp[i][j][k] = -1;

				// Buying the 'k' kg package and
				// assigning it to dp array
				if (i > 0 && j >= k && sweet[k] > 0
					&& dp[i - 1][j - k][k] != -1)

					dp[i][j][k] = dp[i - 1][j - k][k] + sweet[k];

				// If no solution, select from previous k-1 packages
				if (dp[i][j][k] == -1 || (dp[i][j][k - 1] != -1
										&& dp[i][j][k] > dp[i][j][k - 1]))

					dp[i][j][k] = dp[i][j][k - 1];
			}
		}
	}

	// If solution does not exist
	if (dp[m][n][n] == -1)
		return 0;

	// Print the solution
	else
		return dp[m][n][n];
}

// Driver Function
int main()
{
	//int m = 3;
	//int adj[] = { 1,2,3,4,5 };
	//int n = sizeof(adj) / sizeof(adj[0]);
   int n,j,k,i,sum=0;
    cin>>n>>k>>j;
    vector<int> arr(n);
     for(i=0;i<n;i++)
    {
        cin>>arr[i];
    }
	// Calling the desired function
	cout << finds(k-1, n, arr);
	return 0;
}
