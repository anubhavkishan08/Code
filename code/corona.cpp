#include <bits/stdc++.h>
using namespace std;
int getPairsCount(vector<int> arr, int n, int sum)
{
    int count = 0;
    for (int i = 0; i < n; i++)
        for (int j = i + 1; j < n; j++){
            if(arr[i]==arr[j]){
                continue;
            }
            else if (arr[i] + arr[j] == sum){
                count++;
                break;
            }
        }
    return count;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t, i, a;
    string s;
    cin >> t;
    vector<int> arr;
    map<int, string> mp;
    mp.insert({0, "zero"});
    mp.insert({1, "one"});
    mp.insert({2, "two"});
    mp.insert({3, "three"});
    mp.insert({4, "four"});
    mp.insert({5, "five"});
    mp.insert({6, "six"});
    mp.insert({7, "seven"});
    mp.insert({8, "eight"});
    mp.insert({9, "nine"});
    mp.insert({10, "ten"});
    mp.insert({11, "eleven"});
    mp.insert({12, "twelve"});
    mp.insert({13, "thirteen"});
    mp.insert({14, "fourteen"});
    mp.insert({15, "fifteen"});
    mp.insert({16, "sixteen"});
    mp.insert({17, "seventeen"});
    mp.insert({18, "eighteen"});
    mp.insert({19, "nineteen"});
    mp.insert({20, "twenty"});
    mp.insert({21, "twenty one"});
    mp.insert({22, "twenty two"});
    mp.insert({23, "twenty three"});
    mp.insert({24, "twenty four"});
    mp.insert({25, "twenty five"});
    mp.insert({26, "twenty six"});
    mp.insert({27, "twenty seven"});
    mp.insert({28, "twenty eight"});
    mp.insert({29, "twenty nine"});
    mp.insert({30, "thirty"});
    mp.insert({31, "thirty one"});
    mp.insert({32, "thirty two"});
    mp.insert({33, "thirty three"});
    mp.insert({34, "thirty four"});
    mp.insert({35, "thirty five"});
    mp.insert({36, "thirty six"});
    mp.insert({37, "thirty eight"});
    mp.insert({39, "thirty nine"});
    mp.insert({40, "forty"});
    mp.insert({41, "forty one"});
    mp.insert({42, "forty two"});
    mp.insert({43, "forty three"});
    mp.insert({44, "forty four"});
    mp.insert({45, "forty five"});
    mp.insert({46, "forty six"});
    mp.insert({47, "forty seven"});
    mp.insert({48, "forty eight"});
    mp.insert({49, "forty nine"});
    mp.insert({50, "fifty"});
    mp.insert({51, "fifty one"});
    mp.insert({52, "fifty two"});
    mp.insert({53, "fifty three"});
    mp.insert({54, "fifty four"});
    mp.insert({55, "fifty five"});
    mp.insert({56, "fifty six"});
    mp.insert({57, "fifty seven"});
    mp.insert({58, "fifty eight"});
    mp.insert({59, "fifty nine"});
    mp.insert({60, "sixty"});
    mp.insert({61, "sixty one"});
    mp.insert({62, "sixty two"});
    mp.insert({63, "sixty three"});
    mp.insert({64, "sixty four"});
    mp.insert({65, "sixty five"});
    mp.insert({66, "sixty six"});
    mp.insert({67, "sixty seven"});
    mp.insert({68, "sixty eight"});
    mp.insert({69, "sixty nine"});
    mp.insert({70, "seventy"});
    mp.insert({71, "seventy one"});
    mp.insert({72, "seventy two"});
    mp.insert({73, "seventy three"});
    mp.insert({74, "seventy four"});
    mp.insert({75, "seventy five"});
    mp.insert({76, "seventy six"});
    mp.insert({77, "seventy seven"});
    mp.insert({78, "seventy eight"});
    mp.insert({79, "seventy nine"});
    mp.insert({80, "eighty"});
    mp.insert({81, "eighty one"});
    mp.insert({82, "eighty two"});
    mp.insert({83, "eighty three"});
    mp.insert({84, "eighty four"});
    mp.insert({85, "eighty five"});
    mp.insert({86, "eighty six"});
    mp.insert({87, "eighty seven"});
    mp.insert({88, "eighty eight"});
    mp.insert({89, "eighty nine"});
    mp.insert({90, "ninety"});
    mp.insert({91, "ninety one"});
    mp.insert({92, "ninety two"});
    mp.insert({93, "ninety three"});
    mp.insert({94, "ninety four"});
    mp.insert({95, "ninety five"});
    mp.insert({96, "ninety six"});
    mp.insert({97, "ninety seven"});
    mp.insert({98, "ninety eight"});
    mp.insert({99, "ninety nine"});
    mp.insert({100, "hundred"});

    for (i = 0; i < t; i++)
    {
        cin >> a;
        arr.push_back(a);
        s += mp[arr[i]];
    }

    int c = 0, n;
    n = s.size();
    for (i = 0; i < n; i++)
    {
        if (s[i] == 'a' || s[i] == 'e' || s[i] == 'o' || s[i] == 'i' || s[i] == 'u')
            c++;
    }
  //  cout<<c<<endl;
    if (c > 100)
    {
        cout << "greater 100." << endl;
    }
    else
    {
        int d = getPairsCount(arr, arr.size(), c);
        cout << mp[d] << endl;
    }
    return 0;
}
