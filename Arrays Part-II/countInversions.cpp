#include <bits/stdc++.h> 
typedef long long ll;

long long merge(long long *arr,ll left,ll mid, ll right){
    ll cnt = 0;
    vector<long long> tmp;
    int l = left,r = mid+1;

    while(l <= mid and r <= right){
        if(arr[l] <= arr[r]){
            tmp.push_back(arr[l]);
            l++;
        }
        else{
            tmp.push_back(arr[r]);
            r++;
            cnt += mid-l+1;
        }
    }
    while(l <= mid){
        tmp.push_back(arr[l]);
        l++;
    }
    while(r <= right){
        tmp.push_back(arr[r]);
        r++;
    }
    for(int i = left;i <= right;i++){
        arr[i] = tmp[i-left];
    }
    return cnt;
}

long long mergeSort(long long *arr,long long left,long long right){
    long long cnt = 0;
    if(left >= right)
        return cnt;
    int mid = left + (right-left)/2;
    cnt += mergeSort(arr,left,mid);
    cnt += mergeSort(arr,mid+1,right);
    cnt += merge(arr,left,mid,right);
    return cnt;
}
long long getInversions(long long *arr, int n){

    return mergeSort(arr,0,n-1);
}
