#include <iostream>
using namespace std;

// Single Inheritance
class Student {
public:
    void studentDetails() {
        cout << "This is Student class." << endl;
    }
};

class Marks : public Student {
public:
    void marksDetails() {
        cout << "This is Marks class." << endl;
    }
};

// Multiple Inheritance
class Father {
public:
    void fatherDetails() {
        cout << "This is Father class." << endl;
    }
};

class Mother {
public:
    void motherDetails() {
        cout << "This is Mother class." << endl;
    }
};

class Child : public Father, public Mother {
public:
    void childDetails() {
        cout << "This is Child class." << endl;
    }
};

// Multilevel Inheritance
class Animal {
public:
    void animalDetails() {
        cout << "This is Animal class." << endl;
    }
};

class Dog : public Animal {
public:
    void dogDetails() {
        cout << "This is Dog class." << endl;
    }
};

class Puppy : public Dog {
public:
    void puppyDetails() {
        cout << "This is Puppy class." << endl;
    }
};

// Hierarchical Inheritance
class Shape {
public:
    void shapeDetails() {
        cout << "This is Shape class." << endl;
    }
};

class Circle : public Shape {
public:
    void circleDetails() {
        cout << "This is Circle class." << endl;
    }
};

class Rectangle : public Shape {
public:
    void rectangleDetails() {
        cout << "This is Rectangle class." << endl;
    }
};

int main() {
    cout << "Single Inheritance:" << endl;
    Marks m;
    m.studentDetails();
    m.marksDetails();

    cout << "\nMultiple Inheritance:" << endl;
    Child c;
    c.fatherDetails();
    c.motherDetails();
    c.childDetails();

    cout << "\nMultilevel Inheritance:" << endl;
    Puppy p;
    p.animalDetails();
    p.dogDetails();
    p.puppyDetails();

    cout << "\nHierarchical Inheritance:" << endl;
    Circle cir;
    Rectangle rect;

    cir.shapeDetails();
    cir.circleDetails();

    rect.shapeDetails();
    rect.rectangleDetails();

    return 0;
}