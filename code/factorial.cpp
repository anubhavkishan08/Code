#include<bits/stdc++.h>
using namespace std;
int MatFactorial(int n)
{
	int i, j, k, matA[n+1][n+1], matB[n+1][n+1], matC[n+1][n+1], count;
	count = n;

	for(i = 0; i < n+1; i++)
	{
		for(j = 0; j < n+1; j++)
		{
			if(j == i+1)
				matA[i][j] = i+1;
			else
				matA[i][j] = 0;


			matB[i][j] = matA[i][j];
			matC[i][j] = 0;
		}
	}

	flag:

	for(i = 0; i < n+1; i++)
	{
		for(j = 0; j < n+1; j++)
		{
			for(k = 0; k < n+1; k++)
			{
				matC[i][j] += matA[i][k]*matB[k][j];
			}
		}
	}


	for(i = 0; i < n+1; i++)
	{
		for(j = 0; j < n+1; j++)
		{
			matB[i][j] = matC[i][j];
			matC[i][j] = 0;
		}
	}

	count--;

	if(count > 1)
		goto flag;


	return matB[0][n];
}
int main()
{
     ios_base::sync_with_stdio(false);
  cin.tie(NULL);
    long long int t,a,b,product=0,ans=0;
    cin>>t;
    while(t--)
    {
        cin>>a>>b;
        ans=MatFactorial(a);
        cout<<ans%b<<endl;
        ans=0;
        product=0;
    }
}
