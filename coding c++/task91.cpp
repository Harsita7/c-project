//find out it is prime number or not
#include<iostream>
using namespace std;
int main(){
    int n;
    cout << "Enter value of n" << endl;
    cin >> n;
    // if is is prime number
    bool isprime = 1;
    //in prime number every number is divisible by 1 and itself that is reason i starts from 2 and ends before itself
    for(int i=2;i<n;i++){
        //if n is divisible by 2 to n-1 numbers that is remainder is 0 it is not prime number
        if(n%i==0){
            //cout << "Not a prime number" << endl;
            isprime = 0;
            // break is used to break the loop
            break;

        }
    }
    if (isprime==0){
        cout << "Not a prime number";
    }
    else{
        cout << "prime number";
    }

}