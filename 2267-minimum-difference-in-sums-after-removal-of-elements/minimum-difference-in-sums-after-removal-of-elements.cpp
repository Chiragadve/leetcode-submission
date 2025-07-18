class Solution {
public:
    long long minimumDifference(vector<int>& nums) {

        int N = nums.size();
        int n = N / 3;

        vector<long long> leftMinSum(N,0);
        vector<long long> rightMaxSum(N,0);

        priority_queue<int> MaxHeap;
        long leftSum = 0;

        for(int i = 0; i < 2*n; i++) {
            MaxHeap.push(nums[i]);
            leftSum+= nums[i];

            if(MaxHeap.size() > n){
                leftSum -= MaxHeap.top();
                MaxHeap.pop();
            }
        leftMinSum[i] = leftSum;
        }

        priority_queue<int, vector<int>, greater<int>> MinHeap;
        long long rightSum = 0;

        for(int i = N-1; i >= n; i--) {
            MinHeap.push(nums[i]);
            rightSum+= nums[i];

            if(MinHeap.size() > n){
                rightSum -= MinHeap.top();
                MinHeap.pop();
            }
        rightMaxSum[i] = rightSum;
        } 
    
        long long result = LLONG_MAX;

        for(int i = n - 1; i < 2 * n; i++){
            result = min(result, leftMinSum[i] - rightMaxSum[i+1]);
        }
    return result;
    }
};