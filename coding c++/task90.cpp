#include<iostream>
using namespace std;
int main(){
    //Fibonacci series
    // first we fixed value of n that is 10
    int n = 10;
    // intialise first value of a and b that is 0 and 1
    int a = 0;
    int b = 1;
    cout << a << " " << b << endl;
    // using for loop for intialisation,condition and updation
    for(int i = 1;i<=n;i++){
        //In Fibonacci series formula for next number is a+b
       int Nextnum = a + b;
       // print next number
       cout << Nextnum << " ";
       // as to increase the process we need to initialise the value of a into b and b into next num
       a = b;
       b = Nextnum;


    }
}