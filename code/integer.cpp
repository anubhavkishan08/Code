#include <iostream>
using namespace std;

void Convert(unsigned int val)
{
   unsigned int mask = 1 << (sizeof(int) * 8 - 1);

   for(int i = 0; i < sizeof(int) * 8; i++)
   {
      if( (val & mask) == 0 )
         cout << '0' ;
      else
         cout << '1' ;

      mask  >>= 1;
   }
   cout << endl ;
}

int main()
{
   for(unsigned int i = 0; i < 128; i++)
      Convert(i);
}
