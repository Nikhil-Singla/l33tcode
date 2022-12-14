class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) 
    {
        sort(strs.begin(), strs.end());
        uint n = strs.size();
        string ans = "";
        for(int i = 0; (i < strs[n-1].length()) && (i < strs[0].length()); i++)
        {
            if(strs[n-1][i] == strs[0][i])
            {
                ans += strs[n-1][i];
            }
            else
            {
                break;
            }
        }    
        return ans;
    }
};