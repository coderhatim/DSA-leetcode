class Solution {
public:
    bool checkAlpha(char alpha) {
        if (alpha == 'a') {
            return true;
        } else if (alpha == 'e')
            return true;
        else if (alpha == 'i')
            return true;
        else if (alpha == 'o')
            return true;
        else if (alpha == 'u')
            return true;
        else if (alpha == 'A')
            return true;
        else if (alpha == 'E')
            return true;
        else if (alpha == 'I')
            return true;
        else if (alpha == 'O')
            return true;
        else if (alpha == 'U')
            return true;
        else
            return false;
    }

    string reverseVowels(string s) {
        int size = s.size();
        vector<int> indexs;
        deque<char> vowels;

        for (int i = 0; i < size; i++) {
            if (checkAlpha(s[i])) {
                indexs.push_back(i);
                vowels.push_front(s[i]);
            }
        }

        for (int i = 0; i < indexs.size(); i++) {
            int num = indexs[i];
            s[num] = vowels[i];
        }

        return s;
    }
};