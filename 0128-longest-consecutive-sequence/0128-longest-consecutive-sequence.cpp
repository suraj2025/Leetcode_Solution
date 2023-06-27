class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
    vector<int>v;
     sort(nums.begin(),nums.end());
    nums.erase(unique(nums.begin(), nums.end()), nums.end());
        int c=1,c1=0;
     if(nums.size()==0){
            return 0;
        }
      for(int i=0;i<nums.size()-1;i++){
          if(nums[i]==nums[i+1]-1 ){
             c++; 
          }
          else{
              c1=max(c,c1);
              c=1;
          }
         
      }
       c1=max(c,c1); 
      return c1 ;
    }
};