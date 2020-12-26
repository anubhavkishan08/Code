#include <stdio.h>

int main () {
 int val=20;
   int  *ptr ;
   ptr=&val;
   printf("The value of ptr is : %x\n", val  );
      printf("The value of ptr is : %x\n", ptr  );
       //  printf("The value of ptr is : %x\n", ptr  );
   printf("The value of ptr is : %x\n", *ptr  );

   return 0;
}
