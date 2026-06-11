class Solution {
public:
    void generate(int n, vector<string>& ans, string str,
                  int open_used, int close_used) {

        if (open_used + close_used == 2 * n) {
            ans.push_back(str);
            return;
        }

        if (open_used < n) {
            generate(n, ans, str + '(', open_used + 1, close_used);
        }

        if (close_used < open_used) {
            generate(n, ans, str + ')', open_used, close_used + 1);
        }
    }

    vector<string> generateParenthesis(int n) {
        vector<string> ans;
        generate(n, ans, "", 0, 0);
        return ans;
    }
};