/*#include<iostream>
using namespace std;
int main(){
    int a = 3;
    cout << a << endl;
    if(true){
        int b = 3;
        cout << b << endl;
    }
    cout << b << endl;
}*/
//we can not run this program because whatever variable we declare inside if loop we can not print outside if loop so we need to declare variable outside the loop
/*# include <iostream>
using namespace std;
int masin(){
    int a = 3;
    cout << a << endl;
    if(true){
int b = 5;
cout << b << endl;
    }
    int b = 1;
    cout << b << endl;

}*/
// we can not run this program cause same variable can not declared outside if block if it is already under if block
#include <iostream>
using namespace std;
int main(){
    int a = 3;
    cout << a << endl;
    if(true){
        int b = 5;
        cout << b << endl;

    }
    int b= 1;
    cout << b<< endl;
}
