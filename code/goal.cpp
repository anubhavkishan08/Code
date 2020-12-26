#include <iostream>
using namespace std;

int main() {
	    int x,y,z;
	    cin>>x>>y>>z;
	    int a=x;
	    int b=y;
	    while(z!=1){
	        if(x%z==0){
	            x--;
	        }
	        if(y%z==0){
	            y--;
	        }
	        z--;
	    }
	    cout<<a-x<<" "<<b-y<<endl;

	}
