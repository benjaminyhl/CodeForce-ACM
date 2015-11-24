/* 
 * File:   main.cpp
 * Author: admin
 *
 * Created on November 20, 2015, 9:33 PM
 */

#include <iostream>
#include <set>
#include <iterator>
using namespace std;


int main(int argc, char** argv) {    
    set< pair<long long,long long> > s;
    set< pair<long long,long long> >::iterator it1;
    set< pair<long long,long long> >::iterator it2;
    int n;
    long long a,b;
    while(!cin.fail()) {
        cin>>n;
        if(!cin.fail()) {
            for(int i=0;i<n;i++) {
                cin>>a>>b;
                s.insert(make_pair(a,b));
            }
        }
    }
//    s.insert(make_pair(4,8));
//    s.insert(make_pair(1,5));
//    s.insert(make_pair(4,7));
//    s.insert(make_pair(2,5));
//    s.insert(make_pair(1,3));  
//    s.insert(make_pair(6,8));
    
//    for(it1=s.begin();it1!=s.end();++it1) {
//        cout<<(*it1).first<<"  "<<(*it1).second<<endl;
//    }
//    cout<<endl<<endl;

    it1=s.begin();
    while(it1!=s.end()) {
        it2=it1;
        ++it2;
        while(it2!=s.end()) {
            if((*it1).second>=(*it2).first) {
                s.erase(it2++);
            } else {
                ++it2;
            }
            
        }
        ++it1;
        
    }
//    for(it1=s.begin();it1!=s.end();++it1) {
//        cout<<(*it1).first<<"  "<<(*it1).second<<endl;
//    }

    cout<<s.size()<<endl;
    
    
    return 0;
}

