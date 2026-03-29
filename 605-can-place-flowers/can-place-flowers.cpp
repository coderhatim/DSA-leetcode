class Solution {
public:
    bool canPlaceFlowers(vector<int>& flowerbed, int n) {
        int size = flowerbed.size();
        vector<bool> flowerPlacementList;

        for (int i = n; i > 0; i--) {
            bool check = false;
            for (int j = 0; j < size; j++) {
                if (size == 1) {
                    if (flowerbed[0] == 0 && n <= 1)
                        return true;
                    return n == 0;
                }
                if (j == 0 && flowerbed[j] == 0 && flowerbed[j + 1] == 0) {
                    check = true;
                    flowerbed[j] = 1;
                    break;
                }
                if (j == size - 1 && flowerbed[j] == 0 &&
                    flowerbed[j - 1] == 0) {
                    check = true;
                    flowerbed[j] = 1;
                    break;
                }
                if (j != 0 && j != size - 1) {
                    if ((flowerbed[j - 1] == 0) && (flowerbed[j] == 0) &&
                        (flowerbed[j + 1] == 0)) {
                        flowerbed[j] = 1;
                        check = true;
                        break;
                    }
                }

                check = false;
            }
            flowerPlacementList.push_back(check);
        }

        for (int i = 0; i < flowerPlacementList.size(); i++) {
            if (flowerPlacementList[i] == false) {
                return false;
            }
        }
        return true;
    }
};