//  Created by Jeffrey Janvier on 4/18/21.
//  Copyright © 2021 Jeffrey Janvier. All rights reserved.
//  This program demonstrates a class that stores variables and functions for a
//  student database.

#include <iostream>
#include <string>
using namespace std;

// Class Declaration
class Database
{
private:
    string FirstName; // Holds the first name
    string LastName;  // Holds the last name
    float ExamGrade1; // Holds the first exam grade
    float ExamGrade2; // Holds the second exam grade
    float ExamGrade3; // Holds the third exam grade
    float FinalScore; // Holds the final average of the grades
    
public:
    Database (float ex1, float ex2, float ex3)
    {
        ExamGrade1 = ex1;
        ExamGrade2 = ex2;
        ExamGrade3 = ex3;
    }
    
    void setFirstName(string fir)
    {
        FirstName = fir;
    }
    
    string getFirstName()
    {
        return FirstName;
    }
    
    void setLastName(string las)
    {
        LastName = las;
    }
    
    string getLastName()
    {
        return LastName;
    }
    
    void setExamGrade1(float ex1)
    {
        ExamGrade1 = ex1;
    }
    
    void setExamGrade2(float ex2)
    {
        ExamGrade2 = ex2;
    }
    
    void setExamGrade3(float ex3)
    {
        ExamGrade3 = ex3;
    }
    
    float getExamGrade1()
    {
        return ExamGrade1;
    }
    
    float getExamGrade2()
    {
        return ExamGrade2;
    }
    
    float getExamGrade3()
    {
        return ExamGrade3;
    }
    
    float getFinalScore()
    {
        FinalScore = (ExamGrade1 + ExamGrade2 + ExamGrade3) / 3;
        return FinalScore;
    }
};

int main()
{
    string fName;   // Holds the student's first name
    string lName;   // Holds the student's last name
    float scoreEx1; // Holds score for first exam
    float scoreEx2; // Holds score for second exam
    float scoreEx3; // Holds score for third exam
    
    cout << "The program will provide the final average score " << endl;
    cout << "witin the class." << endl;
    
    // Get the student's first name
    cout << "What is the student's full name: " << endl;
    cin >> fName >> lName;
    
    // Get the grade for the first exam
    cout << "What is the score of the student's first Exam: "
    << endl;
    cin >> scoreEx1;
    
    // Get the grade for the second exam
    cout << "What is the score of the student's second Exam: "
    << endl;
    cin >> scoreEx2;
    
    // Get the grade for the third exam
    cout << "What is the score of the student's third Exam: "
    << endl;
    cin >> scoreEx3;
    
    // Create a Database object
    Database student(scoreEx1, scoreEx2, scoreEx3);
    student.setFirstName(fName);
    student.setLastName(lName);
    
    // Calculate and Display the final average Exam score
    cout << endl;
    cout << "The student: " << student.getFirstName()
    << " " << student.getLastName() << endl;
    
    cout << "The final average score: " << student.getFinalScore() << endl;
    
    return 0;
}
