class Solution {
public:
    int compress(vector<char>& chars) {
        int size = chars.size();
        if (size == 1)
            return 1;
        int num = 0;
        char temp;
        string ans;
        for (int i = 0; i < size; i++) {
            if (i == 0) {
                temp = chars[i];
                num = 1;
            }

            else if (temp != chars[i]) {
                ans += temp;
                if (!(num <= 1))
                    ans += to_string(num);
                temp = chars[i];
                num = 1;
                if (i == size - 1)
                    ans += temp;
            } else if (i == size - 1) {
                num++;
                ans += temp;
                if (!(num <= 1))
                    ans += to_string(num);
            } else {
                num++;
            }
        }
        chars = vector<char>(ans.begin(), ans.end());
        return ans.size();
    }
};