class Solution {
public:
    string getsignature(int num){
        string s = to_string(num);
        sort(s.begin(),s.end());
        return s;
    }

    bool reorderedPowerOf2(int n) {
        string target = getsignature(n);
        unordered_set<string> signatures;

        for(int i = 0; i <= 30; i++){
            int power = 1 << i;
            signatures.insert(getsignature(power));
        }

    return signatures.count(target) > 0;
    }
};