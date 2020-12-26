#include <iostream>
using namespace std;

int main() {
	int n;
	cin>>n;
	while(n!=42)
	{
	    cout<<n<<endl;
	    cin>>n;
	    if(n==42)
            break;
	}
	return 0;
}

