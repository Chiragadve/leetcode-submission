class Solution {
    public int singleNumber(int[] nums) {
        HashMap<Integer,Integer> map = new HashMap<>();

        for(int x : nums){
            map.put(x,map.getOrDefault(x,0) + 1);
        }
        
        for(Map.Entry<Integer,Integer> e : map.entrySet()){
            if(e.getValue() == 1) {
                return e.getKey();
            }
        }
    return -1;
    }
}