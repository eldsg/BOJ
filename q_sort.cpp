void q_sort(int arr[], int l, int r){
	int i = l, j = r;
	int pivot = arr[(l+r)/2];
	int temp;
	while(i <= j){
		while(arr[i] < pivot) i++;
		while(arr[j] > pivot) j--;
		if(i <= j){
			temp = arr[i];
			arr[i] = arr[j];
			arr[j] = temp;
			i++, j--;
		}
	};
	if(l < j) q_sort(arr, l, j);
	if(i < r) q_sort(arr, i, r);
}
