#include <iostream>
#include <cstring>

using namespace std;

int main()
{
    int n;      //输入字符串数量n
    cin >> n;
    cin.ignore();    //忽略换行符
    char **originalText;        //原始文本存储在originlaText中
    originalText = new char *[n];    //创建二维数组originalText存储原始文本
    for (int i = 0; i < n; i++){
        originalText[i] = new char [31]();
        cin.getline(originalText[i], 31);
    }

    //输入需要删除的字符x
    char x;
    cin >> x;

    //创建二维数组cutText储存删除指定字符后的文本
    char **cutText;
    cutText = new char *[n];
    for (int i = 0; i < n; i++){
        cutText[i] = new char [31]();
    }

    //将裁剪后的文本导入cutText中
    for (int i = 0; i < n; i++){
        int k = 0;
        for(int j = 0; originalText[i][j] != '\0'; j++){
            if(originalText[i][j] != x){
                cutText[i][k] = originalText[i][j];
                k++;
            }
        }
        cutText[i][k] = '\0';
    }

    //字符串排序
    char *temp;
    for (int i = 0; i < n; i++){
        for (int j = i + 1; j < n; j++){
            if (strcmp(cutText[i] , cutText[j]) < 0){
                temp = cutText[i];
                cutText[i] = cutText[j];
                cutText[j] = temp;
            }
        }
    }

    //输出文本
    for (int i = 0; i < n; i++){
        cout << cutText[i] << endl;
    }

    //释放内存
    for (int i = 0; i < n; i++){
        delete [] originalText [i];
        delete [] cutText [i];
    }
    delete [] originalText;
    delete [] cutText;

    return 0;
}


/*

任务描述
输入若干个字符串(每个字符串的长度不超过30个字符，字符串总数不超过30)，和一个英文字符ch。 要求删除每个字符串中的字符ch(区分大小写)，得到新的字符串，然后将新的字符串按照字典逆序排序后输出。

编程要求
用户依次输入字符串数量n，n个字符串和一个英文字符ch。删除每个字符串中的字符ch(区分大小写)，得到新的字符串，然后将新的字符串按照字典逆序排序后输出。

测试说明

测试输入：
3
abcddc
sxwcdez
ncvccvd
c

预期输出：
sxwdez
nvvd
abdd

最大值：91



*/