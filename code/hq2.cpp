#include <iostream>
using namespace std;
int gcd(int a, int b)
{
	if (b == 0)
		return a;
	return gcd(b, a % b);

}
bool isprime(int n)
{
    if (n <= 1)
        return false;

    for (int i = 2; i < n; i++)
        if (n % i == 0)
            return false;

    return true;
}
int factor(int n)
{
    for(int i=1;i<n/2;i++)
    {
        if(n%i==0)
            return i;
    }
}


int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int x,y,m,i,x1,y1;
        cin>>x>>y>>m;
        int floormet,xfactor,yfactor;
        floormet=gcd(x,y);
        xfactor=factor(x);
        yfactor=factor(y);
        if(isprime(xfactor))
        {
            x1=x/xfactor;
        }
        if(isprime(yfactor))
        {
            y1=y/yfactor;
        }
            cout<<x1<<" "<<y1;
        // cout<<gcd(x,y);
    }
	return 0;
}

