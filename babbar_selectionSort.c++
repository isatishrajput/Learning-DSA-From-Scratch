#include<iostream>
using namespace std;

int main(){
    int arr[] = {64, 25, 12, 35, 10};
    int start = INT32_MIN;

    for(int i = 0; i< 4;i++){
        for(int j = i+1; j<5;j++){
            if(arr[i] >= arr[j]){
                cout<<"arr[i] => "<<arr[i]<<" arr[j] => "<<arr[j]<<endl;
                swap(arr[i], arr[j]);
            }
        }
    }

    for(int i=0; i< 5;i++){
        cout<<arr[i]<<" ";
    }
}