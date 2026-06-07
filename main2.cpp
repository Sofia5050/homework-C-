#include <iostream>
#include <string>
using namespace std;
// 2 task 

class Student{
private:
    string name;
    int age;
    int progress;

public:
    Student(){
        name = "Unknown";
        age = 0;
        progress = 0;
    }

    Student(string studentName, int studentAge, int studentProgress){
        name = studentName;
        age = studentAge;
        progress = studentProgress;
    }

    void printStudent(){
        cout << "Имя студента: " << name << endl;
        cout << "Возраст: " << age << endl;
        cout << "Прогресс: " << progress << "%" << endl;
    }

    int getProgress(){
        return progress;
    }

    string getName(){
        return name;
    }
};

class Group{
private:
    string groupName;
    Student students[3];

public:
    Group(string name, Student s1, Student s2, Student s3){
        groupName = name;

        students[0] = s1;
        students[1] = s2;
        students[2] = s3;
    }

    void printGroup(){
        cout << "Группа: " << groupName << endl << endl;

        for(int i = 0; i < 3; i++){
            students[i].printStudent();
            cout << endl;
        }
    }

    int getAverageProgress(){
        int sum = 0;

        for(int i = 0; i < 3; i++){
            sum += students[i].getProgress();
        }

        return sum / 3;
    }

    void printBestStudents(){
        cout << "Лучшие студенты:" << endl;

        for(int i = 0; i < 3; i++){
            if(students[i].getProgress() >= 80){
                cout << students[i].getName() << endl;
            }
        }
    }

    void printWeakStudents(){
        cout << "Студенты, которым нужна помощь:" << endl;

        for(int i = 0; i < 3; i++){
            if(students[i].getProgress() < 60){
                cout << students[i].getName() << endl;
            }
        }
    }
};

int main(){

    Student student1("Алина", 18, 80);
    Student student2("Дамир", 19, 55);
    Student student3("Мария", 17, 95);

    Group group(
        "Python QA",
        student1,
        student2,
        student3
    );

    group.printGroup();

    cout << "Средний прогресс группы: "
         << group.getAverageProgress()
         << "%" << endl << endl;

    group.printBestStudents();

    cout << endl;

    group.printWeakStudents();

    return 0;
} 
