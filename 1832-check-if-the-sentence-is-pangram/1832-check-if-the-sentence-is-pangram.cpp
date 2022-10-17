class Solution {
public:
    bool checkIfPangram(string sentence) {
        vector<int> mp(26, 0);

        for (const auto &c : sentence)
            mp[c - 'a']++;

        bool isPanagram = true;

        for (int i = 0; i < 26; i++)
            isPanagram &= mp[i] == 0 ? false : true;

        return isPanagram;
    }
};