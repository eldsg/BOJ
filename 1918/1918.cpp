#include <iostream>
#include <string>
using namespace std;
class my_stack{ // 스택
private:
	char *S; //스택을 저장할 배열
	int arrsize; // 스택 배열 사이즈
	int top; // 스택의 최상위를 가르킴
public:
	~my_stack(){ delete[] S; } // 스택 동적할당해제
	void create(int size); // 스택을 만드는함수 우선 선언
	char push(char ch){ // 스택 푸쉬 
		if (top == arrsize){ // 사이즈가 꽉차면 사이즈를 2배로 재할당
			arrsize *= 2;
			S = new char[arrsize];
		}
		S[++top] = ch;
		return ch;
	}
	char pop(){ // 스택 팝
		return S[top--];
	}
	char st(){ //스택 상단의 값을 구함
		if (top < 0){ return -1; }
		else return S[top];
	}
	int emp(){ // 스택이 비엇는지 확인
		return (top < 0);
	}
};
void my_stack::create(int size){  // 스택 동적할당및 구현
	arrsize = size;
	S = new char[arrsize];
	top = -1;
}
char operand(char s){ //연산자 반환
	return(s == '+' || s == '-' || s == '*' || s == '/');
}
int pri(char s){ // 연산자 우선순위 계산
	if (s == '(') return 0;
	if (s == '+' || s == '-') return 1;
	if (s == '*' || s == '/') return 2;
	else return 3;
}
void backwrite(char *c, char *b){ // b라는 중위표현식을 c라는 후위표현식으로 바꾸는 함수
	my_stack a;			// 스택을 하나 구현
	a.create(100);
	while (*b){
		if (*b == '('){		// '('가 들어오면  무조건 푸쉬!
			a.push(*b);
			b++;
		}
		else if (*b == ')'){ //')'가 들어오면 '('가 나올때까지 팝해줌
			while (a.st() != '('){
				*c++ = a.pop();
			}
			a.pop(); // '(' 팝한번더해줌
			b++;
		}
		else if (operand(*b)){ // 만약 연산자가 들어온다면 
			while (!a.emp() && (pri(a.st()) >= pri(*b))){// 스택에 상단의 우선순위가 현재의
				*c++ = a.pop();							     // 우선순위보다 크거나 같다면 팝
			}
			a.push(*b);									// 아니면 스택에 푸쉬
			b++;
		}
		else if (*b >= 'A' && *b <= 'Z'){				//연산자가 아니라면 바로 출력
			*c++ = *b++;
		}
		else
			b++;
	}
	while (!a.emp()){ //동작이 다 끝나더라도 스택에 연산자가 존재하면 모두 출력
		*c++ = a.pop();
	}
	*c = 0;	//실질적값 이외의 쓰레기값을 제거
}

int main(){
	int result1;
	string first;
	cin >> first;
	char *temp = new char[first.length() + 1]; //후위표현식을 저장할 변수
	char *second = new char[first.length() + 1]; // 문자열을 char형으로 받음
	second = (char *)first.c_str();
	backwrite(temp, second);
	cout << temp << endl;
}