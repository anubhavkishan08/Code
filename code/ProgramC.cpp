#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;


int findt(int a,int b){

    if(b == 1)
       return a;
    if(a==b)
       return 1;
    int p = a-b;
    return 1+ findt(max(p,b),min(p,b));
}


int main(){

    int a1=5;
    int b1=7;
    int c1=3;
    int d1=4;
    cin>>a1>>b1>>c1>>d1;
    int total =0;

    for(int i=a1;i<=b1;i++){
        for( int j=c1;j<=d1;j++){


          total+= findt(max(i,j),min(i,j));
        }

    }
    cout<<total;


return 0;

}
