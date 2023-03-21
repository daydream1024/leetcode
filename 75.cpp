#include "iostream"
#include "vector"
#include "string"
#include "stack"
#include <unordered_map>
#include <algorithm>

using namespace std;
class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        vector<vector<int>> ans;
        sort(nums.begin(), nums.end());
        for (int i = 0; i < nums.size()-2; ++i) {
            if (nums[i]>0)
                return ans;
            if ((i>0)&&(nums[i]==nums[i-1]))
                continue;
            int l=i+1,r=int(nums.size())-1;
            while (r>l){
                if (nums[i]+nums[r]+nums[l]==0){
                    ans.push_back({nums[i],nums[r],nums[l]});
                    ++l;--r;
                    while(l<r && nums[l]==nums[l-1])++l;
                    while(l<r && nums[r]==nums[r+1])--r;
                }
                else if (nums[i]+nums[r]+nums[l]>0){
                    r--;
                }
                else{
                    l++;
                }
            }
        }
        return ans;
    }
};
int main(){
    Solution a;
    vector<int> b={-2,0,0,2,2};
    a.threeSum(b);
}