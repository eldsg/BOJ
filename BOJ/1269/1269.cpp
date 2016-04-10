#include <iostream>
#include <iterator>
#include <vector>
#include <set>
#include <algorithm>
#include <stdio.h>
using namespace std;
set<int> se[3];
vector<int> ve;
int main(){
	int a, b, c;
	scanf("%d %d", &a, &b);
	for (int i = 0; i < a; i++){
		scanf("%d", &c);
		se[0].insert(c);
	}
	for (int j = 0; j < b; j++){
		scanf("%d", &c);
		se[1].insert(c);
	}
	set_symmetric_difference(se[0].begin(), se[0].end(), se[1].begin(), se[1].end(), back_inserter(ve));
	printf("%d\n", ve.size());
}