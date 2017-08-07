#include <bits/stdc++.h>

using namespace std;

int cnt[10], cnt2[10];

bool checki0(char a, char b){
	if(a > '0' && a <= '9' && b >= '0' && b <= '9') return true;
	return false;
}
bool check(char a, char b){
	if(a >= '0' && a <= '9' && b >= '0' && b <= '9') return true;
	return false;	
}

bool proc(char *s, char *s2){
	memset(cnt, 0, sizeof(cnt));
	memset(cnt2, 0, sizeof(cnt2));
	for(int i = 0; s[i]; i++) cnt[s[i]-'0']++;
	for(int i = 0; s2[i]; i++) cnt2[s2[i]-'0']++;
	for(int i = 0; i <= 9; i++){
		if(cnt[i] && cnt2[i]) continue;
		else if(!cnt[i] && !cnt2[i]) continue;
		else return false;
	}
	return true;
}
bool proc2(char *s, char *s2){
	bool chk;
	int strl = strlen(s);
	for(int i = 0; i < strl-1; i++){
		if(i == 0){
			s[i]--; s[i+1]++;
			if(checki0(s[i], s[i+1])){
				if(proc(s, s2)) return true;
			}
			s[i]+=2; s[i+1]-=2;
			if(checki0(s[i], s[i+1])){
				if(proc(s, s2)) return true;
			}
			s[i]--; s[i+1]++;
		}
		else{
			s[i]--; s[i+1]++;
			if(check(s[i], s[i+1])){
				if(proc(s, s2)) return true;
			}
			s[i]+=2; s[i+1]-=2;
			if(check(s[i], s[i+1])){
				if(proc(s, s2)) return true;
			}
			s[i]--; s[i+1]++;
		}
	}
	return false;
}
int main(){
	int tc = 3;
	while(tc--){
		bool chk = false;
		char str[101], str2[101];
		scanf("%s %s", str, str2);
		if(proc(str, str2)) {
			puts("friends");
			continue;
		}
		else{
			//첫 번쨰 스트링 교체
			if(proc2(str, str2)){
				puts("almost friends");
				continue;
			}
			if(proc2(str2, str)){
				puts("almost friends");
				continue;
			}
		}
		puts("nothing");
	}
}