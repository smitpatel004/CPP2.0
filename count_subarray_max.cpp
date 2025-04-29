class Solution {
public:
    long long countSubarrays(vector<int>& nums, int k) {
        int maxi =*max_element(nums.begin(),nums.end());
        int r=0;
        int l=0;
        int cnt=0;
        long long ans=0;
        while(r<nums.size()){
            if(nums[r]==maxi){
                cnt++;
            }
          
              while (cnt >= k) {
                if (nums[l] == maxi) cnt--;
                l++;
            }

           
           
            r++;
            ans+=l;
        }
      
        return ans;
    }
};
