#include<stdio.h>

int main()
{
	int t,i,a[100],n,num;
	/*I'm assuming that there are max 100 integers per line
	variable i will store the number of integers read successfully so far*/
	char ch,sign;
	scanf("%d",&t);
	getchar();
	/*here getchar() will clears out the '\n' in the input buffer
	which was left out while reading t*/
	while(t--)
	{
		i=0;num=0;sign='+';
		while(scanf("%c",&ch)==1)
		{
			if(ch=='-')sign='-';
			else if(ch==' ' || ch=='\n')
			{
				if(sign=='-')
				{num=-num;sign='+';}
				a[i++] = num;
				num=0;
				if(ch=='\n')break;
			}
			else num = 10*num + (ch-'0');
		}
		n=i;
		/*now we have successfully stored all numbers in a
		and the number of numbers in n*/
		for(i=0;i < n;++i)
			printf("%d ",a[i]);
		putchar('\n');
	}
	return 0;
}
