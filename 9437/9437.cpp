#include <iostream>
#include <string>
using namespace std;

int main()
{
	int n, p;
	int pop[3];
	while (1)
	{
		cin >> n;
		if (n == 0) break;
		cin >> p;

		if (p % 2 == 0)
		{
			pop[0] = p - 1;
			p = p - 1;
		}
		else if (p % 2 == 1)
			pop[0] = p + 1;
		pop[1] = n - p;
		pop[2] = n - p + 1;

		for (int i = 0; i < 3; i++)
		{
			for (int j = i + 1; j < 3; j++)
			{
				if (pop[i]>pop[j]) swap(pop[i], pop[j]);
			}
		}

		cout << pop[0] << " " << pop[1] << " " << pop[2] << endl;
	}
}
