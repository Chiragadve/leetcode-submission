class Solution {
    public int[] intersect(int[] nums1, int[] nums2) {
        HashMap<Integer, Integer> map = new HashMap<>();
        ArrayList<Integer> result = new ArrayList<>();

        for (int num : nums1) {
            map.put(num, map.getOrDefault(num, 0) + 1);
        }

        for (int i = 0; i < nums2.length; i++) {
            int num = nums2[i];
            if (map.containsKey(nums2[i]) && map.get(num) > 0) {
                result.add(num);
                int freq = map.get(num) - 1;
                if(freq == 0){
                    map.remove(num);
                }else{
                    map.put(num,freq);
                }
            }
        }
        return result.stream().mapToInt(Integer::intValue).toArray();
    }
}