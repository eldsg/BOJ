#include <iostream>
using namespace std;

int main()
{
	int n;
	cin >> n;

	for (int i = 1; i <= n; i++)
	{
		for (int k = 1; k <= i; k++)
			cout << "*";
		for (int z = 1; z <= 2 * n - 2 * i; z++)
			cout << " ";
		for (int k = 1; k <= i; k++)
			cout << "*";

		cout << endl;
	}
	for (int i = 1; i <= n - 1; i++)
	{
		for (int k = 1; k <= n - i; k++)
			cout << "*";
		for (int z = 1; z <= 2 * i; z++)
			cout << " ";
		for (int k = 1; k <= n - i; k++)
			cout << "*";
		cout << endl;
	}
}
