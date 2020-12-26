#include <bits/stdc++.h>

using namespace std;

// Complete the staircase function below.
void staircase(int n) {
    int i,j;
for( i = 1; i <= n; i++)
{
for( j = i; j < n; j++)
{
cout << " ";
}
for(j = 1; j <= i; j++)
{
cout << "#";
}
cout << "\n";
}
for(i = n; i >= 1; i--)
{
for(j = i; j <= n; j++)
{
cout << " ";
  }
 }
}


int main()
{
    int n;
    cin >> n;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    staircase(n);

    return 0;
}
