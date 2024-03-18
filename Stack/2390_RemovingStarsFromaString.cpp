class Solution {
public:
    string removeStars(string s) {
        stack<char> st;
        for(int i=0; i<s.length(); i++)
        {
            s[i]=='*'?st.pop():st.push(s[i]);
        }
        s="";
        int n = st.size();
        for(int i=0; i<n; i++)
        {
            s+=st.top();
            st.pop();
        }
        reverse(s.begin(), s.end());
        return s;
        // stack<char> st;
        // for(int i=s.length()-1; i>=0; i--)
        // {
        //     st.push(s[i]);
        // }
        // int size = st.size();
        // s="";
        // for(int i=0; i<size; i++)
        // {
        //     if(st.top()=='*')
        //     {
        //         int last = s.length()-1;
        //         s.erase(last);
        //     }
        //     else
        //     {
        //         s+=st.top();
        //     }
        //     st.pop();
        // }
        // return s;
    }
};