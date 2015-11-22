/*14/15 Problem#1*/
#include <iostream>
#include <vector>
#include <fstream>
#include <cstdlib>
using namespace std;

struct SpreadSheet {
    string name;
    int n;
    string old;
    vector<string> data;
};


int main(int argc, char** argv) {
    SpreadSheet s;
    vector<string> vec;
    vector<SpreadSheet> classVec;
    fstream inFile("table.txt", ios::in);
    SpreadSheet *res;
//    while(inFile.good()) {
//        string substr;
//        getline(inFile, substr, ',' );
//        vec.push_back(substr);
//    }
//    while (inFile>>ch) {
//        temp+=ch;
//        
//        if(inFile.peek() == ',') {
//            inFile.ignore();
//            vec.push_back(temp);
//            temp="";
//            
//        } 
//        else if(inFile.peek() == '\n') break;
            
//    }
    string str;
    while(inFile.good()) {
        getline(inFile,str);
        vec.push_back(str);
    }
    str="";
//    cout<<"First string size: "<<vec[0].size()<<endl;
    for(int i=0;i<vec[0].size();i++) {
        if(vec[0].at(i)==',') {
            s.name=str;
            classVec.push_back(s);
//            cout<<str<<endl;
            str="";
        } else {
            str+=vec[0].at(i);
            if(i==vec[0].size()-1) {
                s.name=str;
                classVec.push_back(s);
//              cout<<str<<endl;
                str="";
            }
        }
    }
    
//    cout<<"Size: "<<classVec.size()<<endl;
//    cout<<vec[1]<<endl;
    int count=0;
    int temp=-1;
    int max=0;
    for(int i=0;i<vec[1].size();i++) {
        if(vec[1].at(i)==',') {
            temp=atoi(str.c_str());
            classVec[count++].n=temp;
            if(temp>max) max=temp;
//            cout<<temp<<endl;
            str="";
        } else {
            str+=vec[1].at(i);
            if(i==vec[1].size()-1) {
                temp=atoi(str.c_str());
                classVec[count++].n=temp;
                if(temp>max) max=temp;
//                cout<<temp<<endl;
                str="";
            }
        }
    }
//    cout<<"Max:"<<max<<endl;
    res=new SpreadSheet[max];
//    cout<<"count: "<<count<<endl;
//    cout<<vec.size()<<endl<<endl;
//    for(int i=0;i<vec.size();i++) {
//        cout<<vec[i]<<endl;
//    }
//    cout<<"vec.size(): "<<vec.size()<<endl;
    for(int i=3;i<vec.size();i++) {
        count=0;
        str="";
        for(int j=0;j<vec[i].size();j++) {
            if(vec[i].at(j)==',') {
                classVec[count++].data.push_back(str);
//                cout<<str<<endl;
                str="";
            } else {
                str+=vec[i].at(j);
                if(j==vec[i].size()-1) {
//                    cout<<str<<endl;
                    classVec[count++].data.push_back(str);
                    str="";
                }
            }
            
        }
//        cout<<endl;
    }
    for(int i=0;i<classVec.size();i++) {
        if(classVec[i].n!=0) {
            res[classVec[i].n-1]=classVec[i];
        }  
    }
    
    
    
    for(int i=0;i<max;i++) {
        
        cout<<res[i].name;
        if(i!=max-1) cout<<",";
    }
    cout<<endl;
    for(int i=0;i<res[0].data.size();i++) {
        for(int j=0;j<max;j++) {
            cout<<(res[j].data)[i];
            if(j!=max-1) cout<<",";
        }
        cout<<endl;
    }
    
    
    delete []res;
    inFile.close();
    return 0;
}

