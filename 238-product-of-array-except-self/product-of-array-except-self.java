class Solution {
    public int[] productExceptSelf(int[] nums) {
        int[] answer = new int[nums.length];
        int leftProduct = 1;
        int rightProduct = 1;
        for(int i = 0; i < nums.length; i++){
           answer[i] = leftProduct;
           leftProduct *= nums[i];
        }

        for(int i = answer.length - 1; i >= 0; i--){
            answer[i] *= rightProduct;
            rightProduct *= nums[i];
        }
    return answer;
    }
}