class Solution {
public:
    int maxVowels(string s, int k) {
        int count=0;
        int maxi = INT_MIN;
        for(int i=0; i<k; i++)
        {
            if(s[i]=='a' || s[i]=='e' || s[i]=='i' || s[i]=='o' || s[i]=='u')
            {
                count++;
            }
        }
        if(count==k)
        {
            return k;
        }
        maxi = max(maxi, count);
        for(int i=0; i<s.length()-k; i++)
        {
            if(s[i]=='a' || s[i]=='e' || s[i]=='i' || s[i]=='o' || s[i]=='u')
            {
                count--;
            }
            if(s[i+k]=='a' || s[i+k]=='e' || s[i+k]=='i' || s[i+k]=='o' || s[i+k]=='u')
            {
                count++;
            }
            maxi = max(maxi, count);
            if(maxi==k)
            return k;
        }
        return maxi;
    }
};