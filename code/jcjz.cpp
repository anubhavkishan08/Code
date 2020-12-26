// CPP code to find the OR_SUM
#include <bits/stdc++.h>
using namespace std;
#define INT_SIZE 32
int deleteElement(int arr[], int n, int x)
{
   int i;
   for (i=0; i<n; i++)
      if (arr[i] == x)
         break;
   if (i < n)
   {
     n = n - 1;
     for (int j=i; j<n; j++)
        arr[j] = arr[j+1];
   }

   return n;
}
int ORsum(int arr[], int n)
{
	int zerocnt[INT_SIZE] = { 0 };

	for (int i = 0; i < INT_SIZE; i++)
		for (int j = 0; j < n; j++)
			if (!(arr[j] & 1 << i))
				zerocnt[i] += 1;
	int ans = 0;
	for (int i = 0; i < INT_SIZE; i++)
	{
		ans += ((pow(2, n) - 1) -
			(pow(2, zerocnt[i]) - 1)) *
				pow(2, i);
	}

	return ans;
}
int main()
{
	int t,i;
	cin>>t;
	while(t--)
    {
        int n;
        cin>>n;
        int aa[n];
        for(i=0;i<n;i++)
            cin>>aa[i];
   ORsum(aa,n);
   for(i=0;i<n;i++)
   {
       deleteElement(aa,n,aa[i]);
       ORsum(aa,n);
       n=n-1;
   }
cout<<ORsum(aa,n);
	return 0;
}
}
