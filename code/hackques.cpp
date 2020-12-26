#include <bits/stdc++.h>
using namespace std;

// Function to string into grid form
void gridStr(string str)
{
	int l = str.length();
	int k = 0, row, column;
	row = floor(sqrt(l));
	column = ceil(sqrt(l));

	if (row * column < l)
		row = column;

	char s[row][column];
	// convert the string into grid
	for (int i = 0; i < row; i++) {
		for (int j = 0; j < column; j++) {
			s[i][j] = str[k];
			k++;
		}
	}

	// Printing the grid
	for (int i = 0; i < row; i++) {
		for (int j = 0; j < column; j++) {
			if (s[i][j] == '\0')
				break;
			cout << s[i][j];
		}
		cout << endl;
	}
}

// Driver code
int main()
{
	string str = "923857614";
	gridStr(str);

	return 0;
}

