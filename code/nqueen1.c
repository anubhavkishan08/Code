#include<stdio.h>
#include<math.h>
int x[10];
int main()
{
	int i;
	nqueen(1,8);
}
 nqueen(k,n)
{
	int i;
	for(i=1;i<=8;i++)
	{
		if(place(k,i))
		{
			x[k]=i;
			if(k==n)
			{
				for(i=1;i<=n;i++)
				printf("%d\n",x[i]);
			}
			else
			nqueen(k+1,n);
		}
	}
	return 0;
}
place(k,i)
{
	int j;
	for(j=1;j<=k-1;j++)
	if((x[j]==i||(abs(x[j]-i)==abs(j-k))))
	return 0;
	return 1;

}
