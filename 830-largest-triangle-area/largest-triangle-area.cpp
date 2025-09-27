class Solution {
public:
    double largestTriangleArea(vector<vector<int>>& points) {
        int n = points.size();
        double maxArea = 0.0;

        for (int i = 0; i < n; i++) {
            for (int j = i + 1; j < n; j++) {
                for (int k = j + 1; k < n; k++) {

                    int x1 = points[i][0];
                    int y1 = points[i][1];

                    int x2 = points[j][0];
                    int y2 = points[j][1];

                    int x3 = points[k][0];
                    int y3 = points[k][1];

                    double a = hypot(x2 - x1, y2 - y1);
                    double b = hypot(x2 - x3, y2 - y3);
                    double c = hypot(x3 - x1, y3 - y1);

                    double s = (a + b + c) * 0.5;

                    double heron = sqrt(s * (s - a) * (s - b) * (s - c));

                    maxArea = max(maxArea, heron);
                }
            }
        }
    return maxArea;
    }
};