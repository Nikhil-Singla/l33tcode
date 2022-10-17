class Solution {
public:
    int firstUniqChar(string s) 
    {
        unordered_map<char, int> hash;
        for(int i=0; i<s.length(); i++)
        {
            hash[s[i]]++;
        }
        for(int i=0; i<s.length(); i++)
        {
            if(hash[s[i]]==1)
            {
                return i;
            }
        }
        return -1;
    }
};