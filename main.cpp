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


        Neroni: cout << "Enter marks for subject 1: ";
        cin >> marks1;
        cout << "Enter marks for subject 2: ";
        cin >> marks2;
        cout << "Enter marks for subject 3: ";
        cin >> marks3;

        average = (marks1 + marks2 + marks3) / 3.0;
