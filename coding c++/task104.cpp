// but if I remove this i then it will look the i outside the block
 #include <iostream>
 using namespace std;
 int main(){
    int a = 3;
    cout << a << endl;
    if(true){
        int b = 1;
        cout << b << endl;
    }
    int b = 7;
    cout << b << endl;
    int i =8;
    for(;i<8;i++){
        cout << "Hii" << endl;
    }
 }
