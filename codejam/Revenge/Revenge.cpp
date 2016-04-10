#include<cstdio>
#include<cstdlib>
#include<iostream>
#include<cstring>

using namespace std;

int main(int argc, char* argv[]){
	FILE *file, *file2;
	int testcase;
	file = fopen(argv[1], "r");
	file2 = fopen("output.txt", "w");
	fscanf(file, "%d", &testcase);
	for(int i = 0; i<testcase; i++){
		char line[200];
		fscanf(file, "%s", line);
		int size = strlen(line);
		int count = 0;
		for(int j = 1; j<size; j++){
			if(line[j-1] != line[j]) count++;
		}
		if(line[size-1] == '+'){
			fprintf(file2, "Case #%d: %d\n", i+1, count);
		}
		else fprintf(file2, "Case #%d: %d\n", i+1, count+1);
	}
}
