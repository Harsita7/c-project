// Array using Functions 
// Find maximum and minimum numbers
#include<iostream>
#include<climits>
using namespace std;
int getmin(int num[],int n){
    int min = INT_MAX;
    for(int i = 0; i <n;i++){
        if(num[i]<min){
            min=num [i];
        }
    }
    return min;
}
int getmax(int num[],int n){
    int max = INT_MIN;
    for(int i=0;i<n;i++){
        if(num[i]>max){
            max = num[i];
        }
    }
    return max;
}

int main(){
    int size;
    cout << "Enter size";
    cin>>size;
    int num[100];
    for(int i=0;i<size;i++){
        cin>>num[i];
    }
    cout<< "Maximum value is" << getmax(num,size) << endl;
    cout<< "Minimum value is" << getmin(num,size) << endl;
    return 0;
}