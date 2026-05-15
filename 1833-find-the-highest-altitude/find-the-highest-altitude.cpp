class Solution {
public:
    int largestAltitude(vector<int>& gain) {
        int largest = 0;
        int altitude  = 0;
        for(int a : gain){
            altitude += a;
            largest = std::max(largest,altitude );
        }
        return largest;
    }
};