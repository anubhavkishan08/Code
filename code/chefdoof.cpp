#include<bits/stdc++.h>
using namespace std;
int main() {
#define int long long int
ios_base::sync_with_stdio(false);
cin.tie(0);
cout.tie(0);

  int t;
    cin >> t;
    while(t--){


        int n;
        cin >> n;
        int a[n + 1];
        for(int i = 1; i <= n; i++){
            cin >>  a[i];
        }
        int q;
        cin >> q;
        while(q--){
            int x, y;
            cin >> x >> y;
            int lo = 1, hi = n, ans = n + 1;
            while(lo <= hi){
                int mid = (lo + hi)/2;
               // cout<<mid<<endl;
                if(x + y <= a[mid]){
                    ans = mid;
                    hi = mid - 1;
                }else lo = mid + 1;
            }

            if(x + y == a[ans])
                cout << -1 << endl;
            else cout << ans - 1 << endl;
        }


    }


return 0;
}

