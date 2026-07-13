#include <iostream>
#include <string>

using namespace std;

struct Student {
    string id;         // 学号
    string name;    // 姓名
    int score[3] = {0};  // 三门课程的分数
};


int total_score(Student s) {
                return s.score[0] + s.score[1] + s.score[2];
}

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
            cin.get();
            cin >> tmp.id >> tmp.score[0] >> tmp.score[1] >> tmp.score[2];
            cin.get();
            getline(cin, tmp.name);
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
            Student tmp = Student();
            cin.get();
            cin >> tmp.id >> tmp.score[0] >> tmp.score[1] >> tmp.score[2];
            cin.get();
            getline(cin, tmp.name);
            for (int i=0; i<student_count; i++) {
                if (tmp.id == students[i].id) {
                    students[i] = tmp;
                    break;
                }
            }
        }

        //按学号删除学生（输入学号）
        if (n == 3) {
            Student tmp = Student();
            cin >> tmp.id;
            for (int i=0; i<student_count; i++) {
                if (tmp.id == students[i].id) {
                    for (int j=i; j<student_count-1; j++) {
                        students[j] = students[j+1];
                    }
                    student_count--;
                    break;
                }
            }
        }

        //按学号查询学生信息（输入学号，输出学号、姓名、三门课程的分数）
        if (n == 4) {
            Student tmp = Student();
            cin >> tmp.id;
            for (int i=0; i<student_count; i++) {
                if (tmp.id == students[i].id) {
                    cout << students[i].id << " " << students[i].name << " "
                         << students[i].score[0] << " " << students[i].score[1] << " "
                         << students[i].score[2] << ' '<< endl;
                    break;
                }
            }
        }

        //按姓名查询学生信息（输入姓名，按学号升序依次输出学生信息）
        if (n == 5) {
            Student tmp = Student();
            cin.get();
            getline(cin, tmp.name);
            int found_count = 0;
            int found_indices[1002];
            for (int i=0; i<student_count; i++) {
                if (tmp.name == students[i].name) {
                    found_indices[found_count] = i;
                    found_count++;
                }
            }
            if (found_count != 0) {
                // 按学号升序排序
                for (int i=0; i<found_count-1; i++) {
                    for (int j = i+1; j<found_count; j++) {
                        if (students[found_indices[i]].id > students[found_indices[j]].id) {
                            int temp = found_indices[i];
                            found_indices[i] = found_indices[j];
                            found_indices[j] = temp;
                        }
                    }
                }
                // 输出结果
                for (int i=0; i<found_count; i++) {
                    int idx = found_indices[i];
                    cout << students[idx].id << " " << students[idx].name << " "
                        << students[idx].score[0] << " " << students[idx].score[1] << " "
                        << students[idx].score[2] << ' '<< endl;
                }
            }
        }

        //按学号升序排序并输出
        if (n == 6) {
             // 按学号升序排序
                for (int i=0; i<student_count-1; i++) {
                    for (int j = i+1; j<student_count; j++) {
                        if (students[i].id > students[j].id) {
                            Student temp = students[i];
                            students[i] = students[j];
                            students[j] = temp;
                        }
                    }
                }
                // 输出结果
                for (int i=0; i<student_count; i++) {
                    cout << students[i].id << " " << students[i].name << " "
                        << students[i].score[0] << " " << students[i].score[1] << " "
                        << students[i].score[2] << ' ' << endl;
                }

        }

        //按总分降序排序并输出
        if (n == 7) {
            // 按总分降序排序
            for (int i=0; i<student_count-1; i++) {
                for (int j = i+1; j<student_count; j++) {
                    if (total_score(students[i]) < total_score(students[j])) {
                        Student temp = students[i];
                        students[i] = students[j];
                        students[j] = temp;
                    } else if (total_score(students[i]) == total_score(students[j])) {
                        if (students[i].id > students[j].id) {
                            Student temp = students[i];
                            students[i] = students[j];
                            students[j] = temp;
                        }
                    }
                }
            }
            // 输出结果
            for (int i=0; i<student_count; i++) {
                cout << students[i].id << " " << students[i].name << " "
                    << students[i].score[0] << " " << students[i].score[1] << " "
                    << students[i].score[2] << ' ' << endl;
            }
        }
    }

    return 0;
}


/*
任务描述
    设计一个学生成绩管理程序，实现对n个学生的3门课程的成绩的记录与统计工作。学生信息包括：学号，姓名，课程成绩1，课程成绩2，课程成绩3。
    程序基本功能要求如下：

    1---添加学生信息（依次输入学号、三门课程的分数、姓名）
    2---修改学生信息（依次输入学号、三门课程的分数、姓名）
    3---按学号删除学生（输入学号）
    4---按学号查询学生信息（输入学号，输出学号、姓名、三门课程的分数）
    5---按姓名查询学生信息（输入姓名，按学号升序依次输出学生信息）
    6---按学号升序排序并输出
    7---按总分降序排序并输出
    0---退出
    
提示
    本题不做复杂度要求。
    学生数 n<1000, 姓名字符不超过50，姓名可能带有空格，姓名可能重复，但学号具有唯一性。
    按总分降序排序时，同分的学生按照学号升序输出。
    注意考虑以下异常输入
    操作1 试图添加重复学生：以新添加的学生更新
    操作2 试图修改不存在的学生信息：不做任何修改
    操作3 试图删除不存在的学生：不做任何修改
    操作4 查找不存在的学号：不输出任何信息
    操作5 查找不存在的学生姓名：不输出任何信息

测试说明
    测试将包括若干行，每行的第一个数代表操作，输入0时程序结束。

样例输入：
    1 520021910437 99 100 98 Zhang San
    1 520021910438 99 100 92 Zhang San
    1 520021910439 90 100 94 Li Si
    1 520021910440 90 100 94 Wang Wu
    2 520021910437 89 100 94 Zhang San
    3 520021910430
    4 520021910437
    5 Zhang San
    6
    7
    0

样例输出（此处增加了换行以方便解释）：
    520021910437 Zhang San 89 100 94 
    520021910437 Zhang San 89 100 94 
    520021910438 Zhang San 99 100 92 
    520021910437 Zhang San 89 100 94 
    520021910438 Zhang San 99 100 92 
    520021910439 Li Si 90 100 94 
    520021910440 Wang Wu 90 100 94 
    520021910438 Zhang San 99 100 92 
    520021910439 Li Si 90 100 94 
    520021910440 Wang Wu 90 100 94 
    520021910437 Zhang San 89 100 94 

解释
    从输入4开始，数据库的信息已经固定为

    520021910437 Zhang San 89 100 94
    520021910438 Zhang San 99 100 92
    520021910439 Li Si 90 100 94
    520021910440 Wang Wu 90 100 94
    接下来将分别做

    4 输出学号为 520021910437 的学生信息
    5 输出姓名为 Zhang San 的学生信息
    6 按学号升序输出学生信息
    7 按总分降序输出学生信息
*/