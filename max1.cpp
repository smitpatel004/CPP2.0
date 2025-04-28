class Solution {
    public:
        int longestOnes(vector<int>& nums, int k) {
            int r=0,l=0,cntzero=0;
            int maxlen=0;
            while(r<nums.size()){
    
                 if(nums[r]==0){
                        cntzero++;
                }
               if(cntzero>k){
                if(nums[l]==0)cntzero--;
                l++;
               }
               if(cntzero<=k)
               maxlen = max(maxlen,r-l+1);
               r++;
    
    
            
    
            }
            return maxlen;
         
            
        }
    };