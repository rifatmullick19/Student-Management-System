#include <iostream>
using namespace std;

class Student {
public:
    int rollNo;
    string name;
    float marks;

    void display() {
        cout << "\nRoll No: " << rollNo;
        cout << "\nName: " << name;
        cout << "\nMarks: " << marks << endl;
    }
};

int main() {
    // Creating 3 student objects with fixed data
    Student s1, s2, s3;

    // Assigning values
    s1.rollNo = 1;
    s1.name = "Aman";
    s1.marks = 85;

    s2.rollNo = 2;
    s2.name = "Riya";
    s2.marks = 90;

    s3.rollNo = 3;
    s3.name = "Karan";
    s3.marks = 78;

    // Displaying data
    cout << "--- Student Records ---" << endl;
    s1.display();
    s2.display();
    s3.display();

    return 0;
}