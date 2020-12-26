#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,i,j;
    float sum=0,mean=0,mode=0,median=0;
    cin>>n;
    vector<int> arr(n);
    for(i=0;i<n;i++)
        cin>>arr[i];

    sort(arr.begin(),arr.end());
    for(i=0;i<arr.size();i++)
    {
        sum=sum+arr[i];
    }
    mean=sum/arr.size();

    if(arr.size()%2==0){
    j=(arr.size()+1)/2;
    median=(arr[j]+arr[j-1])/2;
    }
    else
    {
         j=(arr.size()+1)/2;
         median=arr[j];
    }

     int max = *max_element(arr.begin(), arr.end());

    // auxiliary(count) array to
    // store count. Initialize
    // count array as 0. Size
    // of count array will be
    // equal to (max + 1).
    int t = max + 1;
    int count[t];
    for (int i = 0; i < t; i++)
        count[i] = 0;

    // Store count of each element
    // of input array
    for (int i = 0; i < n; i++)
        count[arr[i]]++;

    // mode is the index with maximum count

    int k = count[0];
    for (int i = 1; i < t; i++) {
        if (count[i] > k) {
            k = count[i];
            mode = i;
        }
    }
    cout<<fixed << setprecision(1)<<mean<<endl<<median<<endl<<mode<<endl;

}
