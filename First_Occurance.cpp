#include <iostream>
using namespace std;
int firstocc(int arr[], int n, int key){
    int s=0,e=n-1;
    int ans;
    int mid = s + (e-s)/2;
    while(s<=e){
        if(arr[mid]==key){
            ans = mid;
            e = mid-1;
        }
        else if(key > arr[mid]){
            s = mid+1;
        }
        else{
            e = mid-1;
        }
        mid = s + (e-s)/2;
    }
    return ans;
}
int main() {
 
    int arr[100] = {1,2,2,2,3,4,5,6,7};
    int ans = firstocc(arr,9,2);
    cout<<"The index of first occurance is "<<ans<< " and the number is "<<arr[ans];

    return 0;
}