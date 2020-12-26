#include <stdio.h>
int main(){
   FILE * file;
   char str[100];
   if (file = fopen("hello.txt", "r")){
      //printf("%s",fgets(str,50,file));
      while(fscanf(file,"%s",str)!=EOF){
        printf("%s",str);
      }
   }
   fclose(file);
   return 0;
}
