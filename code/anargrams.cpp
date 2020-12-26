// C++ program to count total anagram
// substring of a string
#include <bits/stdc++.h>
using namespace std;
#define MAX_CHAR 26

int toNum(char c)
{
	return (c - 'a');
}

int countOfAnagramSubstring(string str)
{
	int N = str.length();
	map<vector<int>, int> mp;
	for (int i=0; i<N; i++)
	{
		vector<int> freq(MAX_CHAR, 0);
		for (int j=i; j<N; j++)
		{

			freq[toNum(str[j])]++;
			mp[freq]++;
		}
	}

	int result = 0;
	for (auto it=mp.begin(); it!=mp.end(); it++)
	{
		int freq = it->second;
		result += ((freq) * (freq-1))/2;
	}
	return result;
}

int main()
{
	string str;
	cin>>str;
	cout << countOfAnagramSubstring(str) << endl;
	return 0;
}

