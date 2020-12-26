#include<bits/stdc++.h>
using namespace std;
int main()
{
        string my_str ;
        string s="";
        cin>>my_str;
   vector<string> result;
   stringstream s_stream(my_str);
   while(s_stream.good()) {
      string substr;
      getline(s_stream, substr, ',');
      result.push_back(substr);
   }
   int sum=0;
   for(int i = 0; i<result.size(); i++) {
      sum=sum+stoi(result[i]);
   }
  /* for(int i = 0; i<result.size(); i++) {
      cout<<s<<sum-stoi(result[i]);
      s=",";
   }*/
   for(int i = 0; i<result.size(); i++) {
      cout<<s<<sum-stoi(result[i])<<",";
      cout << "\b\b " <<endl;
   }
}
