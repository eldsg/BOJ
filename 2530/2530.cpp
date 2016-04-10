#include<iostream>
using namespace std;

int main(){
	int time, minitue, second, plussecon;
	cin >> time >> minitue >> second;
	cin >> plussecon;
	second = second + (plussecon % 3600) % 60;
	minitue = minitue + (plussecon % 3600) / 60 + second / 60;
	time = time + plussecon / 3600 + minitue / 60;
	second = second % 60;
	minitue = minitue % 60;
	time = time % 24;
	cout << time << " " << minitue << " " << second << endl;
}