#include<bits/stdc++.h>
using namespace std;

int main() {
	//code
	int t;
	cin>>t;
	while(t--){
	    int n,x1=0,x2=0;
	    cin>>n;
	    int a[n-1];
	    for(int i=0;i<n-1;i++){
	        cin>>a[i];
	        x1=x1^a[i];
	    }
	    for(int i=0;i<=n;i++){
	        x2=x2^i;
	    }
	    int n1=x1^x2;
	    cout<<n1<<endl;
	}
	return 0;
}
