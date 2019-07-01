class Solution {
public:
    vector<vector<int>> flipAndInvertImage(vector<vector<int>>& A) {
        if (A.empty()) return A;
        for (int i = 0; i < A.size(); ++i) {
            reverse(A[i].begin(), A[i].end());
        }
        for (int r = 0; r < A.size(); ++r) {
            for (int c = 0; c < A[r].size(); ++c) {
                A[r][c] = !A[r][c];
            }
        }
        return A;
    }
};
