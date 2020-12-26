    #include <bits/stdc++.h>
    using namespace std;
    int ans[7][7];
    int inp[7][7];
    char ch[7][7];
    bool check(int n,int m, int val) {
    	for(int i = 0; i < 7;i++) {
    		if(ans[n][i] == val) return true;
    			if(ans[i][m] == val) return true;
    	}
    	return false;
    }
    int f = 0;
    void solve(int k,int j, map<char,map<int,bool>> mp) {

    	if(j == 7) {
    		j = 0;
    		k++;
    	}
    //	cout<<k<<endl;
    	if(k >= 7) {
    		f = 1;
    		for(int i = 0; i < 7; i++) {
    			for(int j = 0; j < 7; j++) {
    				cout<<ans[i][j]<<" ";
    			}
    			cout<<endl;
    		}
    		return ;
    	}
    	for(int i = 1; i <= 7; i++) {
    		if(f) return;
    		char x = ch[k][j];
    		if(mp[x][i]) continue;
    		if(!check(k,j,i)) {
    		//	cout<<"f";
    			ans[k][j] = i;
    			mp[x][i] = 1;
    			solve(k,j+1,mp);
    			if(f) return;
    			mp[x][i] = 0;
    			ans[k][j] = 0;
    		}

    	}
    	return;
    }
    int main() {
    	// your code goes here
    	for(int i = 0; i < 7; i++) {
    		for(int j = 0; j < 7; j++)cin>>inp[i][j];
    	}
    	for(int i = 0; i < 7; i++)for(int j=0;j<7;j++)cin>>ch[i][j];
    	map<char,map<int,bool>> mp;
    	solve(0,0,mp);
    	return 0;
    }
