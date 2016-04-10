#include <iostream>
using namespace std;
long long int N, P, Q;
long long int A[2000010];
long long int cal(long long int i){
	if (i == 0) return 1;
	else if (i <= 2000000) return A[i / P] + A[i / Q];
	else return cal(i / P) + cal(i / Q);
}
int main(){
	long long int a;
	cin >> N >> P >> Q;
	A[0] = 1;
	for (a = 1; a <= 2000000; a++){
		A[a] = A[a / P] + A[a / Q];
	}
	cout << cal(N) << endl;
}