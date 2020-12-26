#include <bits/stdc++.h>
using namespace std;

int getSum(vector<long long int> X,long long int n)
{
	int sum = 0;
	for (int i = 0; i < n; i++)
		sum += X[i];
	return sum;
}
int getTarget(vector<long long int> A, int n, vector<long long int> B, int m)
{
    // Calculation of sums from both arrays
    int sum1 = getSum(A, n);
    int sum2 = getSum(B, m);

    // because that the target must be an integer
    if ((sum1 - sum2) % 2 != 0)
        return 0;
    return ((sum1 - sum2) / 2);
}

int SwapValues(vector<long long int> A, int n, vector<long long int> B, int m)
{
int c=0,temp;
    int target = getTarget(A, n, B, m);

    if (target == 0){
           return -1;
         }

    int i = 0, j = 0;
    while (i < n && j < m) {
        int diff = A[i] - B[j];
        if (diff == target) {
            cout<< min(A[i],B[j])<<endl;
//           temp=A[i];
   //        A[i]=B[j];
     //      B[j ]=temp;
       //     c++;
            break;
        }

        else if (diff < target)
            i++;
        else
            j++;
    }
    return c;
}



int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
 int t;
	cin>>t;
	while(t--)
    {
        long long  int n,i,a1,b1,flag=0;
        cin>>n;
        vector<long long  int> A(n);
        vector<long long  int> B(n);
        for(i=0;i<n;i++){
             cin>>A[i];
        }
        for(i=0;i<n;i++)
        {
            cin>>B[i];
        }
        sort(A.begin(),A.end());
        sort(B.begin(),B.end());

        if(getSum(A,A.size())==getSum(B,B.size()))
            cout<<"0"<<endl;
        else if(getSum(A,A.size())!=getSum(B,B.size()))
            cout<<"-1"<<endl;
        else{
                SwapValues(A,A.size(),B,B.size());
            }

            A.clear(),B.clear();
    }
}
