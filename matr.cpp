#include<bits/stdc++.h>
using namespace std;

void booleanMatrix(vector<vector<int> > &matrix)
    {
        int r = matrix.size();
        int c = matrix[0].size();
        int vr[r] = {0};
        int vc[c] = {0};
        for(int i=0;i<r;i++){
            for(int j =0;j<c;j++){
                if(matrix[i][j] == 1){
                    vr[i] = 1;
                    vc[j] = 1;
                }
            }
        }
        for(int i=0;i<r;i++){
            for(int j =0;j<c;j++){
                if(vr[i] or vc[j] == 1){
                    matrix[i][j] = 1;
                }
            }
        }
    }

void solve(){

}

int main(){
	vector<vector<int> > matrix;
	matrix[4][3] = {
			  { 1, 0, 0},
              { 1, 0, 0},
              { 1, 0, 0},
              { 0, 0, 0} };
	booleanMatrix(matrix);
	for(int i=0;i<r;i++){
        for(int j =0;j<c;j++){
            cout<<matrix[i][j]<<" ";
   	    }
    	cout<<"\n";
    }
return 0;
}

