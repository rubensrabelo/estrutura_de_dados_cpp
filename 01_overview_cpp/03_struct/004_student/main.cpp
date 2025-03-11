#include<iostream>
#include<vector>
#include<iomanip>

using namespace std;

struct Student {
    string number;
    string name;
    double grades[3];

    Student(string number, string name, double grades[3]) {
        this->number = number;
        this->name = name;
        for(int i = 0; i < 3; i++) {
            this->grades[i] = grades[i];
        }
    }

    float average() {
        return (grades[0] + grades[1] + grades[2]) / 3;
    }
};

Student bestStudent(vector<Student> students) {
    Student best = students[0];
    for(auto student : students) {
        if(student.average() > best.average()) {
            best = student;
        }
    }
    return best;
}

void showStudent(Student student) {
    cout << "Name: " << student.name << endl;
    cout << fixed << setprecision(2);
    cout << "Average: " << student.average() << endl;
}

int main() {
    int qtd;
    vector<Student> students;
    
    cout << "Enter the number of students: ";
    cin >> qtd;

    for(int i = 0; i < qtd; i++) {
        string number, name;
        double grades[3];

        cout << "Enter the student number: ";
        cin >> number;
        cout << "Enter the student name: ";
        cin >> name;
        cout << "Enter the student grades: ";
        for(int j = 0; j < 3; j++) {
            cin >> grades[j];
        }

        students.push_back(Student(number, name, grades));
    }

    cout << endl;
    cout << "The best student is:" << endl;

    Student best = bestStudent(students);

    showStudent(best);

    return 0;
}