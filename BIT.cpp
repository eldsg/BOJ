int sum(int *t, int index){
    int ans = 0;
    while(index > 0){
        ans += t[index];
        index -= (index & -index);
    }
    return ans;
}

void update(int *t, int index, int num){
    while(index <= 222222){
        t[index] += num;
        index += (index & -index);
    }
}