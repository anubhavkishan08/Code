#include <bits/stdc++.h>
using namespace std;
vector<string> arr;

void generatePrintBinary(int n)
{
	
	queue<string> q;

	
	q.push("1");

	
	while (n--) {
		
		string s1 = q.front();
		q.pop();
		arr.push_back(s1);

		string s2 = s1; 

		q.push(s1.append("0"));

		
		q.push(s2.append("1"));
	}
	int sum=0;
	for(auto it:arr)
	sum+=stoi(it);
	
	cout<<sum<<endl;
    sum=0;
    arr.clear();
}

int main()
{
	int n,t;
    cin>>t;
    while(t--){
	cin>>n;
	generatePrintBinary(n);
    }
	return 0;
}
