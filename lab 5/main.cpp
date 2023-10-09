#include <iostream>
#include <cstring>

using namespace std;

class Person {
private:
    string name;
    int age;
public:
    Person() = default;
    Person(const string n, const int a) : name(n), age(a) {}

    void Input() {
        cout << "Enter name: ";
        cin >> name;
        cout << "Enter age: ";
        cin >> age;
    }

    void Print() const {
        cout << "Name: " << name << ", Age: " << age << endl;
    }
};

class University {
private:
    string NameUniversity;
    int enrYear;
    string faculty;
public:
    University() = default;
    University(const string u, const int e, const string f) : NameUniversity(u), enrYear(e), faculty(f) {}

    void Input() {
        cout << "Enter university name: ";
        cin >> NameUniversity;
        cout << "Enter year of admission: ";
        cin >> enrYear;
        cout << "Enter faculty: ";
        cin >> faculty;
    }

    void Print() const {
        cout << "University: " << NameUniversity << ", Year of admission: " << enrYear << ", Faculty: " << faculty << endl;
    }
};

class Student : public Person, public University {
private:
    string group;
public:
    Student() = default;
    Student(const string n, const int a, const string u, const int e, const string f, const string g) : Person(n, a), University(u, e, f), group(g) {}

    void Input() {
        Person::Input();
        University::Input();
        cout << "Enter group: ";
        cin >> group;
    }

    void Print() const {
        Person::Print();
        University::Print();
        cout << "Group: " << group << endl;
    }
};

int main() {
    Student s;
    s.Input();
    s.Print();


    return 0;
}