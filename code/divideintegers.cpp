// C++ implementation to Divide two
// integers without using multiplication,
// division and mod operator
#include <bits/stdc++.h>
using namespace std;

// Function to divide a by b and
// return floor value it
int divide(long long A, long long B) {

// Calculate sign of B i.e.,
// sign will be negative only iff
// either one of them is negative
// otherwise it will be positive
int sign = ((A < 0) ^ (B < 0)) ? -1 : 1;

// remove sign of operands
A = abs(A);
B = abs(B);

// Initialize the quotient
long long quotient = 0, temp = 0;

// test down from the highest bit and
// accumulate the tentative value for
// valid bit
for (int i = 31; i >= 0; --i) {

	if (temp + (B << i) <= A) {
	temp += B << i;
	quotient |= 1LL << i;
	}
}

return sign * quotient;
}

// Driver code
int main() {
int a = 0, b = 1;
cout << divide(a, b) << "\n";

a = 43, b = -8;
cout << divide(a, b);

return 0;
}
