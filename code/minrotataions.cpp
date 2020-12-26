//min string rotatation in strings to make all strings equal
#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin>>n;
   // string arr[4]={"11234","34112","41123","11234"};
    vector<string>arr(n);
    for(int i=0;i<n;i++)
        cin>>arr[i];
    char firs=arr[0][1];
    //cout<< firs;
    int count1=0;
    int temp=0;
    for(int i=1;i<4;++i){
        int j;
        for(j=0;j<5;++j){
            if(arr[i][j]==firs){
                break;
            }
        }
        count1+=j;
    }

    cout<<count1<<endl;

    return 0;
}
