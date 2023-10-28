#include <iostream>
using namespace std;

 int main(){
    int arr[6]={1,2,3,4,5,6};
    int length = 6;
    for(int i=5; i>=0; i--){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    return 0;  
}