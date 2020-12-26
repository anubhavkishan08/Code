#include<bits/stdc++.h>
using namespace std;
vector<int> arr;
vector<int> arr1;

bool isPrime(int n) {
    for (int i = 2; i * i <= n; ++i) {
        if (n % i == 0) {
            return false;
        }
    }
    return true;
}
int main()
{
    int n,flag=0,t;
    cin>>t;
    while(t--){
    cin>>n;
    for(int i=2;i<=n;i++){
    if(isPrime(i))
        arr.push_back(i);
       //flag=1;
    else
        flag=0;
    //arr1.push_back(i);
    }
 //   if(flag==1)
    //    cout<<"Prime"<<endl;
    //else
      //  cout<<"Not Prime"<<endl;
    }
    for(auto it: arr)
        cout<<it<<" ";
       //cout<<arr.size()<<endl;
      //cout<<arr1.size()<<endl;///for composite no in a range

}
