#include <iostream>
#include <iomanip>
#include <cmath>
#include <cstring>
#include <fstream>
using namespace std;





int main(){
//    ifstream in; 
//    int i;
//    in.open("file.txt"); 
//    if (!in) {cout << "open file error\n"; return 1;}
// //    while (in >> i) cout << i << ' '; 
//     in.seekg(3);
//    while (!in.eof()) {
//        in >> i;
//        cout << i << ' ';
//     //    cout << in.tellg() << ' '; 
//    }   
//    in.close();

            int a = 10;
            int *p = &a;      //一级指针
            int **q = &p;     //二级指针

            cout << "a = " << a << endl;
            cout << "*p = " << *p << endl;
            cout << "**q = " << **q << endl;

            cout << "Value of a: " << a  << " or "<< *p << " or "<< **q << endl;
            cout << "Address of a: " << &a << endl;
            cout << "Value of p: " << p  << " or " << *q << endl;
            cout << "Value of q: " << q << endl;

   return 0; 
} 
