#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    bool hasPath(vector<vector<char> >& matrix, string word) {
        row = matrix.size();
        col = matrix[0].size();
        str_size = word.size();
        visited = vector<vector<int> >(row, vector<int>(col, 0));
        for(int i = 0; i < row; i++){
            for(int j = 0; j < col; j++){
                if(matrix[i][j] == word[0]){
                    dfs(i, j, 0, word, matrix);
                    if(flag == 1){
                        return true;
                    }
                }
            }
        }
        return false;
    }
    void dfs(int x, int y, int cur, string& word, vector<vector<char> >& matrix){
        if(flag == 1) return;
        if(x >= 0 && x < row && y >= 0 && y <col &&
          visited[x][y] == 0 && matrix[x][y] == word[cur]){
            if(cur == str_size - 1){
                flag = 1;
                return;
            }
            visited[x][y] = 1;
            dfs(x + 1, y, cur + 1, word, matrix);
            dfs(x, y + 1, cur + 1, word, matrix);
            dfs(x - 1, y, cur + 1, word, matrix);
            dfs(x, y - 1, cur + 1, word, matrix);
            visited[x][y] = 0;
        }
        return;
    }
private:
    vector<vector<int> > visited;
    int flag = 0;
    int row, col;
    int str_size;
};