class Solution {
public:
    string reverseWords(string s) {
        vector<string> v;
        string str;
        for(int i=0; i<s.size(); i++)
        {
          if(s[i]!=' ')
          {
            str+=s[i];
          }
          else
          {
            if(!str.empty())
            {
              v.push_back(str);
              str = "";
            }
          }
        }
        if(!str.empty())
        v.push_back(str);
        str="";
        reverse(v.begin(), v.end());
        for(int i=0; i<v.size(); i++)
        {
          str+=v[i];
          if(i<v.size()-1)
          {
            str+=' ';
          }
        }
        return str;
    }
};