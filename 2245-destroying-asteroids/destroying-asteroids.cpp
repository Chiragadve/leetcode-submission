class Solution {
public:
    bool asteroidsDestroyed(long long mass, vector<int>& asteroids) {
        priority_queue<int> pq;
        int n = asteroids.size();

        sort(asteroids.begin(),asteroids.end());

        for(int i = 0; i < n; i++) {
            if(asteroids[i] <= mass){
                mass+=asteroids[i];
            }
            else if(mass < asteroids[i]){
                return false;
            }
        }
    return true;
    }
};