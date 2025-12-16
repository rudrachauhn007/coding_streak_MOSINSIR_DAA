class Solution {
public:
    string reverseWords(string s) {
        s += " ";

        int cnt = 0;
        string ans = "";
        int index = 0;
        string first = "";

        // First word + vowel count
        for (auto it : s) {
            if (it == ' ') break;

            first += it;
            index++;

            if (it=='a'||it=='e'||it=='i'||it=='o'||it=='u')
                cnt++;
        }

        ans += first;   // add first word

        int cnt2 = 0;
        string cur_ans = "";

        // Process remaining words
        for (int i = index + 1; i < s.size(); i++) {
            char cur = s[i];

            if (cur != ' ')
                cur_ans += cur;

            if (cur=='a'||cur=='e'||cur=='i'||cur=='o'||cur=='u')
                cnt2++;

            else if (cur == ' ') {
                if (cnt2 == cnt)
                    reverse(cur_ans.begin(), cur_ans.end());

                ans += " " + cur_ans;

                cur_ans = "";
                cnt2 = 0;
            }
        }

        return ans;
    }
};
