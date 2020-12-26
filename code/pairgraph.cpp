    #include <bits/stdc++.h>
    using namespace std;
    vector<int> nodes,nodes2;
    int largestFactor(int x)
    {
        int sq = sqrt(x);
        int ans = 1;
        //	cout<<x<<" "<<sq<<endl;
        for (int i = 2; i <= sq; i++)
        {

            if (x % i == 0)
            {
                int t = x / i;
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
        int n, m;
        cin >> n >> m;
        if (n == m)
        {
            cout << 1 << endl;
            return 0;
        }
        if (n < m)
            swap(n, m);

        nodes.push_back(n);
        int n1 = n;
        int ans = 0;
        while (1)
        {
            int l = largestFactor(n1);

            nodes.push_back(l);
            if (l == 1)
                break;
            n1 = l;
        }
        n1 = m;
        nodes2.push_back(n1);
         while (1)
        {
            int l = largestFactor(n1);


            nodes2.push_back(l);
            if (l == 1)
                break;
            n1 = l;
        }

    	// cout<<nodes.size()<<" "<<nodes2.size()<<endl;
    	// for(int i = 0; i < nodes.size();i++)cout<<nodes[i]<<" ";
    	// cout<<endl;
    	// 	for(int i = 0; i < nodes2.size();i++)cout<<nodes2[i]<<" ";
    	// cout<<endl;

    	int i = 0,j=0;
    	int l1,l2;
    	l1 = nodes.size();
    	l2 = nodes2.size();
    	int f = 0;
    	set<int> st;
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
    	while(i < l1) {
    		st.insert(nodes[i++]);
    	}
    	while(j < l2) {
    		st.insert(nodes2[j++]);
    	}
    	cout<<st.size()<<endl;
        return 0;
    }
