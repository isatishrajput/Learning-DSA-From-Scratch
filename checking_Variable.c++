#include <iostream>
using namespace std;

int main(){
    char ch;
    cout<<"Enter the value of ch : ";
    cin>>ch;

    if(ch >= 'a' && ch <= 'z')
                    {
        cout<<"Given character is small alphabet "<<endl;
    }else if(ch >= 'A' &&  ch <= 'Z'){
        cout<<"Given character is Capital alphabet "<<endl;
    }else{
        cout<<"Given character is not an alphabet "<<endl;
    }
}