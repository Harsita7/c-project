//Array with function
#include<iostream>
using namespace std;
void printArray (int arr[],int size){
    cout << "Printing the array" << endl;
    //Print an Array
    for(int i = 0;i<size;i++){
        cout << arr[i] << " ";
    }
    cout << "Printing Done" << endl;
}
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
   printArray (third,15);
   int thirdsize=sizeof(third)/sizeof(int);
   cout << "size of third is" << thirdsize << endl;
   //so in above case where i have larger size array but i put less number of elements so i can not get those elements from this method that's why 
   //when i make a function i send the size with it
        //initialising all location with 0
        int fourth[10]={0};
        n=10;
        printArray (fourth,10);
        
        // initialising all location with 1
        int fifth[10] = {1};
         n=10;
        printArray (fifth,10);
        int fifthsize= sizeof(fifth)/ sizeof(int);
        cout<< "size of fifth is" << fifthsize << endl;
        
    cout <<"Everything is fine" << endl << endl;
}
