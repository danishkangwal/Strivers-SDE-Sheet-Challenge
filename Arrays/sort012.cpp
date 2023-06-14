void sort012(int *arr, int n)
{
   map<int,int> mp;
   for(int i = 0;i < n;i++)
      mp[arr[i]]++;
      
   for(int i = 0;i < n;i++){
      if(mp[0])
         arr[i] = 0;
      else if(mp[1])
         arr[i] = 1;
      else
         arr[i] = 2;
      mp[arr[i]]--;
   }
}
