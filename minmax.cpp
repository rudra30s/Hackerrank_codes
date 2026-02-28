#include<iostream>
using namespace std;

int main() {

    long long arr[5];   // use long long (important for large numbers)

    // Input: single line of 5 space-separated integers
    for(int i = 0; i < 5; i++){
        cin >> arr[i];
    }

    long long totalSum = 0;

    for(int i = 0; i < 5; i++){
        totalSum += arr[i];
    }

    long long minSum = totalSum - arr[0];
    long long maxSum = totalSum - arr[0];

    for(int i = 1; i < 5; i++){
        long long currentSum = totalSum - arr[i];

        if(currentSum > maxSum){
            maxSum = currentSum;
        }

        if(currentSum < minSum){
            minSum = currentSum;
        }
    }

    cout << minSum << " " << maxSum;

    return 0;
}