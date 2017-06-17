#include<cstdio>
#include<string>
#include<iostream>
using namespace std;

int main(){
	int N;
	scanf("%d", &N);	
	while(N--){
		double num;
		string str;
		scanf("%lf ", &num);
		getline(cin, str);
		for(int i = 0; str[i]; i++){
			if(str[i] == '@') num*=3;
			else if(str[i] == '%') num+=5;
			else if(str[i] == '#') num-=7;
		}
		printf("%.2lf\n", num);
	}
}
