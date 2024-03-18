class Solution {
public:
    bool uniqueOccurrences(vector<int>& arr) {
        map<int, int> mp;
        set<int> s;
        for(auto i:arr)
        {
            mp[i]++;
        }
        for(auto& i:mp)
        {
            s.insert(i.second);
        }
        return mp.size()==s.size();
    }
};