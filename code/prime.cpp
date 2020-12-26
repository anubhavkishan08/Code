#include<iostream>
using namespace std;

int main()
{
    int i,n,flag=0;
    cout << "Enter the number\t";
    cin >> n;
    for(i=2;i<n;i++)
    {
		if(n%i==0)
			flag=1;
    }
    if(flag==0)
    {
        cout << "This is the PRIME number\n";
    }
    else
    {
        cout << "This is not PRIME number\n";
    }
    return 0;

}
