/* 
 * File:   main.cpp
 * Author: Benjamin
 * Created on August 8, 2015, 4:46 PM
 */

#include <iostream>
using namespace std;

int main(int argc, char** argv) {
    const float PI=3.1415926;
    int c,year;
    float x,y,area;
    cin>>c;
    for(int i=0;i<c;i++) {
        cin>>x>>y;
        area=PI*(x*x+y*y)/2;
        year=static_cast<int>(area/50)+1;
        cout<<"Property "<<(i+1)<<": This property will begin eroding in year "<<year<<"."<<endl;
    }
    cout<<"END OF OUTPUT."<<endl;
    return 0;
}

