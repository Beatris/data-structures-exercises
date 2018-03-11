#include <iostream>

using namespace std;

struct Person {
    string name;
    string phoneNumber;
    int age;
    Person* partner = NULL;

    Person(string name_, string number, int age_) {
        name = name_;
        phoneNumber = number;
        age = age_;
    }

    void print() {
        cout << name << " (";
        cout << age << " years old";
        if(partner != NULL) {
            cout << ", married to " << partner->name;
        } else {
            cout << ", single";
        }
        cout << ")" << endl;
    }

    void marry(Person& other) {
        other.partner = this;
        this->partner = &other;
    }
};

int main() {
    Person Eva = Person("Eva", "+35988502035", 25);
    Person Adam = Person("Adam", "+35989028475", 30);
    Eva.print();
    Eva.marry(Adam);
    Eva.print();
    Adam.print();
    return 0;
}