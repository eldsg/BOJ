#include<iostream>
#include<vector>
#include<algorithm>
#include<string.h>
#include<stdio.h>
using namespace std;
int N, A, B;
vector<int> cardleft;
vector<int> cardright;
vector< vector <int> > dp;
int solve(int a, int b){
	if(a >= N || b >= N) return 0;
	if(dp[a][b] != -1) return dp[a][b];
	int result = 0;
	result = max(result, solve(a+1,b));
	result = max(result, solve(a+1,b+1));
	if(cardleft[a] > cardright[b]){
		result = max(result, cardright[b]+solve(a, b+1));
	}
	dp[a][b] = result;
	return result;
}
int main(){
	scanf("%d", &N);
	dp = vector < vector<int> >(N, vector<int>(N,-1));
	for(int i = 0; i<N; i++){
		scanf("%d", &A);
		cardleft.push_back(A);
	}
	for(int i = 0; i<N; i++){
		scanf("%d", &B);
		cardright.push_back(B);
	}
	cout << solve(0,0) << endl;
	
	
}