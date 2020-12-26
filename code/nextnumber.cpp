// Find the next lexicographically
// greater permutation of a word

#include <algorithm>
#include <iostream>

using namespace std;

int main()
{
    int n;
    cin>>n;
	string s;
	for(int i=0;i<n;i++)
        cin>>s[i];
	bool val
		= next_permutation(s.begin(),
						s.end());
	if (val == false)
		cout << "Not Possible"
			<< endl;
	else
		cout << s << endl;
	return 0;
}

