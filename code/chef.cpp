#include<stdio.h>
void subArrayIndexes(int *arr, int sum, int n){
 int window_size=arr[0],start=0,i;
 for(i = 1 ; i < n ; i++){
  while(window_size > sum && start < i-1){
   window_size = window_size - arr[start]; start++;
  }

  if(window_size == sum){
   printf("%d %d\n", start+1, i);
   return;
  }

  window_size = window_size + arr[i];
 }
 printf("-1\n");
}
int main(){
 int t,n,a,b,sum,arr[100];
 scanf("%d", &t);
 for(a = 0 ; a < t ; a++){
 scanf("%d %d", &n, &sum);
 for(b = 0 ; b < n ; b++){
 scanf("%d", &arr[b]);
 }
 subArrayIndexes(arr,sum,n);
 }
 return 0;
}
