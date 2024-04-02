#include <iostream>
#include <vector>

using namespace std;


class Solution {
public:

    //declare an vector of [[vectors], int] 
    vector<int> twoSum(vector<int>& nums, int target) {

        //pass the nums array and the target value into the method
        
        int n = nums.size();
        for (int i = 0 ; i < n - 1; i++){
            for (int j = i + 1; j < n; j++){
                if (nums[i] + nums[j] == target){
                    return {i,j};

                }
            }
        }
        return {};
    }
};




int main(){

    vector<int> lol {2,9,11,4,24,5,42,21,4,7};
    int target {9};

    Solution sol;

    vector<int> output {};

    output = sol.twoSum(lol,target);

    cout << "answer is: [" << output[0]<< "," << output[1] << "]" << endl;
}