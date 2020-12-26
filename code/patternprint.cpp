#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    int numA=8, numB=7, numC=5;
    int result=0,min1,max1,mid;
    //cin>>n;
  // max1=(numA>numB?(numA>numC?numA:numC):(numB>numC?numB:numC));
   //min1=(numA<numB?(numA<numC?numA:numC):(numB<numC?numB:numC));
   if(numA>numB && numA>numC)
        max1=numA;
   else if(numB>numC)
        max1=numB;
   else
        max1=numC;

   if(numA<numB && numA<numC)
        min1=numA;
   else if(numB<numC)
        min1=numB;
   else
        min1=numC;
   cout<<max1<<" "<<min1;
   mid=numA+numB+numC-(max1+min1);
   result= mid *max1;
   cout<<result;
}

