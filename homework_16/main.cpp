// 1 task 
#include <iostream>
#include <string>
using namespace std;

class Lesson{
private:
    string title;
    string teacher;
    int duration;

public:
    Lesson(){
        title = "Unknown";
        teacher = "Unknown";
        duration = 0;
    }

    Lesson(string lessonTitle, string lessonTeacher, int lessonDuration){
        title = lessonTitle;
        teacher = lessonTeacher;
        duration = lessonDuration;
    }

    void printLesson(){
        cout << "Название урока: " << title << endl;
        cout << "Преподаватель: " << teacher << endl;
        cout << "Длительность: " << duration << " минут" << endl;
    }

    int getDuration(){
        return duration;
    }

    string getTitle(){
        return title;
    }
};

class Course{
private:
    string name;
    Lesson lessons[3];

public:
    Course(string courseName, Lesson l1, Lesson l2, Lesson l3){
        name = courseName;

        lessons[0] = l1;
        lessons[1] = l2;
        lessons[2] = l3;
    }

    void printCourse(){
        cout << "Курс: " << name << endl << endl;

        for(int i = 0; i < 3; i++){
            lessons[i].printLesson();
            cout << endl;
        }
    }

    int getTotalDuration(){
        int sum = 0;

        for(int i = 0; i < 3; i++){
            sum += lessons[i].getDuration();
        }

        return sum;
    }

    void printShortLessons(){
        cout << "Короткие уроки:" << endl;

        for(int i = 0; i < 3; i++){
            if(lessons[i].getDuration() < 60){
                cout << lessons[i].getTitle() << endl;
            }
        }
    }
};

int main(){

    Lesson lesson1("Введение в HTML", "Алихан", 40);
    Lesson lesson2("Основы CSS", "Мария", 55);
    Lesson lesson3("JavaScript для начинающих", "Данияр", 70);

    Course course(
        "Frontend-разработка",
        lesson1,
        lesson2,
        lesson3
    );

    course.printCourse();

    cout << "Общая длительность курса: "
         << course.getTotalDuration()
         << " минут" << endl << endl;

    course.printShortLessons();

    return 0;
} 
