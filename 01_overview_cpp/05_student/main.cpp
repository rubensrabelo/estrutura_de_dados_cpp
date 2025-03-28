#include<iostream>

using namespace std;

struct Student {
    string number;
    string name;
    float grades[3];

    Student(string nb, string nm): number(nb), name(nm) {
        grades[0] = grades[1] = grades[2] = 0.0;
    }

    ~Student() {}

    float average() const {
        return (grades[0] + grades[1] + grades[2]) / 3;
    }

    friend ostream& operator<<(ostream& os, const Student& stdt);
};

ostream& operator<<(ostream& os, const Student& stdt) {
    os << "Name=" << stdt.name << ", Average=" << stdt.average() << endl;
    return os;
}



int main() {
    Student s1("1", "Rubens");
    s1.grades[0] = 8.0;
    s1.grades[1] = 6.5;
    s1.grades[2] = 9.0;

    Student s2("2", "Rebeca");
    s2.grades[0] = 7.0;
    s2.grades[1] = 7.5;
    s2.grades[2] = 10.0;

    Student s3("3", "Aquila");
    s3.grades[0] = 8.5;
    s3.grades[1] = 4.5;
    s3.grades[2] = 9.7;

    Student stds[] = {{s1}, {s2}, {s3}};

    Student highestAverage = s1;

    cout << s1 << endl;
    cout << s2 << endl;
    cout << s3 << endl;
    cout << endl;

    for(int i = 1; i < 3; i++) {
        if (stds[i].average() > highestAverage.average())
            highestAverage = stds[i];
    }

    cout << "Highest average:\n";
    cout << highestAverage << endl;

    return 0;
}