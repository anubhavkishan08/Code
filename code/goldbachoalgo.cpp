#include<bits/stdc++.h>
using namespace std;
vector<int> primes;
bool isPrime(int n)
{

    if (n <= 1)
        return false;

    for (int i = 2; i < n; i++)
        if (n % i == 0)
            return false;

    return true;
}

void printPrime(int n)
{
    for (int i = 2; i <= n; i++) {
        if (isPrime(i))
            primes.push_back(i);
    }
    if (n<=2 || n%2 != 0)
    {
        cout << "Invalid Input \n";
        return;
    }
    for (int i=0 ; primes[i] <= n/2; i++)
    {

        int diff = n - primes[i];

        if (binary_search(primes.begin(), primes.end(), diff))
        {
            cout << primes[i] << " + " << diff << " = "
                 << n << endl;
            return;
        }
    }
}
int main()
{
    int n ;
    cin>>n;
    printPrime(n);
}
