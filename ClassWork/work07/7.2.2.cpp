#include <iostream>
#include <string>

using namespace std;

struct Student {
    string id;         // 学号
    string name;    // 姓名
    int score[3];  // 三门课程的分数
};


int main()
{
    Student students[1002];
    int student_count = 0;
    int n;

    while (true) {
        cin >> n;

        //输入0则退出
        if (n == 0) {
            break;
        }

        //添加学生信息（依次输入学号、三门课程的分数、姓名）
        if (n == 1) {
            Student tmp = Student();
            cin >> tmp.id >> tmp.score[0] >> tmp.score[1] >> tmp.score[2] >> tmp.name;
            bool flag = false;
            for (int i = 0; i < student_count; ++i) {
                if (students[i].id == tmp.id) {
                    students[i] = tmp;
                    flag = true;
                    break;
                }
            }
            if (flag) continue;
            students[student_count] = tmp;
            student_count++;
        }

        //修改学生信息（依次输入学号、三门课程的分数、姓名）
        if (n == 2) {

        }

        //按学号删除学生（输入学号）
        if (n == 3) {

        }

        //按学号查询学生信息（输入学号，输出学号、姓名、三门课程的分数）
        if (n == 4) {

        }

        //按姓名查询学生信息（输入姓名，按学号升序依次输出学生信息）
        if (n == 5) {

        }

        //按学号升序排序并输出
        if (n == 6) {

        }

        //按总分降序排序并输出
        if (n == 7) {

        }

    }

    return 0;
}
