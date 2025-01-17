#include <vector>
using namespace std;

class Solution {
public:
    bool doesValidArrayExist(vector<int>& derived) {
        int n = derived.size();
        
        // Function to verify if an assumed original[0] produces a valid derived array
        auto isValid = [&](int firstElement) -> bool {
            vector<int> original(n);
            original[0] = firstElement;

            // Construct the original array based on the derived array
            for (int i = 0; i < n - 1; ++i) {
                original[i + 1] = derived[i] ^ original[i];
            }

            // Check the circular condition
            return (original[n - 1] ^ original[0]) == derived[n - 1];
        };

        // Check both possible cases for original[0] (0 and 1)
        return isValid(0) || isValid(1);
    }
};
