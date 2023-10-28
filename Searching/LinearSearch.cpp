#include <iostream>
using namespace std;

int search(int key, int arr[], int length){
         for(int i=0; i<length; i++){
        if(key == arr[i]){
            return i;
            }
        }
        return 0;
 }

 int main(){
    int arr[6]={1,2,3,4,5,6};
    int length = 6;
    int key=6;
    int ans = search(key, arr, length);
    cout<<ans<<endl;
    return 0;  
}