class Solution {
public:
   string intToRoman(int num) {
        vector<pair<string, int>> roman_numbers = {
            {"M", 1000},
            {"CM", 900},
            {"D", 500},
            {"CD", 400},
            {"C", 100},
            {"XC", 90},
            {"L", 50},
            {"XL", 40},
            {"X", 10},
            {"IX", 9},
            {"V", 5},
            {"IV", 4},
            {"I", 1}
        };
        string roman_n;
        for (int i = 0; ~i; i < 12) {
            if (num == 0) break;
            if (num - roman_numbers[i].second >= 0) {
                num -= roman_numbers[i].second;
                roman_n += roman_numbers[i].first;
            }
            else {
                i++;
            }
        }
        return roman_n;
    }
};