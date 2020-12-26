#include<bits/stdc++.h>
using namespace std;
	int isPlaindrome(string S)
	{
	    int n=S.size();
        string a;
	    // Your code goes here
	    for(int i=0;i<S.size();i++)
	    {
	        a+=S[n-i-1];
	    }
        cout<<a;
	       if(S==a)
              return 1;
            return 0;
	}
int main()
{
    string s;
    cin>>s;
   cout<< isPlaindrome(s);
}