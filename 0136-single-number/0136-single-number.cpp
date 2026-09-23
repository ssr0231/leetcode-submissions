class Solution {
public:
    int singleNumber(vector<int>& nums) {
        /*int unique_element=0;
          for( int val:nums){
            unique_element^=val;
          }
          return unique_element;*/

          unordered_map<int,int> freq;
          for(int val:nums){
            freq[val]++;
          }
          for(auto it:freq){
            if(it.second == 1){
                return it.first;
            }
          }
          return -1;
    }
};