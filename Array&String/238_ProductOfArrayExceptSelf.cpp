class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int n = nums.size();
        vector<int> output(n);
        output[0] = 1;
        for(int i=1; i<n; i++){
            output[i] = output[i-1] * nums[i-1];
        }
        int right = 1;
        for(int i=n-1; i>=0; i--){
            output[i] *= right;
            right *= nums[i];
        }
        return output;



        //This code will return in tle. Just for understanding purpose.
        
        // int size = nums.size();
        // vector<int> v;
        // for(int i=0; i<size; i++)
        // {
        //     int multiple = 1;
        //     for(int j=0; j<size; j++)
        //     {
        //         if(j==i)
        //         {
        //             continue;
        //         }
        //         multiple*=nums[j];
        //     }
        //     v.push_back(multiple);
        // }
        // return v;
    }
};