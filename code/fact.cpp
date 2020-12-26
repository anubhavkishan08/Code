#include<iostream>
using namespace std;
int main()
{
    int i,n,mult=1;
    cout << "Enter a number\t";
    cin >> n;
    for(i=1;i<=n;i++)
    {
        mult *= i;
    }
    cout << "The factorial of the number is "<<mult<<"\n";
    return 0;
}
