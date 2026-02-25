#include<iostream>
#include<iomanip>
using namespace std;

void input(int arr[], int n){
    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }
}

void output(int arr[], int n){
    int countPos = 0;
    int countNeg = 0;
    int countZero = 0;

    for(int i = 0; i < n; i++){
        if(arr[i] > 0)
            countPos++;
        else if(arr[i] < 0)
            countNeg++;
        else
            countZero++;
    }
    cout << fixed << setprecision(6);
    cout << (float)countPos/n << endl;
    cout << (float)countNeg/n << endl;
    cout << (float)countZero/n << endl;
}

int main(){
    int n;
    cin >> n;

    int arr[n];   

    input(arr, n);     
    output(arr, n);    

    return 0;
}