/* 
 * File:   main.cpp
 * Author: admin
 *
 * Created on November 21, 2015, 8:16 PM
 */


//After making bad dives into swimming pools, Wilbur wants to build a swimming pool in the shape of a rectangle in his backyard. He has set up coordinate axes, and he wants the sides of the rectangle to be parallel to them. Of course, the area of the rectangle must be positive. Wilbur had all four vertices of the planned pool written on a paper, until his friend came along and erased some of the vertices.
//
//Now Wilbur is wondering, if the remaining n vertices of the initial rectangle give enough information to restore the area of the planned swimming pool.
//
//Input
//The first line of the input contains a single integer n (1 ≤ n ≤ 4) — the number of vertices that were not erased by Wilbur's friend.
//
//Each of the following n lines contains two integers xi and yi ( - 1000 ≤ xi, yi ≤ 1000) —the coordinates of the i-th vertex that remains. Vertices are given in an arbitrary order.
//
//It's guaranteed that these points are distinct vertices of some rectangle, that has positive area and which sides are parallel to the coordinate axes.
//
//Output
//Print the area of the initial rectangle if it could be uniquely determined by the points remaining. Otherwise, print  - 1.
//
//Sample test(s)
//input
//2
//0 0
//1 1
//output
//1
//input
//1
//1 1
//output
//-1
//Note
//In the first sample, two opposite corners of the initial rectangle are given, and that gives enough information to say that the rectangle is actually a unit square.
//
//In the second sample there is only one vertex left and this is definitely not enough to uniquely define the area.

#include <iostream>
using namespace std;


int main(int argc, char** argv) {
    int n;
    int a,b;
    int xMax,yMax,xMin,yMin;
    while(!cin.fail()) {
        cin>>n;
        if(!cin.fail()) {
            cin>>a>>b;
            xMax=a;
            xMin=a;
            yMax=b;
            yMin=b;
            if(n==1) {
                cout<<(-1)<<endl;
            } else {
                for(int i=0;i<n-1;i++) {
                    cin>>a>>b;
                    if(a>xMax) xMax=a;
                    if(a<xMin) xMin=a;
                    if(b>yMax) yMax=b;
                    if(b<yMin) yMin=b;
                }
                if(xMax==xMin||yMax==yMin) {
                    cout<<(-1)<<endl;
                } else {
                    cout<<(xMax-xMin)*(yMax-yMin)<<endl;
                }
            }
        }
    }
    return 0;
}

