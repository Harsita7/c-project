// Linear search
#include<iostream>
using namespace std;
bool search(int arr[],int size,int key){
    for(int i =0 ; i<size;i++){
        if (arr [i]==key){
            return 1;
        }
    }
    return 0;
}
int main(){
    int arr[10]={5,7,-2,10,22,-2,0,5,2,1};
    // in these array if u want to find out any number you need to go one by one that is linearly
    int key;
    cin>>key;
    bool found = search(arr,10,key);
    if (found){
        cout << "key is present" << endl;
    }
    else {
        cout << "key is absent" << endl;
    }
}