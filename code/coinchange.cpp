#include<bits/stdc++.h>
using namespace std;
int coinChange(vector<int> coins, int amount) {
        int n=coins.size();
        if(amount==0)
            return 1;
        if(n==0)
            return 0;
          if(amount<0)
             return 0;
        int first=coinChange(coins,amount-coins[0]);
           coins.erase(coins.begin());
        int second=coinChange(coins,amount);


        return first+second;;
    }
int main()
{
    int n,amount;
    cin>>n;
    vector<int> arr(n);
    for(int i=0;i<n;i++)
        cin>>arr[i];

    cin>>amount;
    cout<<coinChange(arr,amount);

}
