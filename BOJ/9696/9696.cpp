#include<cstdio>
#include<cstdlib>
#include<stack>
#include<cstring>
#include<string>
#include<vector>
#include<queue>
#include<iostream>

using namespace std;

int t, result = 0;
vector<char> ret;
vector<int> res;
vector<char> oper;
void process(string str){
	int size = str.size(), size1, calc;
	string temp;
	for(int i = 0; i <= size; i++){
		if(str[i] == '*' || str[i] == '/' || str[i] == '+' || str[i] == '-'){
			ret.push_back(str[i]);
			i+=1;
		}
		else if(str[i] == ' ' || str[i] == '\0' ){
			if(!ret.empty() && ret.back() == '*'){
				ret.pop_back();
				int calc1 = res.back();
				int calc2 = stoi(temp);
				res.pop_back();
				res.push_back(calc1*calc2);
				oper.push_back('*');
			}
			else if(!ret.empty() && ret.back() == '/'){
				ret.pop_back();
				int calc1 = res.back();
				int calc2 = stoi(temp);
				res.pop_back();
				res.push_back(calc1/calc2);
				oper.push_back('/');
			}
			else res.push_back(stoi(temp));
			temp.clear();
		}
		else{
			temp += str[i];
		}
	}
	result = res[0];
	for(int i = 0; i<ret.size(); i++){
		if(ret[i] == '+'){
			result += res[i+1];
			oper.push_back('+');
		}
		else{
			result -= res[i+1];
			oper.push_back('-');
		}
	}	
}

int main(){
	scanf("%d\n", &t);
	for(int i = 1; i<=t; i++){
		string str;
		getline(cin, str);	
		process(str);
		printf("Case #%d: ", i);
		for(int i = 0; i<oper.size(); i++){
			printf("%c ", oper[i]);
		}
		printf("%d\n", result);
		ret.clear();
		res.clear();
		oper.clear();
	}
			
}
