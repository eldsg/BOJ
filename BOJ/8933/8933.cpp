#include<stdio.h>
#include<stdlib.h>
#include<iostream>
#include<map>
using namespace std;
long long hashing[] = {1, 1000, 1000000, 1000000000};
int main(){
	int tc;
	scanf("%d", &tc);
	while(tc--){
		map<long long, int> mapping;
		int num;
		long long mapnum = 0;
		string res;
		scanf("%d", &num);
		cin >> res;
		int size = res.size();
		for(int i = 0; i<num; i++){
			if(res[i] == 'A') mapnum+=hashing[0];
			else if(res[i] == 'G') mapnum+=hashing[1];
			else if(res[i] == 'T') mapnum+=hashing[2];
			else mapnum+=hashing[3];
		}
		mapping[mapnum]++;
		for(int i = 1; i< size-num+1; i++){
			if(res[i-1] == 'A') mapnum-=hashing[0];
			else if(res[i-1] == 'G') mapnum-=hashing[1];
			else if(res[i-1] == 'T') mapnum-=hashing[2];
			else mapnum-=hashing[3];
			if(res[i+num-1] == 'A') mapnum+=hashing[0];
			else if(res[i+num-1] =='G') mapnum+=hashing[1];
			else if(res[i+num-1] == 'T') mapnum+=hashing[2];
			else mapnum+=hashing[3];
			mapping[mapnum]++;
		}
		int max = 0;
		map<long long, int>::iterator it;
		for(it=mapping.begin(); it!=mapping.end(); it++){
			if(max < it->second) max = it->second;
		}
		printf("%d\n", max);
	}	
}
