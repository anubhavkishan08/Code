#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t,i,e=0,f=0;
    float a,b;
    cin>>t;
    for(i=0;i<t;i++){
    {
        cin>>a>>b;
            if(a>0)
            {
                a=a/9;
                if(a>int(a)){
                    e=e+int(a)+1;
                  //cout<<e<<endl;
                  }
                else{
                    e=e+int(a);
                    //cout<<e<<endl;
                    }
            }
            if(b>0)
            {
                b=b/9;
                if(b>int(b)){
                    f=f+int(b)+1;
                  //cout<<f<<endl;
                  }
                else{
                    f=f+int(b);
                 //   cout<<f<<endl;
                    }
            }
       // cout<<e<<" "<<f<<endl;
          if(e<f)
            cout<<"0"<<" "<<e<<endl;
          else
            cout<<"1"<<" "<<f<<endl;
        e=0;f=0;
    }
  }
}
