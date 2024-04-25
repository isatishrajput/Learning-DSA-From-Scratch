#include <iostream>
using namespace std;

int main(){
    int n, i = 2, sum =0 ;
    cout<<"To find the sum of 1st n digit number enter the value of n ";
    cin>>n;
    while(i<=n){
        cout<<"value of i is "<<i<<" value of sum is "<<sum<<endl;
        sum += i;
        i +=2;
    }

    cout<<"Total of 1'st n digit numbers are : "<<sum<<endl;
}