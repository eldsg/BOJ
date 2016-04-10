#include <iostream>
using namespace std;

int main(){
	int i, j, testcase;
	cin >> testcase;
	for (i = 0; i < testcase; i++){
		int n, k, t, m, count[101] = { 0 }, jecul[101], score[101][101] = {0};
		int ID, sc, tn, ttime = 0;
		cin >> n >> k >> t >> m;
		for (j = 0; j < m; j++){
			cin >> ID >> tn >> sc;
			score[ID][0] -= score[ID][tn];
			if (score[ID][tn] < sc){
				score[ID][tn] = sc;
			}
			score[ID][0] += score[ID][tn];
			jecul[ID] = ttime;
			count[ID]++;
			ttime++;
		}
		int rank = 0;
		for (ID = 1; ID <= n; ID++){
			if (score[t][0] < score[ID][0])rank++;
			else if (score[t][0] == score[ID][0])
			{
				if (count[t] > count[ID])rank++;
				else if (count[t] == count[ID])
				{
					if (jecul[t] > jecul[ID])rank++;
					else if (jecul[t] == jecul[ID])rank++;
				
				}
			}
		}
		cout << rank << endl;
	}
}