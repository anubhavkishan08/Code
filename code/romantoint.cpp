 #include<bits/stdc++.h>
 using namespace std;
 int value(char a)
 {
     if(a=='I')
        return 1;
     if(a=='V')
        return 5;
    if(a=='X')
        return 10;
    if(a=='L')
        return 50;
        if(a=='C')
        return 100;
    if(a=='D')
        return 500;
    if(a=='M')
        return 1000;
     return -1;
 }
  int romanToInt(string s) {
      int ans=0,ans1=0,ans2=0;
        for(int i=0;i<s.size();i++)
        {
            ans1=value(s[i]);
            if(i+1<s.size()){
                ans2=value(s[i+1]);
                if(ans1>=ans2)
                    ans+=ans1;
                else{
                    ans=ans+ans2-ans1;
                    i++;
                }
        }
        else
            ans+=ans1;
    }
     return ans;
  }
 int main()
 {
     string s;
     cin>>s;
     cout<<romanToInt(s);
 }

