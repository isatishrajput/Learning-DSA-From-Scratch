#include <iostream>
using namespace std;

int main(){
    int i = 1,j = 1, k = 1,n, infinite_counter = 1;

    cout<<"Enter the pattern row range ";
    cin>>n;

// * * * * * *
// * * * * * *
// * * * * * *
// * * * * * *
// * * * * * *
// * * * * * *
    // while(i<=n){
    //     j = 1;
    //     while(j<=n){
    //         cout<<"* ";
    //         j++;
    //     }
    //     cout<<endl;
    //     i++;
    // }

// *
// * *
// * * *
// * * * *
// * * * * *
// * * * * * *
        // while(i<=n){
        //     j = 1;
        //     while(j<=n){
        //         cout<<i<<" ";
        //         j++;
        //     }
        //     cout<<endl;
        //     i++;
        // }

// 1 1 1
// 2 2 2
// 3 3 3
            // while(i<=n){
            //         j = 1;
            //         while(j<=n){
            //             cout<<i<<" ";
            //             j++;
            //         }
            //         cout<<endl;
            //         i++;
            //     }

// 1 2 3 4 
// 1 2 3 4 
// 1 2 3 4 
// 1 2 3 4 
//             while(i<=n){
//                     j = 1;
//                     while(j<=n){
//                         cout<<j<<" ";
//                         j++;
//                     }
//                     cout<<endl;
//                     i++;
//                 }

// 4 3 2 1 
// 4 3 2 1 
// 4 3 2 1 
// 4 3 2 1
//             while(i<=n){
//                     j = n;
//                     while(j>0){
//                         cout<<j<<" ";
//                         j--;
//                     }
//                     cout<<endl;
//                     i++;
//                 }

// 1 2 3 
// 4 5 6 
// 7 8 9 
//             while(i<=n){
//                     j = 0;
//                     while(j<n){
//                         cout<<infinite_counter<<" ";
//                         j++;
//                         infinite_counter++;
//                     }
//                     cout<<endl;
//                     i++;
//                 }

// * 
// * * 
// * * * 
// * * * * 
// * * * * * 
//             while(i<=n){
//                     j = 0;
//                     while(j<i){
//                         cout<<"* ";
//                         j++;
//                     }
//                     cout<<endl;
//                     i++;
//                 }

// 1 
// 2 2 
// 3 3 3 
// 4 4 4 4
//             while(i<=n){
//                     j = 1;
//                     while(j<=i){
//                         cout<<i<<" ";
//                         j++;
//                     }
//                     cout<<endl;
//                     i++;
//                 }

// 1 
// 2 3 
// 4 5 6 
// 7 8 9 10 
//             while(i<=n){
//                     j = 1;
//                     while(j<=i){
//                         cout<<infinite_counter<<" ";
//                         infinite_counter++;
//                         j++;
//                     }
//                     cout<<endl;
//                     i++;
//                 }

// 1
// 2 3
// 3 4 5
// 4 5 6 7
//             while(i<=n){
//                     j = 0;
//                     while(j<i){
//                         cout<<i+j<<" ";
//                         j++;
//                     }
//                     cout<<endl;
//                     i++;
//                 }

// 1
// 2 1
// 3 2 1
// 4 3 2 1
//             while(i<=n){
//                     j = 0;
//                     while(j<i){
//                         cout<<i-j<<" ";
//                         j++;
//                     }
//                     cout<<endl;
//                     i++;
//                 }

// A A A A
// B B B B
// C C C C
// D D D D
//             while(i<=n){
//                     j = 1;
//                     char alphabet = 65 + i - 1;
//                     while(j<=n){
//                         cout<<alphabet<<" ";
//                         j++;
//                     }
//                     cout<<endl;
//                     i++;
//                 }

// A B C
// A B C
// A B C
//             while(i<=n){
//                     j = 1;
//                     while(j<=n){
//                     char alphabet = 65 + j - 1;
//                     cout<<alphabet<<" ";
//                         j++;
//                     }
//                     cout<<endl;
//                     i++;
//                 }

// A B C
// D E F
// G H I
//             while(i<=n){
//                     j = 1;
//                     while(j<=n){
//                     char alphabet = 65 + infinite_counter - 1;
//                     cout<<alphabet<<" ";
//                         infinite_counter++;
//                         j++;
//                     }
//                     cout<<endl;
//                     i++;
//                 }

// A B C 
// B C D 
// C D E 
            // while(i<=n){
            //         j = 0;
            //         char alphabet = 65 + i -1;
            //         while(j<n){
            //         cout<<alphabet<<" ";
            //         alphabet++;
            //             j++;
            //         }
            //         cout<<endl;
            //         i++;
            //     }

// A 
// B B 
// C C C 
//             while(i<=n){
//                     j = 0;
//                     char alphabet = 65 + i -1 ;
//                     while(j<i){
//                     cout<<alphabet<<" ";
//                         j++;
//                     }
//                     cout<<endl;
//                     i++;
//                 }

// A 
// B C 
// D E F 
// G H I J 
// K L M N O 
//             while(i<=n){
//                     j = 0;
//                     while(j<i){
//                     char alphabet = 65 + infinite_counter  -1 ;
//                     cout<<alphabet<<" ";
//                     infinite_counter++;
//                         j++;
//                     }
//                     cout<<endl;
//                     i++;
//                 }

// A
// B C
// C D E
// D E F G
//             while(i<=n){
//                     j = 0;
//                     while(j<i){
//                     char alphabet = 65 + i + j -1 ;
//                     cout<<alphabet<<" ";
//                         j++;
//                     }
//                     cout<<endl;
//                     i++;
//                 }

// D
// C D
// B C D
// A B C D
//             while(i<=n){
//                     j = 0;
//                     char alphabet = 65 + n -i;
//                     while(j<i){
//                     cout<<alphabet<<" ";
//                     alphabet++;
//                     j++;
//                     }
//                     cout<<endl;
//                     i++;
//                 }

//   *
//  **
// ***
//             while(i<=n){
//                 k = n- i;
//                 while(k){
//                     cout<<" ";
//                     k--;
//                 }
//                 j = 0;              
//                 while(j<i){
//                     cout<<"*";
//                     j++;
//                 }
//                 cout<<endl;
//                 i++;
//             }

// * * * *
// * * *
// * *
// *
//             while(i<=n){
//                 j = n- i + 1;
//                 while(j){
//                     cout<<"* ";
//                     j--;
//                 }
//                 cout<<endl;
//                 i++;
//             }

// ****
//  ***
//   **
//    *
//             while(i<=n){
//                 k = i -1;
//                 while(k){
//                     cout<<" ";
//                     k--;
//                 }
//                 j = n- i + 1;
//                 while(j){
//                     cout<<"*";
//                     j--;
//                 } 
//                 cout<<endl;
//                 i++;
//             }

// 1111
//  222
//   33
//    4
//             while(i<=n){
//                 k = i -1;
//                 while(k){
//                     cout<<" ";
//                     k--;
//                 }
//                 j = n- i + 1;
//                 while(j){
//                     cout<<i;
//                     j--;
//                 } 
//                 cout<<endl;
//                 i++;
//             }

//    1
//   22
//  333
// 4444
//             while(i<=n){
//                 k = n - i;
//                 while(k){
//                     cout<<" ";
//                     k--;
//                 }
//                 j = i;
//                 while(j){
//                     cout<<i;
//                     j--;
//                 } 
//                 cout<<endl;
//                 i++;
//             }

// 1234
//  234
//   34
//    4
//             while(i<=n){
//                 k = i -1;
//                 while(k){
//                     cout<<" ";
//                     k--;
//                 }
//                 j = n- i + 1;
//                 infinite_counter = i;
//                 while(j){
//                     cout<<infinite_counter;
//                     infinite_counter++;
//                     j--;
//                 } 
//                 cout<<endl;
//                 i++;
//             }

//    1
//   23
//  456
// 78910
//             while(i<=n){
//                 k = n - i;
//                 while(k){
//                     cout<<" ";
//                     k--;
//                 }
//                 j = i;
//                 while(j){
//                     cout<<infinite_counter;
//                     infinite_counter++;
//                     j--;
//                 } 
//                 cout<<endl;
//                 i++;
//             }

//       1 
//     1 2 1 
//   1 2 3 2 1 
// 1 2 3 4 3 2 1 
            // while(i<=n){
            //                  // 1st triangle of space
            //     k = n - i;
            //     while(k){
            //         cout<<"  ";
            //         k--;
            //     }
            //                  // 2nd triangle
            //     j = 0;
            //     while(j<i){
            //         cout<<j+1<<" ";
            //         j++;
            //     }
            //                  // 3rd triangle
            //     int count = i-1;
            //     while(count){
            //         cout<<count<<" ";
            //         count--;
            //     } 
            //     cout<<endl;
            //     i++;
            // }

// 1 2 3 4 5 5 4 3 2 1
// 1 2 3 4 * * 4 3 2 1
// 1 2 3 * * * * 3 2 1
// 1 2 * * * * * * 2 1
// 1 * * * * * * * * 1
            // while(i<=n){
            //     j = 1;
            //     int count = n- i +1;
                                // 1st triangle of numbers
            //     while(count){
            //         cout<<j<<" ";
            //         j++;
            //         count--;
            //     }
                                //2nd triangle of *
            //     count = i-1;
            //     while(count){
            //         cout<<"* * ";
            //         count--;
            //     }
                                //3rd triangle of number
            //     count = n - i +1;
            //     while(count){
            //         cout<<count<<" ";
            //         count--;
            //     }
            //     cout<<endl;
            //     i++;
            // }

}
