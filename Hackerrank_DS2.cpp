//https://www.hackerrank.com/challenges/2d-array/problem
#include <bits/stdc++.h>

using namespace std;

// Complete the array2D function below.
int array2D(vector<vector<int>> arr) {
    int res=-64,sum;
    for(int i=0;i<4;i++){
        for(int j=0;j<4;j++){
            sum= arr[i][j]+arr[i+1][j+1]+arr[i+2][j+2]+arr[i][j+1]+arr[i][j+2]+arr[i+2][j]+arr[i+2][j+1];
            if(sum>res){
                res=sum;
            } 
        }
    }
    return res;

}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    vector<vector<int>> arr(6);
    for (int i = 0; i < 6; i++) {
        arr[i].resize(6);

        for (int j = 0; j < 6; j++) {
            cin >> arr[i][j];
        }

        cin.ignore(numeric_limits<streamsize>::max(), '\n');
    }

    int result = array2D(arr);

    fout << result << "\n";

    fout.close();

    return 0;
}

