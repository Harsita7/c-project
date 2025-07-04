#include<iostream>
using namespace std;
int main(){
    // Declare
    int number[20];
    // Accessing an array
    cout << "value of 14 index" << number[14] << endl;
    //cout << "value of 20 index" << number[20] << endl;
    //initialising an array

    int second [3]={5,7,11};
    cout << "value at 2 index" << second [2] << endl;
    int third[15]={2,7};
    int n= 15;
    cout << "Printing an array"<< endl;
    //print the array
    for(int i=0;i<5;i++){
        cout << third[i] ;
        //initialising all location with 0
        int fourth[10]={0};
        n=10;
        cout<<"printing an array" << endl;
        //print an array
        for(int i = 0;i<5;i++){
            cout << fourth[i] << " ";
        }
        // initialising all location with 1
        int fifth[10] = {1};
        n=10;
        cout << "printing an array " << endl;
        //print an array
        for(int i = 0;i<5;i++){
            cout << fifth[i] << " ";
        }
    cout <<"Everything is fine" << endl << endl;
}
}