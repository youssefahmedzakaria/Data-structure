#include <bits/stdc++.h>
using namespace std;

class Solution{
   public:
vector<int> searchRange(vector<int>& nums, int target) {
      auto res = equal_range(nums.begin(),nums.end(),target);
      if(res.first == nums.end()){
        return{-1,-1};
      }
      int x = res.first - nums.begin();
      int y = res.second - nums.begin() - 1;

      if (nums[x]!= target){
        return{-1,-1};
      }
      return{x,y};
}
};

int main() {
   Solution s;
   vector<int> nums = {5, 7, 7, 8, 8, 10};
   int target = 8;
   vector<int> result = s.searchRange(nums, target);
   cout << "[" << result[0] << "," << result[1] << "]" <<endl;
   return 0;
}