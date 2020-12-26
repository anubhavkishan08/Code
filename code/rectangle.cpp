#include<iostream>
using namespace std;
int main()
{
    int i,n;
    int area,length,parimeter,width;
    cout << "Enter the length and width\t";
    cin >> length >> width;
    area = length*width;
    parimeter = 2*(length+width);
    cout << "The area of the reactangle is "<<area<<" and the parimeter of the rectangle is "<<parimeter<<"\n";
    return 0;
}
