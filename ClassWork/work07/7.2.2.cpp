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
