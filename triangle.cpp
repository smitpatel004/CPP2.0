class Solution {
public:
    string triangleType(vector<int>& nums) {
        if(nums[0]+nums[1]<=nums[2]  || nums[0]+nums[2]<=nums[1]  || nums[1]+nums[2]<=nums[0] ){
            return "none";
        }
    sort(nums.begin(),nums.end());
    int cnt=0;
    
    for(int i=0;i<nums.size()-1;i++){
        if(nums[i]==nums[i+1]){
            cnt++;
        }
    }
    if(cnt==2){
        return "equilateral";
    }
    if(cnt==1){
        return "isosceles";
    }
   
           return "scalene";
    }
};
