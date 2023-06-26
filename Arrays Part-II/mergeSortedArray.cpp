
vector<int> ninjaAndSortedArrays(vector<int>& arr1, vector<int>& arr2, int m, int n) {
	int i = m-1,j = n-1,idx = m+n-1;
	while(i >= 0 and j >= 0){
		if(arr1[i] > arr2[j]){
			arr1[idx--] = arr1[i--];
		}
		else{
			arr1[idx--] = arr2[j--];
		}
	}
	while(j >= 0){
		arr1[idx--] = arr2[j--];
	}
	
	return arr1;
}
