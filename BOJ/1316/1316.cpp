#include<cstdio>
#include<cstring>
bool mm[32];

int main(){
	int t, ret;
	scanf("%d\n", &t);
	ret = t;
	while(t--){
		memset(mm, false, sizeof(mm));
		char str[101];
		scanf("%s", str);
		mm[str[0]-'a'] = true;
		for(int i = 1; str[i]; i++){
			if(str[i] != str[i-1] && mm[str[i]-'a']){
				ret--;
				break;
			}
			mm[str[i]-'a'] = true;
		}
	}
	printf("%d\n", ret);
}
