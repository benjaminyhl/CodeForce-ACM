/* Check whether it is
 * 1,3,6,10,15,21,28,36,45,55,...
 * 1=1;3=1+2;6=1+2+3
 */
bool isNum(int);
int main(int argc, char** argv) {
    int arr[] ={55,21,587,499500};
    for(int i=0;i<4;i++) {
        if(isNum(arr[i])) cout<<static_cast<int>(sqrt(2*arr[i]))<<endl;
        else cout<<"bad"<<endl;
    }
    return 0;
}
bool isNum(int x) {
    if(2*x==static_cast<int>(sqrt(2*x))*static_cast<int>((sqrt(2*x)+1))) return true;
    else return false;
}