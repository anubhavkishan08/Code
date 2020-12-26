#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,i;
    vector<int> a;
    for(i=0;i<100;i++){
            cin>>n;
         a.push_back(n);
        if(a[i]==42){
            break;
        }
        else
          cout<<a[i]<<"\n";
    }

}
