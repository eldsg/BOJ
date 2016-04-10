#include<stdio.h>
#include<string.h>
#include<stack>
char a[32];
int results[32];
std::stack<char> expo;
std::stack<int> expo2;
int main(){
	int resultleft = 0, resultmul = 0, result;
	int i = 0;
	scanf("%s", a);
	int size = strlen(a);
	for (int j = 0; j < size; j++){
		int temp;
		if (!j&&a[j] >= '0' && a[j] <= '9'){
			resultleft = a[j] - '0';
		}
		else if (a[j] == '+'){
			resultleft += a[j + 1] - '0';
			j++;
		}
		else {
			resultleft *= a[j + 1] - '0';
			j++;
		}
	}
	for (int j = 0; j < size; j++){
		expo.push(a[j]);
	}
	while (1){
		char temp;
		int temp1;
		if (expo.empty())break;
		if (expo.top() >= '0' && expo.top() <= '9'){
			temp1 = expo.top();
			expo.pop();
			expo2.push(temp1 - '0');
		}
		else if (expo.top() == '*'){
			expo.pop();
			temp1 = expo.top() - '0';
			expo.pop();
			int temp2 = expo2.top();
			temp1 *= temp2;
			expo2.pop();
			expo2.push(temp1);
		}
		else{
			expo2.push(expo.top());
			expo.pop();
		}
	}
	while (1){
		if (expo2.empty())break;
		if (expo2.top() != '+'){
			resultmul += expo2.top();
			expo2.pop();
		}
		else {
			expo2.pop();
		}
	}
	scanf("%d", &result);
	if (result == resultmul && result == resultleft){
		printf("U");
	}
	else if (result == resultmul){
		printf("M");
	}
	else if (result == resultleft){
		printf("L");
	}
	else printf("I");
}