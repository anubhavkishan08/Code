#include<bits/stdc++.h>
using namespace std;
#define ull unsigned long long int

// Function to return the binary
// equivalent of decimal value N
int decimalToBinary(int N)
{

    // To store the binary number
    ull B_Number = 0;
    int cnt = 0;
    while (N != 0) {
        int rem = N % 2;
        ull c = pow(10, cnt);
        B_Number += rem * c;
        N /= 2;

        // Count used to store exponent value
        cnt++;
    }

    return B_Number;
}

int main()
{
    int n,a,b;
    cin>>n;
    vector<int> arr;
    for(int i=0;i<n;i++){
        cin>>a;
    b=decimalToBinary(a);

    arr.push_back(b);
    }
    for(auto it: arr)
        cout<<it<<endl;
}
