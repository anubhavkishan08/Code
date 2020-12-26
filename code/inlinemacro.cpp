#include<iostream>
#define Square (x) (x*x)
using namespace std;
inline int square(int x)
{
    return (x*x);
}
int main()
{
    int a,b;
cout<<"enter two number\n";
cin>>a>>b;
cout<<"square is"<<square (++a);
cout<<"square is"<<square (a);

}
