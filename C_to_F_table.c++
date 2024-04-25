#include <iostream>
using namespace std;

int main(){
    int f = 0, leastC ,mostC ;
    cout<<"Enter the min value of degree C ";
    cin>>leastC;

    cout<<"Enter the max value of degree C ";
    cin>>mostC;

    while(leastC<=mostC){
        f = (1.8*leastC) + 32;
    cout<<"in the "<<f<<" Fahrenheit the value of degree c is "<<leastC<<endl;
        leastC++;
    }

}