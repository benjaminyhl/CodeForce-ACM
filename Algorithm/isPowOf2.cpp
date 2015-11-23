/* 
 * File:   main.cpp
 * Author: admin
 *
 * Created on November 21, 2015, 7:18 PM
 */

#include <iostream>
using namespace std;

//#1
int isPowOfTwo1(unsigned int x) {
    
    //x&1==true  when x=odd
    //x&1==false when x=even
    
    while((x>1)&&((x&1)==0)) { //x is positive && x is even
        x>>=1;   //shifting it right one bit (means Dividing a binary integer by 2)
    }
    return (x==1); 
}

//#2
int isPowOfTwo2(unsigned int x) {
    //x is positive     
    //when x=power of 2, such as 1000 base 2 (8)
    //          x-1 --->         0111
    //           if  x&(x-1)==0 means that x==power of 2
    return ((x!=0)&& !(x&(x-1)));
}

//#3
int isPowOfTwo3(unsigned int x) {
    //when x=power of 2, such as 1000 base 2 (8)
    //  ~x= 0111    ~x+1=1000 
    // if x&(~x+1)==x x=power of 2
    return ((x!=0)&& ((x&(~x+1))==x));
}

int main(int argc, char** argv) {
    int n=1000;
    for(int i=0;i<n;i++) {
        if(isPowOfTwo2(i)) {
            cout<<i<<" is Power of 2"<<endl;
        } else {
            cout<<i<<" is not Power of 2"<<endl;
        }
    }
    return 0;
}

