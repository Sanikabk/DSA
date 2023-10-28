#include <iostream>
using namespace std;

 int main(){
    int arr[6]={1,2,3,4,5,6};
    int s = 0;
    int e = 5;
    while(s<e){
        swap(arr[s], arr[e]);
        s++;
        e--;
    }
    for(int e: arr){
    cout<<e<<" ";
    }
    return 0;  
}