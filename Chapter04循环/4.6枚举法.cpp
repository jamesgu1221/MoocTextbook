#include <iostream>

using namespace std;

//eg01找素数(1~100)
    // int main(){
    //     for (int i = 2; i<=100; i++){
    //         bool flag = true;          //标记是否是素数
    //         for (int j=2; i<=i/2; j++){
    //             if(i%j == 0){
    //                 flag = false;
    //                 break;
    //             }
    //         }
    //         if (flag) cout << i << endl;

    //     }

    //     return 0;
    // }

//eg02 四大湖问题
    /*
    上地理课时，四个学生回答我国四大湖的大小时分别说：
        甲：洞庭最大，洪泽最小，鄱阳第三；
        乙：洪泽最大，洞庭最小，鄱阳第二，太湖第三；
        丙：洪泽最小，洞庭第三；
        丁：鄱阳最大，太湖最小，洪泽第二，洞庭第三。
    对于每个湖的大小，每个人仅答对一个，设计一程序让计算机通过这些信息去判别四个湖的大小。
    */
//    int main(){
//    int dt, hz, py, th;   //假设最大湖=1，最小湖=4；
//    bool flag = false;    //判断是否已经找到答案，找到后就中止

//    for (dt=1; dt<=4; ++dt){
//         for (hz=1; hz<=4; ++hz){
//             if (dt == hz) continue;
//             for (py=1; py<=4; py++){
//                 if(py==dt || py==hz) continue;
//                 th = 10 - dt - hz - py;
//                 if (
//                     ((dt==1) + (hz==4) + (py==3)) == 1
//                     &&((hz==1) + (dt==4) + (py==2) + (th==3)) == 1
//                     &&((hz==4) + (dt==3)) == 1
//                     &&((py==1) + (th==4) + (hz==2) + (dt==3)) == 1
//                 ) cout << dt << hz << py << th;

//             }
//         }
//     }
//    return 0;
//    }





