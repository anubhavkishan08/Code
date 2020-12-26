
#include<bits/stdc++.h>

using namespace std;



int calculateWays(int wordlen , int maxvowels)

{



if(maxvowels==0)

{

int ways = 1;



for(int i=0 ; i<wordlen ; i++)

{

ways = ways*21;

}

return ways;

}

else

{

if(wordlen==1)

{

int c = 1, v = 1;

int ways = c*21 + v*5;

return ways;

}

else

{

int ways = 0;



for(int i=0 ; i<wordlen ; i++)

{

int c = 1, v = 1;

for(int j=0 ; j<wordlen-maxvowels ; j++)

{

c = c*21;

}

for(int k=0 ; k<maxvowels ; k++)

{

v = v*5;

}

ways = ways + (v*c);

}

int ways1 = 1;

for(int i=0 ; i<wordlen ; i++)

{

ways1 = ways1*21;

}

return ways + ways1 ;

}

}

}

int main()

{

long long int wordlen , maxvowels;
int m=1000000007;

cin>>wordlen>>maxvowels;

int ways = calculateWays(wordlen , maxvowels);

cout<<ways%m;

return 0;

}
