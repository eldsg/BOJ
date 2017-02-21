static inline bool is_number(const int i){
	return !((i & 0Xf0) ^ 0x30);
}

static inline void scan_int(int *const x){
	register int c = getchar_unlocked();
	*x = 0;
	while(is_number(c)){
		*x = ((*x<<1) + (*x<<3) + (c - '0'));
		c = getchar_unlocked();
	}
}
