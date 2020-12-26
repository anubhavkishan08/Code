#include <bits/stdc++.h> 
#include <ext/pb_ds/assoc_container.hpp> 
#include <ext/pb_ds/tree_policy.hpp> 
using namespace __gnu_pbds; 
using namespace std;
typedef tree<int, null_type, less_equal<int>, rb_tree_tag, tree_order_statistics_node_update> pbds;
int main()
{
  pbds arr;
  for(int i=0;i<5;i++)
  {
      arr.insert(i);
  }
  cout<<arr.order_of_key(5);
}