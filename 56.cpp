//
// Created by 15535 on 2023/3/21.
//
#include "iostream"
#include "vector"
using namespace std;
class Solution {
public:
    int maxArea(vector<int>& height) {
        int i=0,j=height.size()-1,maxans=0;
        while (i<j){
                maxans=max((j-i)*min(height[i],height[j]),maxans);
            if (height[i]<height[j])
                i++;
            else
                j--;
        }
        return maxans;
    }
};
int main(){
    vector<int> a={1,8,6,2,5,4,8,3,7};
    Solution b;
    int ans;
    ans = b.maxArea(a);
    cout<<ans<<endl;
    for (int i : a) {
        cout<<i;
    }
}