/* 
 * File:   main.cpp
 * Author: Benjamin
 * Created on August 6, 2015, 8:06 PM
 */

#include <iostream>
using namespace std;

int main(int argc, char** argv) {
    int p,e,i,d=-1;
    int day;
    int c=1;//count
    do {
        day=0;
        cin>>p>>e>>i>>d;
        if(p!=-1&&e!=-1&&i!=-1&&d!=-1) {
            if(p<0||p>365||e<0||e>365||i<0||i>365||d<0||d>365) continue;
            else {
                for(day=d;;day++) {
                    if((day-p)%23==0&&(day-e)%28==0&&(day-i)%33==0&&day>d) break;
                }
                cout<<"Case "<<(c++)<<": the next triple peak occurs in "<<(day-d)<<" days."<<endl;
            }
        }
    } while(p!=-1&&e!=-1&&i!=-1&&d!=-1);
    
    
    
    return 0;
}

