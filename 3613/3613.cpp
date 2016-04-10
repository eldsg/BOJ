#include<iostream>
#include<string>
#include<stdio.h>
using namespace std;
int main(){
	string a;
	cin >> a;
	bool check = false;
	bool check1 = false;
	int size = a.size();
	for(int i=0; i<size; i++){
		if(a[i] == '_') check = true; // c++
		else if(a[i] >= 'A' && a[i] <= 'Z') check1 = true; //java
		if(check && check1){
			printf("Error!\n");
			return 0;
		}
	}
	if(check){
		if(a[0] == '_' || (a[0] >= 'A' && a[0] <='Z') || a[size-1] == '_'){
			printf("Error!\n");
			return 0;
		}
		for(int i = 0; i < size-1; i++){
			if(a[i] == '_' && a[i+1] =='_'){
			printf("Error!\n");
			return 0;
			}
		}
		printf("%c",a[0]);
		for(int i = 1; i<size; i++){
			if(a[i] == '_'){
				printf("%c", a[i+1]-32);
				i++;
			}
			else printf("%c", a[i]);
		}
		printf("\n");
	}
	else if(check1){
		if(a[0] >= 'A' && a[0] <='Z'){
			printf("Error!\n");
			return 0;
		}
		for(int i = 0; i<size; i++){
			if(a[i] >= 'A' && a[i] <='Z'){
				printf("_%c",a[i]+32);
			}
			else printf("%c",a[i]);
		}
		printf("\n");
	}
	else {
		for(int i =0; i<size; i++){
		printf("%c",a[i]);
		}
		printf("\n");
	}

}
