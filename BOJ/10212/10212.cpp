#include <iostream>
using namespace std;

int main(){
	char *p;
	p = new char[5];
	cout << (((int)p / 10 % 2) ? "Yonsei" : "Korea");
}