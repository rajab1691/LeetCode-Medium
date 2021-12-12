/*  
  T.C-O(n)
  S.C-O(1)
*/
 void reverse(vector<int>& nums,int l,int r){
            
        while(l<r){
            
            swap(nums[l++],nums[r--]);
        }
        
    }
    void rotate(vector<int>& nums, int k) {
            
        int n=nums.size();
        if(n==k)return;
        k=k%n;
        reverse(nums,n-k,n-1);
        reverse(nums,0,n-k-1);
        reverse(nums,0,n-1);
        
    }
