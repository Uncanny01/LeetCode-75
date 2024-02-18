class Solution {
public:
    vector<bool> kidsWithCandies(vector<int>& candies, int extraCandies) {
        vector<bool> v;
        int max_candies = *max_element(candies.begin(), candies.end());
        for(int i=0; i<candies.size(); i++)
        {
            v.push_back(candies[i]+extraCandies>=max_candies);
        }
        return v;
    }
};