#include <iostream>
using namespace std;
//참가자배열
char name[100] = { 'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J', 'K', 'L', 'M', 'N', 'O', 'P', 'Q', 'R', 'S', 'T', 'U', 'V', 'W', 'X', 'Y', 'Z' };
//입력받은 순서를 저장할배열
char temp[100];
//결과배열
char temp1[100];
int into1; //참가자 수
int n; //전체 가로줄 개수
int gn;
char sadari[1024][1024] = {'0'}; //사다리를 그릴 배열
//사다리를 정렬할 함수
void sortsadari(){
	for (int i = 0; i < gn; i++){
		for (int j = 0; j < into1 - 1; j++){
			if (sadari[i][j] == '-'){
				swap(name[j], name[j+1]);
			}
		}
	}
	for (int i = n - 1; i> gn; i--){
		for (int j = 0; j < into1-1; j++){
			if (sadari[i][j] == '-'){
				swap(temp[j], temp[j+1]);
			}
		}
	}
}
int out(){
	for (int i = 0; i < into1 - 1; i++){ 
		if (name[i] != temp[i]){ //값이 다르면 결과값의 첫번째 배열에 -를 입력하고 배열순서 변경
			temp1[i] = '-'; 
			swap(temp[i], temp[i + 1]);
		}
		else temp1[i] = '*';
		if (name[i] != temp[i]) return -1; // 되는 값이 없으면 -1 리턴
	}
	return 1; 
}

int main(){
	int a;
	cin >> into1 >> n; // 참가자 수와 전체 가로줄 개수 및 사다리까지 입력
	for (int i = 0; i < into1; i++){
		cin >> temp[i];
	}
	for (int i = 0; i < n; i++){
		for (int j = 0; j < into1-1; j++){
			cin >> sadari[i][j];
		}
	}
	for (int i = 0; i < n; i++){
		if (sadari[i][0] == '?') gn = i; //?가 나올떄까지의 길이를 구함
	}
	sortsadari();
	a = out();
	if (a == -1){
		for (int i = 0; i < into1-1; i++){
			cout << "x";
		}
		cout << endl;
	}
	else {
		for (int i = 0; i < into1 -1; i++){
			cout << temp1[i];
		}
	}
	return 0;
}