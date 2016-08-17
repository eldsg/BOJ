#include<cstdio>
#include<cstring>
#include<string>
#include<iostream>

using namespace std;

int main(){
	int num;
	string str;
	scanf("%d\n", &num);
	while(num--){
		int g = 0, b = 0;
		getline(cin, str);
		int size = str.size();
		for(int i = 0; i<size; i++){
			if(str[i] == 'g' || str[i] == 'G') g++;
			else if(str[i] == 'b' || str[i] == 'B') b++;
		}
		cout << str;
		printf(" is %s\n", g == b ? "NEUTRAL" : g > b ? "GOOD" : "A BADDY");
	}
}
