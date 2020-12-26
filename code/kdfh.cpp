#include<bits/stdc++.h>

using namespace std;

long long int max(long long int a,long long int b)

{

	if (a>=b)

	return a;

	return b;

}

int main()

{

	long long int q,i,no,N,t;

	cin>>t;

	while (t--)

	{

		map<string,pair<long long int,long long int> > zerom;

		cin>>N;

		string alpha;

		for (i=0;i<N;i++)

		{

			cin>>alpha;

			cin>>no;

			if (no==0)

			zerom[alpha].first++;

			else

			zerom[alpha].second++;

		}

		map<string,pair<long long int,long long int> > :: iterator it;

		q=0;

		for(it=zerom.begin();it!=zerom.end();it++)

		{

			q+=max((it->second).first,(it->second).second);

		}

		cout<<q<<endl;

	}

	return 0;

}
