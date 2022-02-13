/*
  Problem: array of unique elements,return all possible subsets
  Input: nums = [1,2,3]
  Output: [[],[1],[2],[1,2],[3],[1,3],[2,3],[1,2,3]]
*/

/*

  1.using backtracking
  T.C-O(2^n)
  
*/
class Solution {
public:
    vector<vector<int>> subsets(vector<int>& nums) {
        
        vector<vector<int>>res;
        
        vector<int>ans;

        helper(0,nums,ans,res);
        return res;
    }
    
    void helper(int i,vector<int>&arr,vector<int>&v,vector<vector<int>>&ans){
        
          if(i==arr.size()) {
           ans.push_back(v);
           return;
        }
        
      //include
       v.push_back(arr[i]);
       helper(i+1,arr,v,ans);
       v.pop_back();
       //exclude
       helper(i+1,arr,v,ans);
        
    }
};
