#include <string>
#include <stdio.h>
#include <iostream>
using namespace std;
int main(){
	string a;
	cin >> a;
	if(a== "A+") printf("4.3");
	if(a== "A0")  printf("4.0");
	if(a== "A-")  printf("3.7");
    if(a== "B+")  printf("3.3");
	if(a== "B0") printf("3.0");
	if(a== "B-")  printf("2.7");
	if(a== "C+")  printf("2.3");
	if(a== "C0")  printf("2.0");
	if(a== "C-")  printf("1.7");
	if(a=="D+")  printf("1.3");
	if(a=="D0")  printf("1.0");
	if(a== "D-")  printf("0.7");
	if(a=="F")  printf("0.0");
}