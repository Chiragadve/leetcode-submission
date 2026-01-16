class Solution {
    public int romanToInt(String s) {
        Map<Character,Integer> map = new HashMap<>();
        map.put('I',1);
        map.put('V',5);
        map.put('X',10);
        map.put('L',50);
        map.put('C',100);
        map.put('D',500);
        map.put('M',1000);

        int counter = 0;
        int N = s.length();

        for(int i = 0; i < N; i++){
            int current = map.get(s.charAt(i));
            int next = (i+1 < N) ? map.get(s.charAt(i+1)) : 0;

            if(current > next){
                counter += current;
            }
            else if(current < next){
                counter -= current;
            }else{
                counter += current;
            }
        }
    return counter;
    }
}