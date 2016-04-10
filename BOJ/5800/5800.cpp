#include<iostream>
#include<stdio.h>
#include<algorithm>
#include<vector>
using namespace std;

int testcase;
int main(){
	cin >> testcase;
	for (int i = 1; i <= testcase; i++){
		int num;
		vector<int> math;
		cin >> num;
		int temp1 = num;
		while (num--){
			int temp;
			cin >> temp;
			math.push_back(temp);
		}
		sort(math.begin(), math.end());
		int tempgap = math[1] - math[0];
		for (int j = 1; j < temp1; j++){
			if (tempgap < math[j] - math[j-1]) tempgap = math[j] - math[j - 1];
		}
		printf("Class %d\n", i);
		printf("Max %d, Min %d, Largest gap %d\n", math[temp1 - 1], math[0], tempgap);
	}
}