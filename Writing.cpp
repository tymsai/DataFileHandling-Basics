#include<bits/stdc++.h>
#include<fstream>
using namespace std;
int main(){
    fstream sai;
    sai.open("abc.txt",ios::out);
    if(!sai){
        cout<<"not created";
    }
    else{
        cout<<"created success";
        sai<<"This text is created using c++ insertion operator";
        sai.close();
    }
    return 0;
}
