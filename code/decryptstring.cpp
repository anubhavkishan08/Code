#include<bits/stdc++.h>
using namespace std;
void  customCasearCipher(int key, string message)
{
    if(key>0 && key<=25)
    {
        for(int i=0;i<message.size();i++)
        {
            if(message[i]!=' ')
            message[i]=message[i]+key;
        }
        cout<<message<<endl;
    }
    else
        cout<<"INVALID INPUT"<<endl;
}
int main()
{
    int k;
    string s;
    getline(cin,s);
    cin>>k;
    customCasearCipher(k,s);
}
