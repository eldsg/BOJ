#include <iostream>
#include <string>
using namespace std;

int main(){
	int t;
	string next;
	cin >> t;
	cout << t << endl;
	while (t--){
		int e = 1;
		int w = 0;
		int n = 0;
		int s = 0;
		int k = 1;
		int i = 100, j = 1;
		int top = 100, bottom = 100, right = 1;
		char maze[201][201] = { 0 };
		cin >> next;
		int b = next.size();
		maze[i][j] = '.';
		for (k = 0; k < b; k++){
			if (next[k] == 'F'){
				if (e == 1 && w == 0 && n == 0 && s == 0){
					maze[i][++j] = '.';
				}
				else if (e == 0 && w == 1 && n == 0 && s == 0){
					maze[i][--j] = '.';
				}
				else if (e == 0 && w == 0 && n == 1 && s == 0){
					maze[--i][j] = '.';
				}
				else if (e == 0 && w == 0 && n == 0 && s == 1){
					maze[++i][j] = '.';
				}
			}
			else if (next[k] == 'R'){
				if (e == 1 && w == 0 && n == 0 && s == 0){
					maze[++i][j] = '.';
					e = 0;
					s = 1;
				}
				else if (e == 0 && w == 1 && n == 0 && s == 0){
					maze[--i][j] = '.';
					w = 0;
					n = 1;
				}
				else if (e == 0 && w == 0 && n == 1 && s == 0){
					maze[i][++j] = '.';
					e = 1;
					n = 0;
				}
				else if (e == 0 && w == 0 && n == 0 && s == 1){
					maze[i][--j] = '.';
					w = 1;
					s = 0;
				}
			}
			else if (next[k] == 'L'){
				if (e == 1 && w == 0 && n == 0 && s == 0){
					maze[--i][j] = '.';
					e = 0;
					n = 1;
				}
				else if (e == 0 && w == 1 && n == 0 && s == 0){
					maze[++i][j] = '.';
					w = 0;
					s = 1;
				}
				else if (e == 0 && w == 0 && n == 1 && s == 0){
					maze[i][--j] = '.';
					w = 1;
					n = 0;
				}
				else if (e == 0 && w == 0 && n == 0 && s == 1){
					maze[i][++j] = '.';
					e = 1;
					s = 0;
				}
			}
			else if (next[k] == 'B'){
				if (e == 1 && w == 0 && n == 0 && s == 0){
					maze[i][--j] = '.';
					e = 0;
					w = 1;
				}
				else if (e == 0 && w == 1 && n == 0 && s == 0){
					maze[i][++j] = '.';
					w = 0;
					e = 1;
				}
				else if (e == 0 && w == 0 && n == 1 && s == 0){
					maze[++i][j] = '.';
					n = 0;
					s = 1;
				}
				else if (e == 0 && w == 0 && n == 0 && s == 1){
					maze[--i][j] = '.';
					n = 1;
					s = 0;
				}
			}
			if (top > i) top = i;
			if (bottom < i) bottom = i;
			if (right < j) right = j;
		}
		cout << bottom - top + 3 << " " << right + 1 << endl;
		for (int i = top - 1; i <= bottom + 1; i++){
			for (int j = 1; j <= right+1; j++){
				cout << ((maze[i][j] == '.') ? '.' : '#');
			}
			cout << endl;
		}
	}
}