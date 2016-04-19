#include<cstdio>
#include<cstdlib>
#include<iostream>
#include<cstring>
#include<string>
#include<math.h>
#include<deque>

using namespace std;

deque<char> result;
char input[1001]; 

int main(int argc, char* argv[]){
	FILE *file, *file2;
	int testcase,n ,b;
	file = fopen(argv[1], "r");
	file2 = fopen("output.txt", "w");
	fscanf(file, "%d", &testcase);
	for(int i = 0; i<testcase; i++){
		result.clear();
		fscanf(file, "%s", input);
		fprintf(file2, "Case #%d: ", i+1);
		int size = strlen(input);
		result.push_back(input[0]);
		for(int j = 1; j<size; j++){
			if(result.front() <= input[j]) result.push_front(input[j]);
			else result.push_back(input[j]);
		}
		for(auto it = result.begin(); it!=result.end(); it++){
			fprintf(file2, "%c", *it);
		}
		fprintf(file2, "\n");
	}
}
