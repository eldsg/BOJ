#include <stdio.h>
int main(){
	int T, num[7], result, min = 101;
	scanf("%d", &T);
	while (T--){
		result = 0, min = 101;
		for (int i = 0; i < 7; i++){
			scanf("%d", &num[i]);
			if (num[i] % 2 == 0){
				result += num[i];
				if (min > num[i]){
					min = num[i];
				}
			}
		}
        printf("%d %d\n", result, min);
	}
}