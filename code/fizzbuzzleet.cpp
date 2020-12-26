#include<bits/stdc++.h>
using namespace std;
int main()
{
     vector<string> s;
        int i,n,a;
        cin>>n;
        for(i=1;i<=n;i++)
            s.push_back(to_string(i));
        for(i=0;i<s.size();i++)
        {
             a=int(s[i]);
            if(a%3==0)
                s.push_back("Fizz");
            if(a%5==0)
                  s.push_back("Buzz");
            if(a%3==0 && int(a%5==0)
                 s.push_back("FizzBuzz");
        }
        for(auto it : s)
            cout<<it<<endl;

}
