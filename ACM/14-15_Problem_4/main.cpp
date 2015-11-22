/* 
 * File:   main.cpp
 * Author: admin
 *
 * Created on September 25, 2015, 10:51 AM
 */

#include <iostream>
#include <string>
#include <fstream>
#include <map>
#include <iterator>
using namespace std;

struct score {
    int size;
    int **array;
    map<int,int> m;
    bool agree;
    int r;
};
int main(int argc, char** argv) {
    fstream inFile("text.txt",ios::in);
    score *a=new score[2];
    int temp=0;
//    while(inFile>>temp) {
//        cout<<temp<<endl;
//    }

    //put data from file to structure
    int s=0;//size
    map<int,int>::iterator it;
    for(int i=0;i<2;i++) { //i---two lists of integer scores
        inFile>>s;
        a[i].size=s;
        a[i].array=new int*[2];
        for(int j=0;j<2;j++) { //2 player
            a[i].array[j]=new int[a[i].size];
            for(int k=0;k<a[i].size;k++) { //score with order
                inFile>>temp;
                a[i].array[j][k]=temp;
            }
        }
    }
    

    
//    //output the input
//    for(int i=0;i<2;i++) {
//        cout<<"Size: "<<a[i].size<<endl;
//        for(int j=0;j<2;j++) {
//            for(int k=0;k<a[i].size;k++) {
//                cout<<a[i].array[j][k]<<" ";
//            }
//            cout<<endl;
//        }
//        cout<<endl<<endl;
//    }
    
    //put 2-d array into map
    for(int i=0;i<2;i++) {
        for(int j=0;j<a[i].size;j++) {
            a[i].m.insert(pair<int,int>(a[i].array[0][j],a[i].array[1][j]));
        }
    }
    int count=0;
    
    //put them back to 2-d array
    for(int i=0;i<2;i++) {
        count=0;
        for(it=a[i].m.begin();it!=a[i].m.end();++it) {
            a[i].array[0][count]=it->first;
            a[i].array[1][count++]=it->second;
//            cout<<it->first<<"  "<<it->second<<endl;
        }
//        cout<<endl;
    }
    temp=0;
    
    //determine
    for(int i;i<2;i++) {
        a[i].agree=true;
        a[i].r=0;
        for(int j=a[i].size-1;j>0;j--) {
            if((a[i].array[0][j]>a[i].array[0][j-1])&&(a[i].array[1][j]>a[i].array[1][j-1])) {
                a[i].agree=true;
            } else {
                a[i].agree=false;
                temp=a[i].array[1][j-1];
                for(int k=a[i].size-1;k>0;k--) {
                    a[i].r++;
                    if(a[i].array[1][k]<temp) break; 
                }
                break;
            }
        }
    }
    
    for(int i=0;i<2;i++) {
        if(a[i].agree) {
            cout<<"agree"<<endl;
        } else {
            cout<<a[i].r<<endl;
        }
    }
    
    
    
//    inFile>>temp;
//    cout<<temp<<endl<<endl;
//    while(inFile>>temp)
//        cout<<temp<<endl;
    for(int i=0;i<2;i++) {
        for(int j=0;j<2;j++) {
            delete []a[i].array[j];
        }
        delete []a[i].array;
    }
    
    delete []a;
    
    inFile.close();
    return 0;
}

