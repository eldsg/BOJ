#include <bits/stdc++.h>

using namespace std;

#define white 0
#define yellow 1
#define red 2
#define orange 3
#define green 4
#define blue 5

/*
	U, D, F, B, L, R
	w, y, r, o, g, b
*/

int cleft[3][3], cup[3][3], cdown[3][3], cfront[3][3], cback[3][3], cright[3][3];

void pp(){
	for(int i = 0; i < 3; i++){
		for(int j = 0; j < 3; j++){
			if(cup[i][j] == 0) printf("w");
			else if(cup[i][j] == 1) printf("y");
			else if(cup[i][j] == 2) printf("r");
			else if(cup[i][j] == 3) printf("o");
			else if(cup[i][j] == 4) printf("g");
			else printf("b");
		}
		puts("");
	}
	for(int i = 0; i < 3; i++){
		for(int j = 0; j < 3; j++){
			if(cdown[i][j] == 0) printf("w");
			else if(cdown[i][j] == 1) printf("y");
			else if(cdown[i][j] == 2) printf("r");
			else if(cdown[i][j] == 3) printf("o");
			else if(cdown[i][j] == 4) printf("g");
			else printf("b");
		}
		puts("");
	}
	for(int i = 0; i < 3; i++){
		for(int j = 0; j < 3; j++){
			if(cfront[i][j] == 0) printf("w");
			else if(cfront[i][j] == 1) printf("y");
			else if(cfront[i][j] == 2) printf("r");
			else if(cfront[i][j] == 3) printf("o");
			else if(cfront[i][j] == 4) printf("g");
			else printf("b");
		}
		puts("");
	}
	for(int i = 0; i < 3; i++){
		for(int j = 0; j < 3; j++){
			if(cback[i][j] == 0) printf("w");
			else if(cback[i][j] == 1) printf("y");
			else if(cback[i][j] == 2) printf("r");
			else if(cback[i][j] == 3) printf("o");
			else if(cback[i][j] == 4) printf("g");
			else printf("b");
		}
		puts("");
	}
	for(int i = 0; i < 3; i++){
		for(int j = 0; j < 3; j++){
			if(cleft[i][j] == 0) printf("w");
			else if(cleft[i][j] == 1) printf("y");
			else if(cleft[i][j] == 2) printf("r");
			else if(cleft[i][j] == 3) printf("o");
			else if(cleft[i][j] == 4) printf("g");
			else printf("b");
		}
		puts("");
	}
	for(int i = 0; i < 3; i++){
		for(int j = 0; j < 3; j++){
			if(cright[i][j] == 0) printf("w");
			else if(cright[i][j] == 1) printf("y");
			else if(cright[i][j] == 2) printf("r");
			else if(cright[i][j] == 3) printf("o");
			else if(cright[i][j] == 4) printf("g");
			else printf("b");
		}
		puts("");
	}
	puts("");
}

void init(){
	for(int i = 0; i < 3; i++){
		for(int j = 0; j < 3; j++){
			cup[i][j] = white;
			cdown[i][j] = yellow;
			cfront[i][j] = red;
			cback[i][j] = orange;
			cleft[i][j] = green;
			cright[i][j] = blue;
		}
	}
}


/*
Layout
              **************
              * U0  U1  U2 *
              *            *
              * U7      U3 *
              *            *
              * U6  U5  U4 *
 *****************************************************
 * L0  L1  L2 * F0  F1  F2 * R0  R1  R2 * B0  B1  B2 *
 *            *            *            *            *
 * L7      L3 * F7      F3 * R7      R3 * B7      B3 *
 *            *            *            *            *
 * L6  L5  L4 * F6  F5  F4 * R6  R5  R4 * B6  B5  B4 *
 *****************************************************
              * D0  D1  D2 *
              *            *
              * D7      D3 *
              *            *
              * D6  D5  D4 *
              **************
*/

void cubeu(bool rot){
	int temp[3], temp2[3], temp3[3][3];
	for(int i = 0; i < 3; i++){
		for(int j = 0; j < 3; j++){
			temp3[i][j] = cup[i][j];
		}
	}
	if(rot){
		cup[0][0] = temp3[2][0]; cup[0][1] = temp3[1][0]; cup[0][2] = temp3[0][0];
		cup[1][0] = temp3[2][1]; cup[1][1] = temp3[1][1]; cup[1][2] = temp3[0][1];
		cup[2][0] = temp3[2][2]; cup[2][1] = temp3[1][2]; cup[2][2] = temp3[0][2];
		for(int i = 0; i < 3; i++) temp[i] = cfront[0][i];
		for(int i = 0; i < 3; i++) cfront[0][i] = cright[0][i];
		for(int i = 0; i < 3; i++) cright[0][i] = cback[0][i];
		for(int i = 0; i < 3; i++) cback[0][i] = cleft[0][i];
		for(int i = 0; i < 3; i++) cleft[0][i] = temp[i];
	}
	else{
		cup[0][0] = temp3[0][2]; cup[0][1] = temp3[1][2]; cup[0][2] = temp3[2][2];
		cup[1][0] = temp3[0][1]; cup[1][1] = temp3[1][1]; cup[1][2] = temp3[2][1];
		cup[2][0] = temp3[0][0]; cup[2][1] = temp3[1][0]; cup[2][2] = temp3[2][0];
		for(int i = 0; i < 3; i++) temp[i] = cfront[0][i];
		for(int i = 0; i < 3; i++) cfront[0][i] = cleft[0][i];
		for(int i = 0; i < 3; i++) cleft[0][i] = cback[0][i];
		for(int i = 0; i < 3; i++) cback[0][i] = cright[0][i];
		for(int i = 0; i < 3; i++) cright[0][i] = temp[i];
	}

}

void cubed(bool rot){
	int temp[3], temp2[3], temp3[3][3];
	for(int i = 0; i < 3; i++){
		for(int j = 0; j < 3; j++){
			temp3[i][j] = cdown[i][j];
		}
	}
	if(rot){
		cdown[0][0] = temp3[2][0]; cdown[0][1] = temp3[1][0]; cdown[0][2] = temp3[0][0];
		cdown[1][0] = temp3[2][1]; cdown[1][1] = temp3[1][1]; cdown[1][2] = temp3[0][1];
		cdown[2][0] = temp3[2][2]; cdown[2][1] = temp3[1][2]; cdown[2][2] = temp3[0][2];
		for(int i = 0; i < 3; i++) temp[i] = cfront[2][i];
		for(int i = 0; i < 3; i++) cfront[2][i] = cleft[2][i];
		for(int i = 0; i < 3; i++) cleft[2][i] = cback[2][i];
		for(int i = 0; i < 3; i++) cback[2][i] = cright[2][i];
		for(int i = 0; i < 3; i++) cright[2][i] = temp[i];

	}
	else{
		cdown[0][0] = temp3[0][2]; cdown[0][1] = temp3[1][2]; cdown[0][2] = temp3[2][2];
		cdown[1][0] = temp3[0][1]; cdown[1][1] = temp3[1][1]; cdown[1][2] = temp3[2][1];
		cdown[2][0] = temp3[0][0]; cdown[2][1] = temp3[1][0]; cdown[2][2] = temp3[2][0];
		for(int i = 0; i < 3; i++) temp[i] = cfront[2][i];
		for(int i = 0; i < 3; i++) cfront[2][i] = cright[2][i];
		for(int i = 0; i < 3; i++) cright[2][i] = cback[2][i];
		for(int i = 0; i < 3; i++) cback[2][i] = cleft[2][i];
		for(int i = 0; i < 3; i++) cleft[2][i] = temp[i];
	}

}
void cubef(bool rot){
	int temp[3], temp2[3], temp3[3][3];
	for(int i = 0; i < 3; i++){
		for(int j = 0; j < 3; j++){
			temp3[i][j] = cfront[i][j];
		}
	}
	if(rot){
		cfront[0][0] = temp3[2][0]; cfront[0][1] = temp3[1][0]; cfront[0][2] = temp3[0][0];
		cfront[1][0] = temp3[2][1]; cfront[1][1] = temp3[1][1]; cfront[1][2] = temp3[0][1];
		cfront[2][0] = temp3[2][2]; cfront[2][1] = temp3[1][2]; cfront[2][2] = temp3[0][2];
		for(int i = 0; i < 3; i++) temp[i] = cup[2][i];
		for(int i = 0; i < 3; i++) cup[2][i] = cleft[2-i][2];
		for(int i = 0; i < 3; i++) cleft[2-i][2] = cdown[0][2-i];
		for(int i = 0; i < 3; i++) cdown[0][2-i] = cright[i][0];
		for(int i = 0; i < 3; i++) cright[i][0] = temp[i];
	}
	else{
		cfront[0][0] = temp3[0][2]; cfront[0][1] = temp3[1][2]; cfront[0][2] = temp3[2][2];
		cfront[1][0] = temp3[0][1]; cfront[1][1] = temp3[1][1]; cfront[1][2] = temp3[2][1];
		cfront[2][0] = temp3[0][0]; cfront[2][1] = temp3[1][0]; cfront[2][2] = temp3[2][0];
		for(int i = 0; i < 3; i++) temp[i] = cup[2][i];
		for(int i = 0; i < 3; i++) cup[2][i] = cright[i][0];
		for(int i = 0; i < 3; i++) cright[i][0] = cdown[0][2-i];
		for(int i = 0; i < 3; i++) cdown[0][2-i] = cleft[2-i][2];
		for(int i = 0; i < 3; i++) cleft[2-i][2] = temp[i];
	}
}
void cubeb(bool rot){
	int temp[3], temp2[3], temp3[3][3];
	for(int i = 0; i < 3; i++){
		for(int j = 0; j < 3; j++){
			temp3[i][j] = cback[i][j];
		}
	}
	if(rot){
		cback[0][0] = temp3[2][0]; cback[0][1] = temp3[1][0]; cback[0][2] = temp3[0][0];
		cback[1][0] = temp3[2][1]; cback[1][1] = temp3[1][1]; cback[1][2] = temp3[0][1];
		cback[2][0] = temp3[2][2]; cback[2][1] = temp3[1][2]; cback[2][2] = temp3[0][2];
		for(int i = 0; i < 3; i++) temp[i] = cup[0][2-i];
		for(int i = 0; i < 3; i++) cup[0][2-i] = cright[2-i][2];
		for(int i = 0; i < 3; i++) cright[2-i][2] = cdown[2][i];
		for(int i = 0; i < 3; i++) cdown[2][i] = cleft[i][0];
		for(int i = 0; i < 3; i++) cleft[i][0] = temp[i];
	}
	else{
		cback[0][0] = temp3[0][2]; cback[0][1] = temp3[1][2]; cback[0][2] = temp3[2][2];
		cback[1][0] = temp3[0][1]; cback[1][1] = temp3[1][1]; cback[1][2] = temp3[2][1];
		cback[2][0] = temp3[0][0]; cback[2][1] = temp3[1][0]; cback[2][2] = temp3[2][0];
		for(int i = 0; i < 3; i++) temp[i] = cup[0][2-i];
		for(int i = 0; i < 3; i++) cup[0][2-i] = cleft[i][0];
		for(int i = 0; i < 3; i++) cleft[i][0] = cdown[2][i];
		for(int i = 0; i < 3; i++) cdown[2][i] = cright[2-i][2];
		for(int i = 0; i < 3; i++) cright[2-i][2] = temp[i];
	}
}
void cubel(bool rot){
	int temp[3], temp2[3], temp3[3][3];
	for(int i = 0; i < 3; i++){
		for(int j = 0; j < 3; j++){
			temp3[i][j] = cleft[i][j];
		}
	}
	if(rot){
		cleft[0][0] = temp3[2][0]; cleft[0][1] = temp3[1][0]; cleft[0][2] = temp3[0][0];
		cleft[1][0] = temp3[2][1]; cleft[1][1] = temp3[1][1]; cleft[1][2] = temp3[0][1];
		cleft[2][0] = temp3[2][2]; cleft[2][1] = temp3[1][2]; cleft[2][2] = temp3[0][2];
		for(int i = 0; i < 3; i++) temp[i] = cup[i][0];
		for(int i = 0; i < 3; i++) cup[i][0] = cback[2-i][2];
		for(int i = 0; i < 3; i++) cback[2-i][2] = cdown[i][0];
		for(int i = 0; i < 3; i++) cdown[i][0] = cfront[i][0];
		for(int i = 0; i < 3; i++) cfront[i][0] = temp[i];
	}
	else{
		cleft[0][0] = temp3[0][2]; cleft[0][1] = temp3[1][2]; cleft[0][2] = temp3[2][2];
		cleft[1][0] = temp3[0][1]; cleft[1][1] = temp3[1][1]; cleft[1][2] = temp3[2][1];
		cleft[2][0] = temp3[0][0]; cleft[2][1] = temp3[1][0]; cleft[2][2] = temp3[2][0];
		for(int i = 0; i < 3; i++) temp[i] = cup[i][0];
		for(int i = 0; i < 3; i++) cup[i][0] = cfront[i][0];
		for(int i = 0; i < 3; i++) cfront[i][0] = cdown[i][0];
		for(int i = 0; i < 3; i++) cdown[i][0] = cback[2-i][2];
		for(int i = 0; i < 3; i++) cback[2-i][2] = temp[i];
	}
} 
void cuber(bool rot){
	int temp[3], temp2[3], temp3[3][3];
	for(int i = 0; i < 3; i++){
		for(int j = 0; j < 3; j++){
			temp3[i][j] = cright[i][j];
		}
	}
	if(rot){
		cright[0][0] = temp3[2][0]; cright[0][1] = temp3[1][0]; cright[0][2] = temp3[0][0];
		cright[1][0] = temp3[2][1]; cright[1][1] = temp3[1][1]; cright[1][2] = temp3[0][1];
		cright[2][0] = temp3[2][2]; cright[2][1] = temp3[1][2]; cright[2][2] = temp3[0][2];
		for(int i = 0; i < 3; i++) temp[i] = cup[2-i][2];
		for(int i = 0; i < 3; i++) cup[2-i][2] = cfront[2-i][2];
		for(int i = 0; i < 3; i++) cfront[2-i][2] = cdown[2-i][2];
		for(int i = 0; i < 3; i++) cdown[2-i][2] = cback[i][0];
		for(int i = 0; i < 3; i++) cback[i][0] = temp[i];
	}
	else{
		cright[0][0] = temp3[0][2]; cright[0][1] = temp3[1][2]; cright[0][2] = temp3[2][2];
		cright[1][0] = temp3[0][1]; cright[1][1] = temp3[1][1]; cright[1][2] = temp3[2][1];
		cright[2][0] = temp3[0][0]; cright[2][1] = temp3[1][0]; cright[2][2] = temp3[2][0];
		for(int i = 0; i < 3; i++) temp[i] = cup[2-i][2];
		for(int i = 0; i < 3; i++) cup[2-i][2] = cback[i][0];
		for(int i = 0; i < 3; i++) cback[i][0] = cdown[2-i][2];
		for(int i = 0; i < 3; i++) cdown[2-i][2] = cfront[2-i][2];
		for(int i = 0; i < 3; i++) cfront[2-i][2] = temp[i];
	}
}
int main(){
	int tc, n, line = 1;
	char str, rot;
	scanf("%d", &tc);
	while(tc--){
		scanf("%d\n", &n);
		init();
		for(int i = 0; i < n; i++){
			scanf("%c%c ", &str, &rot);
			//printf("%c %c\n", str, rot);
			if(str == 'U'){
				if(rot == '+'){
					cubeu(1);
				}
				else{
					cubeu(0);
				}
				//pp();
			}
			else if(str == 'D'){
				if(rot == '+'){
					cubed(1);
				}
				else{
					cubed(0);
				}
				//pp();
			}
			else if(str == 'F'){
				if(rot == '+'){
					cubef(1);
				}
				else{
					cubef(0);
				}
				//pp();
			}
			else if(str == 'B'){
				if(rot == '+'){
					cubeb(1);
				}
				else{
					cubeb(0);
				}
				//pp();
			}
			else if(str == 'L'){
				if(rot == '+'){
					cubel(1);
				}
				else{
					cubel(0);
				}
				//pp();
			}
			else{
				if(rot == '+'){
					cuber(1);
				}
				else{
					cuber(0);
				}
				//pp();
			}
		}
/*
#define white 0
#define yellow 1
#define red 2
#define orange 3
#define green 4
#define blue 5
*/
		for(int i = 0; i < 3; i++){
				//printf("%d : ", line);
			for(int j = 0; j < 3; j++){
				if(cup[i][j] == 0) printf("w");
				else if(cup[i][j] == 1) printf("y");
				else if(cup[i][j] == 2) printf("r");
				else if(cup[i][j] == 3) printf("o");
				else if(cup[i][j] == 4) printf("g");
				else printf("b");
			}
			puts("");
			//line++;
		}
	}
}