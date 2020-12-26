#include<bits/stdc++.h>
using namespace std;
int main()
{
	long long int t,i,j,sum=0,newsum=0,a=0;
	cin>>t;
	vector<int> area(t);
	vector<int> cost(t);
	vector<int> newcost;
	for(i=0;i<t;i++)
	{
		cin>>area[i];
	}
	for(i=0;i<t;i++)
	{
		cin>>cost[i];
	}
	for(i=0;i<area.size();i++)
	{
		for(j=1;j<area.size();j++)
		{
         sum=sum+area[i]+area[j];
		 long long int b=sum;
		  b=min(b,sum);
	      newcost.push_back(b);
		}
	}
	for(i=0;i<newcost.size();i++)
	{
		newsum+=newcost[i];
	}
	for(i=0;i<t;i++)
	{
		a+=area[i]*cost[i];
	}
	cout<<newsum<<endl;
	//cout<<a<<endl;
	if(newsum<a)
	  cout<<"YES"<<endl;
	else
	cout<<"NO"<<endl;

}
