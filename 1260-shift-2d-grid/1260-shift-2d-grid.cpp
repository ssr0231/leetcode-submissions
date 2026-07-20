class Solution {
public:
    vector<vector<int>> shiftGrid(vector<vector<int>>& grid, int k) {
        int m = grid.size();
        int n = grid[0].size();
        vector<int> vec;
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                vec.push_back(grid[i][j]);
            }
        }
        k = k % vec.size(); 
        reverse(vec.begin(), vec.end());
        reverse(vec.begin(), vec.begin() + k);
        reverse(vec.begin() + k, vec.end());

        vector<vector<int>> ans(m, vector<int>(n));
        int idx = 0;
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                ans[i][j]=vec[idx];
                idx++;
            }
        }
        return ans;

    }
};