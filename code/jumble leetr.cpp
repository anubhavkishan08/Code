#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,i;
    cin>>t;
    while(t--)
    {
 string input;
    char dot='.';
    cin>>input;
    for(int i=0;i<input.length();i++)
    {

        if( input[i]>=65 && input[i]<=90)
                {
                    input[i]=input[i]+32;
                }
        if( (input[i]=='a') || (input[i]=='e') || (input[i]=='i') ||  (input[i]=='o') || (input[i]=='u' ) && (input[i+1]!='a') || (input[i+1]!='e') || (input[i+1]!='i') ||  (input[i+1]!='o')  || (input[i+1]!='u' ))
        {
            input.erase(i,i+1);
            input[i]='.';
        }
        if((input[i]!='a') || (input[i]!='e') || (input[i]!='i') ||  (input[i]!='o')  || (input[i]!='u' )&& (input[i+1]!='a') || (input[i+1]!='e') || (input[i+1]!='i') ||  (input[i+1]!='o')  || (input[i+1]!='u' ))
             input[i]='.';
    }
    cout<<input<<endl;

    }
}
