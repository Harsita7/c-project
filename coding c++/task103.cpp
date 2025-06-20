// we can not declare one variable in same loop this program will not run
/*#include <iostream>
using namespace std;
int main(){
    int a = 3;
    cout << a << endl;
    if (true){
        int b = 3;
        cout << b << endl;  
    }
    int b = 1;
    cout << b << endl;
    int b = 2;
    cout << b << endl;
}*/
 //using for loop
 #include<iostream>
 using namespace std;
 int main(){
    int a = 3;
    cout << a << endl;
    if(true){
        int b = 1;
        cout << b << endl;

    }
    int b = 3;
    cout << b << endl;
    int i = 8;
    for(int i = 1;i <8;i++){
        cout << "Hii" << endl;
    }
 }
