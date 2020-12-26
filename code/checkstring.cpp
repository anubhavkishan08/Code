#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s,s1,s2,s3;
    cin>>s;
    int flag=0;
    for(int i=0;i<s.size();i++)
    {
        char c=s[i];
        if(isupper(c))
            s1+=c;
        if(islower(c))
            s2+=c;
    }
    for(int i=0;i<s1.size();i++)
    {
        for(int j=0;j<s2.size();j++)
        {
            if(tolower(s1[i])==s2[j]){
                s3+=s1[i];
               flag=1;}
            else
                flag=0;
        }
    }
  //  cout<<s1<<" "<<s2<<endl;
    sort(s3.begin(),s3.end());
    int n=s3.size();
    //cout<<s3<<endl;
    if(flag==1)
    cout<<s3[n-1]<<endl;
    else
        cout<<"No"<<endl;
}
