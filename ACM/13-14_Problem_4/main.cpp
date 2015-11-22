/* 
 * File:   main.cpp
 * Author: admin
 *
 * Created on August 3, 2015, 4:01 PM
 */

#include <iostream>

using namespace std;

int main(int argc, char** argv) {
    
    int n;
    int c=0;
    cin>>n;
    while(n!=1) {
        if(n%2==0) {
            n/=2;
            c++;
        } else {
            n=3*n+1;
            c++;
        }
        
    }
    cout<<c<<endl;
    return 0;
}

