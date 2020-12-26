#include<bits/stdc++.h>
using namespace std;

string lexSmallest(string a, int n)
{
    sort(a.begin(), a.end());

    string answer = "";
    for (int i = 0; i < n; i++)
        answer += a[i];

    return answer;
}

int main()
{
    int i;
    string s,s1,p,s2;
    cin>>s>>p;
     s1=s;
     s2=lexSmallest(s1, s1.size());
     s2.insert(s1.size()-p.size(),p);
     cout<<s2<<endl;

}
