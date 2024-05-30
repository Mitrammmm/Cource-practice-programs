#include <vector>

using namespace std;


//gpt********************************************************************
class Solution {
public:
    int matrixScore(vector<vector<int>>& grid) {
        int r = grid.size();
        int c = grid[0].size();

        // Step 1: Checking 1st column & flipping rows
        for(int i = 0; i < r; i++){
            if(grid[i][0] == 0){
                for(int j = 0; j < c; j++){
                    grid[i][j] ^= 1; // Flipping 0 to 1 and 1 to 0 using XOR
                }
            }
        }

        // Counting the number of zeros in each column
        vector<int> colZeros(c, 0);
        for(int j = 0; j < c; j++){
            for(int i = 0; i < r; i++){
                colZeros[j] += (grid[i][j] == 0);
            }
        }

        // Step 2: Flipping columns if the number of zeros is more than half
        for(int j = 0; j < c; j++){
            if(colZeros[j] > (r / 2.0)){
                for(int i = 0; i < r; i++){
                    grid[i][j] ^= 1; // Flipping 0 to 1 and 1 to 0 using XOR
                }
            }
        }

        // Step 3: Finding sum & totalling
        int sum = 0;
        for(int i = 0; i < r; i++){
            int conve = 1;
            for(int j = c - 1; j >= 0; j--){
                if(grid[i][j] == 1){
                    sum += 1 * conve;
                }
                conve *= 2;
            }
        }

        return sum;
    }
};



// Mine*******************************************************************************************
class Solution {
public:
    int matrixScore(vector<vector<int>>& grid) {
        int r = grid.size();
        int c = grid[0].size();

        //checking 1st column & flipping
        for(int i=0;i<r;i++){
            if(grid[i][0]==0){
                for(int j=0;j<c;j++){
                    if(grid[i][j]==0) grid[i][j] = 1;
                    else grid[i][j] = 0;
                }
            }
        }
        //each col check and flipping
        for(int j=0;j<c;j++){
            int noz = 0;
            for(int i=0;i<r;i++){
                if(grid[i][j]==0) noz++;
            }
            if(noz > (r/2.0) ){       //OR NOZ>NOO
                for(int i=0;i<r;i++){
                    if(grid[i][j]==0) grid[i][j] = 1;
                    else grid[i][j] = 0;
                }
            }
        }
        //finding sum & totalling
        int sum = 0;
        for(int i=0;i<r;i++){
            int conve = 1;
            for(int j=c-1;j>=0;j--){
                if(grid[i][j]==1){
                    sum += 1*conve;
                }
                conve *=2;
            }
        }

        return sum;
    }
};