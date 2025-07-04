#include<iostream>
using namespace std;
void update (int array[],int n){
    cout << "Inside the function" << endl;
    array [0]=120;
    for(int i = 0 ; i<5;i++){
        cout << array[i] << " ";
    }cout << endl;
    cout << "Inside the main function" << endl;
}
int main(){
    int arr[3]={1,2,3};
    update(arr,3);
    for(int i = 0 ;i<5 ; i++){
        cout << arr[i] << " ";

    }cout << endl;
}