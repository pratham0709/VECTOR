class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int n = nums.size();
        vector<int>Rightprod(n,1);
        vector<int>Leftprod(n,1);
        for(int i=n-2; i>=0; i--){
            Rightprod[i] = Rightprod[i+1]*nums[i+1];
        }
        for(int i=1; i<n; i++){
            Leftprod[i] = Leftprod[i-1]*nums[i-1];
        }
        for(int i= 0; i<n; i++){
            nums[i] = Rightprod[i]*Leftprod[i];
        }
        return nums;
    }
    
};
