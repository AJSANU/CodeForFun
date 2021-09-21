// Problem Statement Link : https://leetcode.com/problems/two-sum/submissions/
// Problem Name : Two Sum
// Data Structures Used : Array, Vector, Hash map

class Solution {
 public:
   vector<int> twoSum(vector<int>& arr, int k) {
        vector<int> res;
        int n=arr.size();
        unordered_map<int,int> m;
        for(int i=0;i<n;i++)
        {
            auto it=m.find(k-arr[i]);
            if(it==m.end())
            {
                m[arr[i]]=i;
            }
            else
            {
                res.push_back(it->second);
                res.push_back(i);
            }
        }
        return res;
    }
};
