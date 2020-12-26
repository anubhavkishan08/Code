#include<iostream>
using namespace std;
class complex
{
private:
    int real;
    int imaginary;
public:
    complex(int r=0,int i=0)
    {
        real=r;
        imaginary=i;
    }
    complex operator + (complex &obj)
    {
        complex reslt;
        reslt.real=real+obj.real;
        reslt.imaginary=imaginary+obj.imaginary;
        return reslt;

    }
    void print()
    {

        cout<<real<<"++i"<<imaginary<<endl;
    }
};
int main()
{

    complex c1(10,5),c2(3,8);
    complex c3=c1+c2;
    c3.print();
}
