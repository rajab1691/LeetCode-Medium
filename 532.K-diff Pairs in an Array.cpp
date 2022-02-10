/*
  Approach-1 : Using Map
  T.C & S.C- O(n)
*/
class Solution {
  public:
    int findPairs(vector<int>&nums, int k) {

      int n = nums.size();

      unordered_map <int,int> mp;
      for (auto x: nums) {
        mp[x]++;
      }
      int cnt = 0;
      //traverse in map to avoid duplicate pair
      for (auto x: mp) {
        // edge case 
        if (k == 0) {
          //if k==0, then there must be an element more than 1 times
          if (x.second > 1)
            cnt++;
        } else {
          if (mp.find(x.first + k) != mp.end()) {
            cnt++;
          }
        }
      }
      return cnt;
    }
};
