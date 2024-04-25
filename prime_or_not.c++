#include <iostream>
using namespace std;

int main(){
    int n,i =2, flag = 0;
    cout<<"Enter the value of n ";
    cin>>n;

    while(i<n){
        if(n%i==0){
            flag = 1;
            break;
        }
        i++;
    }

    if(flag == 1){
        cout<<"Given number is not prime"<<endl;
    }else{
        cout<<"Given number is prime"<<endl;
    }
}