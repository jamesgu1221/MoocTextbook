#include <iostream>
#include <iomanip>
#include <cmath>
#include <cstring>
#include <fstream>
using namespace std;


int main()
{  ifstream in; 
   int i;
   in.open("file.txt"); 
   if (!in) {cout << "open file error\n"; return 1;}
//    while (in >> i) cout << i << ' '; 
    in.seekg(3);
   while (!in.eof()) {
       in >> i;
       cout << i << ' ';
    //    cout << in.tellg() << ' '; 
   }   
   in.close();
   return 0; 
} 
