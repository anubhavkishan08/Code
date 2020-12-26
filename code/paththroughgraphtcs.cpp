    #include <bits/stdc++.h>
    using namespace std;
    vector<long long int> nodes,nodes2;
    long long int largestFactor(long long int x)
    {
       long long int sq = sqrt(x);
        long long int ans = 1;
        //	cout<<x<<" "<<sq<<endl;
        for (long long int i = 2; i <= sq; i++)
        {

            if (x % i == 0)
            {
               long long int t = x / i;
                	//cout<<t<<" "<<x<<" "<<endl;;
                if (i > t)
                    return i;
                else
                    return t;
            }
        }

        return ans;
    }
    int main()
    {
        // your code goes here
        long long int n, m;
        cin >> n >> m;
        if (n == m)
        {
            cout << "0" << endl;
            return 0;
        }
       if (n < m)
            swap(n, m); // first number be greater

        nodes.push_back(n);
        long long int n1 = n;
        long long int ans = 0;
        while (1)
        {
            long long int l = largestFactor(n1);
          //  cout<<l<<endl;
            nodes.push_back(l);
            if (l == 1)
                break;
            n1 = l;
        }
        n1 = m;
        nodes2.push_back(n1);
         while (1)
        {
            long long int l = largestFactor(n1);


            nodes2.push_back(l);
            if (l == 1)
                break;
            n1 = l;
        }
    	long long int i = 0,j=0;
    	long long int l1,l2;
    	l1 = nodes.size();
    	l2 = nodes2.size();
    	//int f = 0;
    	set<long long int> st;
    	while((i < l1) && (j < l2)) {
    		if(nodes[i] == nodes2[j]) {
    			cout<<st.size()<<endl;
    			return 0;
    		}
    		if(nodes[i] > nodes2[j]) {
    			st.insert(nodes[i]);
    			i++;
    		} else {
    			st.insert(nodes2[j]);
    			j++;
    		}
    	}
    /*	while(i < l1) {
    		st.insert(nodes[i++]);
    	}
    	while(j < l2) {
    		st.insert(nodes2[j++]);
    	}
    	cout<<st.size()<<endl;*/
        return 0;
    }
