//using different variable like char,double,float and bool in place of int
#include<iostream>
using namespace std;
int main(){
    char ch[5]={'a','b','c','r','p'};
    cout << ch[3] << endl;
    //printArray[ch];
    // u can not print using above function but why?? cause the function "printArray" print only for int
    cout << "printing an array" << endl;
    for(int i = 0;i<5;i++){
        cout << ch[i] << " ";
    }
    cout << "Printing DONE" << endl;
    double firstDouble[5];
    float firstFloat[6];
    bool firstBool[9];

}