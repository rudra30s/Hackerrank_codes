#include <iostream>
using namespace std ;

long sum_of_arrays(int arr[],int a){
    long sum =0;
    int i;
    for(i=0;i<a;i++){
       sum+=arr[i];
        
    }
    return sum;
}




int main (){
    int n;
   cin >> n;
   int arr[n];
   for(int i = 0;i<n;i++){
    cin >> arr[i];
   }
   cout << sum_of_arrays(arr,n);
    return 0;
}
