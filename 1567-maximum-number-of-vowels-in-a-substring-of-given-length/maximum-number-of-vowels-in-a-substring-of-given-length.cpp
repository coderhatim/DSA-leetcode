class Solution {
public:
    int Check_vowel(char a) {
        if (a == 'a' || a == 'e' || a == 'i' || a == 'o' || a == 'u') {
            return 1;
        }
        return 0;
    }

    int maxVowels(string s, int k) {
        int total = 0;
        int maximum = INT_MIN;
        for (int i = 0; i < k; i++) {
            total += Check_vowel(s[i]);
        }
        maximum = std::max(maximum, total);
        int i = k;

        while (i < s.size()) {

            total += Check_vowel(s[i]);
            total -= Check_vowel(s[i - k]);
            maximum = std::max(maximum, total);

            i++;
        }
        return maximum;
    }
};