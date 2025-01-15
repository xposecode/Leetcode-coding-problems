class Solution {
public:
    vector<int> findThePrefixCommonArray(vector<int>& A, vector<int>& B) {
        int n = A.size();
        vector<int> visited(n + 1, 0); // To track occurrences in A and B
        vector<int> result(n, 0); // Result array
        int commonCount = 0;

        for (int i = 0; i < n; ++i) {
            if (++visited[A[i]] == 2) {
                ++commonCount; // A[i] is now common
            }
            if (++visited[B[i]] == 2) {
                ++commonCount; // B[i] is now common
            }
            result[i] = commonCount; // Update the result at index i
        }

        return result;
    }
};
