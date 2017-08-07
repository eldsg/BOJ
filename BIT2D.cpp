void update(int x , int y , int val){
    int y1;
    while (x <= max_x){
        y1 = y;
        while (y1 <= max_y){
            tree[x][y1] += val;
            y1 += (y1 & -y1);
        }
        x += (x & -x);
    }
}
int sum(int x,int y){
    int sum= 0;        
    while( x){
        int y1 = y;
        while(y1){
           sum += tree[x][y1];
            y1 -= y1 & -y1;
        }
        x -= x & -x;
    }
    return sum;
}
int sumxtoy(int x0, int y0, int x1, int y1){
    return sum(x1, y1) - sum(x1,y0-1) - sum(x0-1, y1) + sum(x0-1, y0-1);
}
