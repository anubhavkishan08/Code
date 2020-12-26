#include <iostream>
#include <cstring>
#include <algorithm>
using namespace std;

void swap(char *a, char *b)
{
	char temp = *a;
	*a = *b;
	*b = temp;
}

void findNext(char* input1, int input2)
{
	int i, j;
	for (i = input2-1; i > 0; i--)
		if (input1[i] > input1[i-1])
		break;
	if (i==0)
	{
		cout << "Next input1 is not possible";
		return;
	}


	int x = input1[i-1], smallest = i;
	for (j = i+1; j < input2; j++)
		if (input1[j] > x && input1[j] < input1[smallest])
			smallest = j;

	swap(&input1[smallest], &input1[i-1]);

	sort(input1 + i, input1 + input2);

	cout<< input1;

	return;
}

int main()
{
	char digits[50];
	int n;
	cin>>n;
	for(int i=0;i<n;i++)
        cin>>digits[i];
	findNext(digits, n);
	return 0;
}
