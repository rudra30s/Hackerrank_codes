#include<iostream>
using namespace std;
void input(int mat[100][100],int n){
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cin>>mat[i][j];
        }
    }
};
void output(int mat[100][100],int n){
    int sum1 = 0;
    int sum2 = 0;
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
           if(i == j){
           sum1+=mat[i][j];
          
          sum2+=mat[i][n-i-1]
           }
          
        }
    }
    cout<<abs(sum1-sum2);

};

int main(){
    int n;
    cin>>n;
    int mat[100][100];
    input(mat , n);
    output(mat , n);


    return 0;

}