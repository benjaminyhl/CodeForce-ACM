/* 
 * File:   main.cpp
 * Author: admin
 *
 * Created on November 21, 2015, 10:45 AM
 */

#include <iostream>
using namespace std;


int main(int argc, char** argv) {
    int l;
    int a,b;
    while(!cin.fail()) {
        cin>>l>>a>>b;
        if(!cin.fail()) {
            cout<<static_cast<float>(l)/(a+b)*a<<endl;
        }
    }
    return 0;
}

