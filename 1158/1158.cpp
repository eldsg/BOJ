#include <iostream>
#include <stdio.h>
#include <vector>
using namespace std;
int t[5000];
vector<int> c;
vector<int>::iterator iter;
int main(){
	int a, b, count = 0, i = 0;
	scanf("%d %d", &a, &b);
	for (int i = 1; i <= a; i++){
		c.push_back(i);
	}
	printf("<");
	for (iter = c.begin(); c.size() != 0; iter++){
		if (iter == c.end()) iter = c.begin();
		count++;
		if ((count % b) == 0) {
			if (count == a*b) printf("%d>\n", *iter);
			else printf("%d, ", *iter);
			c.erase(iter--);
		}
	}
}