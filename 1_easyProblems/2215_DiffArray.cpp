class Solution {
public:
    vector<vector<int>> findDifference(vector<int>& nums1, vector<int>& nums2) 
    {
        unordered_map<int, int> hash;
        vector<vector<int>> ans;
        vector<int> temp1, temp2;
        for(int i = 0; i < nums1.size(); i++)
        {
            hash[nums1[i]]++;
        }    
        for(int i = 0; i < nums2.size(); i++)
        {
            if(hash[nums2[i]] > 0)
            {
                hash[nums2[i]] = 1002;
            }
            else
            {
                temp2.push_back(nums2[i]);
            }
        }
        for(auto i = hash.begin(); i != hash.end(); i++)
        {
            if(i->second > 0 && i->second < 1001)
            {
                temp1.push_back(i->first);
            }
        }
        set<int> unique1( temp1.begin(), temp1.end() ), unique2( temp2.begin(), temp2.end() );
        temp2.assign( unique2.begin(), unique2.end() );
        temp1.assign( unique1.begin(), unique1.end() );
        ans.push_back(temp1);
        ans.push_back(temp2);
        return ans;
    }
};