#include<cstdio>
#include<cstdlib>
#include<cstring>
#include<vector>
#include<string>
#include<iostream>
using namespace std;

vector<char> ret;

int main(){
	char a[1000001], b[37];
	scanf("%s\n%s", a, b);
	int csize = strlen(b);
	for(int i = 0; a[i]; i++){
		ret.push_back(a[i]);
		int check = 0;
		if(ret.size() >= csize){
			int index = ret.size();
			for(int j = 0; j<csize; j++){
				if(ret.at(index-csize+j) == b[j]){
					check++;
				}
			}
			if(check == csize){
				for(int j = 0; j<csize; j++){
					ret.pop_back();
				}
			}
		}
	}
	int size = ret.size();
	if(!size) printf("FRULA\n");
	else {
		for(int i = 0; i<size; i++){
			printf("%c", ret[i]);
		}
		printf("\n");
	}
}
