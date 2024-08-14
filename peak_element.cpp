#include <iostream>
using namespace std;
int peak(int arr[], int n){
    int s=0, e = n-1;
    int mid = s + (e-s)/2;
    while(s<e){
        if(arr[mid]<arr[mid+1]){
            s = mid+1;
        }
        else{
            e = mid;
        }
        mid = s + (e-s)/2;
    }
    return s;
}
int main(){
    int arr[6] = {1,2,3,7,6,5};
    int ans = peak(arr,6);
    cout << "The highest number index in the array "<< ans << " and the number is " << arr[ans];
    
    return 0;
}