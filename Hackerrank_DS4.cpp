//https://www.hackerrank.com/challenges/array-left-rotation/problem
//The commented part also works. The commented ones use lesser space more time
//while the other one uses more space less time
#include <bits/stdc++.h>

using namespace std;

// void left_rotate(vector<int> &rotated,int n){
//     int tmp=rotated[0];
//     for(int i=1;i<rotated.size();i++){

//         rotated[i-1]=rotated[i];
//         if(i==n-1){
//             rotated[n-1]=tmp;
//         }
//     }
// }
vector<int> getlocations(int n, int d){
    vector<int> locs;
    int tmp;
    for(int i=0;i<n;i++){
        tmp=(i + (n-d)) % n;
        locs.push_back(tmp);
    }
    return locs;
}
int main(){
    int n,d,k,tmp;
    cin>>n>>d;
    vector<int> a(n),loc,b(n);
    for(int i=0;i<n;i++){
        // cin>>k;
        // a.push_back(k);
        cin>>a[i];
    }
    b=a;
    loc=getlocations(n,d);
    // for(int i=0;i<d;i++){
    //     left_rotate(a,n);
    // }
    for(int i=0;i<n;i++){
        k=loc[i];
        a[k]=b[i];
    }
    for(int i=0;i<a.size();i++)
        cout<<a[i]<<" ";
}
