#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int T,G,I,N,Q,c=0,d=0;
    vector<char> coins;
    cin>>T;
    while(T--)
    {
        cin>>G;
        for(int i=0;i<G;i++)
        {
            cin>>I>>N>>Q;
        if(I==1)
        {
            for(int i=0;i<N;i++)
            {
                coins.push_back('H');
            }
            for(int i=0;i<coins.size();i++)
          {
            coins[i]='T';
            i++;
          }
        }
        else if(I==2)
        {
         for(int i=0;i<N;i++)
            {
                coins.push_back('T');
            }
            for(int i=0;i<coins.size();i++)
           {
            coins[i]='H';
            i++;
           }
        }
        if(Q==1)
        {
            for(int i=0;i<coins.size();i++)
            {
                if(coins[i]=='H')
                    d++;
            }
            cout<<d<<endl;
            coins.clear();
        }
        if(Q==2)
        {
             for(int i=0;i<coins.size();i++)
            {
                if(coins[i]=='T')
                    c++;
            }
                cout<<c<<"\n";
        }
      }
    }
}
