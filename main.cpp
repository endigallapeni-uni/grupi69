#include <iostream>
using namespace std;

int main() {
    int choice;
    
    do {
        string name;
        int marks1, marks2, marks3;
        double average;
        char grade;

        cout << "Enter student name: ";
        cin >> name;


        cout << "Enter marks for subject 1: ";
        cin >> marks1;
        cout << "Enter marks for subject 2: ";
        cin >> marks2;
        cout << "Enter marks for subject 3: ";
        cin >> marks3;

        average = (marks1 + marks2 + marks3) / 3.0;

        // Arnis Thaçi

         if (average >= 90)
            grade = 'A';
        else if (average >= 75)
            grade = 'B';
        else if (average >= 60)
            grade = 'C';
        else if (average >= 40)
            grade = 'D';
        else
            grade = 'F';


            // Alejna Rexhepi
cout << "\nStudent Name: " << name << endl;
        cout << "Average Marks: " << average << endl;
        cout << "Grade: " << grade << endl;

        cout << "\nDo you want to enter another student? (1 = Yes, 0 = No): ";
        cin >> choice;

    } while (choice == 1);

    cout << "Program ended.";
    return 0;
}
