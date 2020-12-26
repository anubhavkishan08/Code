#include<bits/stdc++.h>

using namespace std;

int isPrime(pair<int, int> v)
{
int result = v.first + v.second;
if (result <= 1)
return 0;
for (int i = 2; i <= result / 2; i++)
if (result % i == 0)
return 0;
return 1;
}

int main()
{
int count = 0;
vector<pair<int, int>> arr;
int n ;
cin>>n;
for (int i = 0; i < n; i++)
{
for (int j = 0; j < n; j++)
arr.push_back(make_pair(i, j));
}
for (auto x : arr)
if (isPrime(x))
count += 1;
cout << count;
}
