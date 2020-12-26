#include<bits/stdc++.h>
using namespace std;
int main()
{
     int i,j;
    vector<vector<int> > vect{ { 1},
                             { 4 },
                             { 7} };


                               vector<int> arr;
     for ( i = 0; i < vect.size(); i++) {
            if(vect[i].size()!=0){
        for ( j = 0; j < vect.size(); j++)
            arr.push_back(vect[j][i]);
            }
           // else
         //   {
             //   arr.push_back(vect[j]);
            //}

            for(int i=0;i<arr.size();i++)
                cout<<arr[i]<<" ";
                cout<<endl;
      //  cout<<vect.size();
    }
}
