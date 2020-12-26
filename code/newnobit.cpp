#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

int main() {

    string s("Hello World");
    reverse(s.begin(), s.end());

    int start = 0;

    while(true) {
        int index = s.find(" ", start);
        if (index == s.npos) {
            reverse(s.begin() + start, s.end());
            break;
        }
        reverse(s.begin() + start, s.begin() + index);
        start = index + 1;
    }
    cout << s << endl;

    return 0;
}
