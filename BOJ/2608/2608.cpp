#include<cstdio>
#include<string>
#include<iostream>
#include<map>

using namespace std;

string s, s1;
map<char, int> m;

void init(){
	m['I'] = 1, m['V'] = 5, m['X'] = 10, m['L'] = 50, m['C'] = 100, m['D'] = 500, m['M'] = 1000;
}

int getNum(string s){
	int ret = 0;
	int size = s.size();
	for(int i = 0; i < size; i++){
		if(m[s[i]] < m[s[i+1]]){
			ret += m[s[i+1]]-m[s[i]];
			i++;
		}
		else{
			ret += m[s[i]];
		}
	}
	return ret;
}

string numToS(int num){
	string temp = "";
	if(num >= 1000){
		int k = num/1000;
		while(k--) temp.push_back('M');
		num %= 1000;
	}
	if(num >= 900){
		num -= 900;
		temp.push_back('C');
		temp.push_back('M');
	}
	if(num >= 500){
		num -= 500;
		temp.push_back('D');
	}
	if(num >= 400){
		num -= 400;
		temp.push_back('C');
		temp.push_back('D');
	}
	if(num >= 100){
		int k = num/100;
		while(k--) temp.push_back('C');
		num %= 100;
	}
	if(num >= 90){
		num -= 90;
		temp.push_back('X');
		temp.push_back('C');
	}
	if(num >= 50){
		num -= 50;
		temp.push_back('L');
	}
	if(num >= 40){
		num -= 40;
		temp.push_back('X');
		temp.push_back('L');
	}
	if(num >= 10){
		int k = num/10;
		while(k--) temp.push_back('X');
		num %= 10;
	}
	if(num >= 9){
		num -= 9;
		temp.push_back('I');
		temp.push_back('X');
	}
	if(num >= 5){
		num -= 5;
		temp.push_back('V');
	}
	if(num >= 4){
		num -= 4;
		temp.push_back('I');
		temp.push_back('V');
	}
	if(num >= 1){
		while(num--) temp.push_back('I');
	}
	return temp;
}

int main(){
	init();
	cin >> s >> s1;
	int n = getNum(s);
	int n1 = getNum(s1);
//	printf("%d %d\n", n, n1);
	cout << n+n1 << " " << numToS(n+n1) << endl;
}
