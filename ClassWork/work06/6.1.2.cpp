#include <iostream>

using namespace std;

int main()
{
    int n;
    cin >> n;
    int *array = new int[n]();
    for (int i = 0; i < n; i++){
        array[i] = i + 1;
    }
    int currentPeople = n;
    int currentNum = 1;
    while(currentPeople > 1){
        for (int i = 0; i < n; i++){
            if(array[i] == 0){
                continue;
            } else{
                if (currentNum != 3){
                    currentNum++;
                } else {
                    currentNum = 1;
                    array[i] = 0;
                    currentPeople--;
                }
            }
        }
    }

    for(int i = 0; i < n; i++){
        if (array[i] != 0){
            cout << array[i];
        }
    }

    delete []array;

    return 0;
}


/*

约瑟夫环问题

任务描述
n个人围成一圈，按顺序从1到n编号。从第一个人开始报数1、2、3，报到3的人退出圈子，下一个人从1开始重新报数，报到3的人退出圈子。如此进行下去，直到留下最后一个人。当给定一个正整数n时，请问留下来的人的编号是多少？

编程要求
补充代码，输入一个正整数n，输出留下来的人的编号

测试说明

测试输入：4
预期输出：
1

*/