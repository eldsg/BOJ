#include<cstdio>
#include<cstdlib>
#include<iostream>
#include<cstring>

using namespace std;

bool check[10];

bool checkAll(){
	for(int i = 0; i<10; i++){
		if(check[i] == false) return false;
	}
	return true;
}
int main(int argc, char* argv[]){
	FILE *file, *file2;
	int testcase;
	file = fopen(argv[1], "r");
	file2 = fopen("output.txt", "w");
	fscanf(file, "%d", &testcase);
	for(int i = 0; i<testcase; i++){
		int testnum;
		memset(check, false, sizeof(check));
		fscanf(file, "%d", &testnum);
		if(testnum == 0){
			fprintf(file2, "Case #%d: INSOMNIA\n", i+1);
		}
		else{
			int mul = 1;
			int temp;
			while(!checkAll()){
				char num[10];
				temp = testnum;
				temp *= mul;
				sprintf(num, "%d", temp);
				int size = strlen(num);
				for(int i = 0; i<size; i++){
					check[num[i]-'0'] = true;
				}
				mul++;
			}
			fprintf(file2, "Case #%d: %d\n", i+1, temp);
		}
		
	}
}
