#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--)
	{
	   int n,i,ans=0,c=0,d,a,ans1=0,ans2=0;
	    cin>>n>>d;
         a=n;
	     vector<int> arr(n);
	    for(i=0;i<n;i++)
	    {
	        cin>>arr[i];
	    }
        for(i=0;i<arr.size();i++)
        {
            if(arr[i]<=9 || arr[i]>=80)
                    c++;
        }
    //    cout<<c<<endl;
	     ans1=c/d;
         ans1+=c%d;
         a=a-c;
         ans2=a/d;
         ans2+=a%d;
         ans=ans1+ans2;
         cout<<ans<<endl;
	}
	return 0;
}