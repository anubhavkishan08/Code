#include<bits/stdc++.h>
using namespace std;


int main() {
	long long n;
	cin>>n;
	vector<long long> rating(n);
	vector<long long> candies(n);
	//long long *rating = new long long[n], *candies = new long long[n];
	for(long long i = 0; i < n; i++) {
		cin>>rating[i];
		candies[i] = 1; // everyone gets at least one candy
	}
	// First pass, give candies to the right
	for(long long i = 1; i < n; i++) {
		if(rating[i] > rating[i-1]) {
			candies[i] += candies[i-1];
		}
	}
	// Second pass, give candies to the left
	for(long long i = n-2; i >= 0; i--) {
		// This time, we need to consider max{candies[i], candies[i+1]+1}
		// since we don't know whether the ascending or descending trend is larger
		if(rating[i] > rating[i+1] && candies[i] < candies[i+1]+1) {
			candies[i] = candies[i+1]+1;
		}
	}
	long long result = 0;
	for(long long i = 0; i < n; i++) {
		result += candies[i];
	}
	cout<<result;
    return 0;
}
