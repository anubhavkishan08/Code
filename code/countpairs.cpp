#include <iostream>
#include <string.h>
using namespace std;

#define n 5
#define k 2

int arr[n][k + 1];

int fill1(int index, int currK){
    if(arr[n][currK] != 0) return arr[n][currK];  //if already calculated
    if(index == n - 1) {                          //base case
        arr[index][currK] = 21 + (currK ? 5 : 0);
        return arr[index][currK];
    }

    //recursive condition and step
    if(currK == 0) arr[n][currK] = 21 * fill1(index + 1, k);
    else arr[n][currK] = 5 * fill1(index + 1, currK - 1) + 21 * fill1(index + 1, k);
    return arr[n][currK];
}

int main(){
    memset(arr, 0, sizeof(arr));
    cout<<fill1(0, k)<<endl;

    return 0;
}
