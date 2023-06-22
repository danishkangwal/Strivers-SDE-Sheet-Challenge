vector<vector<int>> pairSum(vector<int> &arr, int s){
   sort(arr.begin(),arr.end());
   vector<vector<int>> res;
   for(int i = 0;i < arr.size();i++){
      for(int j = i+1;j < arr.size();j++){
         if(s == arr[i]+arr[j]){
            res.push_back({arr[i],arr[j]});
         }
      }
   }
   return res;
}
