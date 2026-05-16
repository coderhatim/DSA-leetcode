class Solution {
public:
    int roman(char letter) {
        if (letter == 'I')
            return 1;
        else if (letter == 'V')
            return 5;
        else if (letter == 'X')
            return 10;
        else if (letter == 'L')
            return 50;
        else if (letter == 'C')
            return 100;
        else if (letter == 'D')
            return 500;
        else
            return 1000;
    }

    bool check(char first, char second) {
        if (roman(first) < roman(second))
            return true;
        else
            return false;
    }

    int romanToInt(string s) {
        int index = 0;
        int num = 0;
        bool lock = false;
        while (index < s.size()) {
            
            if (index < s.size() - 1) {
                if (check(s[index], s[index + 1])) {
                    num += roman(s[index + 1]) - roman(s[index]);
                    index += 2;
                    lock = true;
                } else
                    lock = false;
            }
            else lock = false;

            if (!lock) {
                num += roman(s[index]);
                index++;
            }
            
        }
        return num;
    }
};