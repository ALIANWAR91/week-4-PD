#include<iostream>
using namespace std;

void printMenu();
void calculateAggregate(string, float, float, float);
void compareMarks(string, int, string, int);

main()
{
    string nameStd1, nameStd2;
    int matricMarksStd1, interMarksStd1, ecatMarksStd1, matricMarksStd2, interMarksStd2, ecatMarksStd2;

    system("cls");
    printMenu();
    cout << "Enter Student 1 Name: ";
    cin >> nameStd1;
    cout << "Enter Student 1 Matric Marks: ";
    cin >> matricMarksStd1;
    cout << "Enter Student 1 Inter(1st Year) Marks: ";
    cin >> interMarksStd1;
    cout << "Enter Student 1 ECAT Marks: ";
    cin >> ecatMarksStd1;
    calculateAggregate(nameStd1, matricMarksStd1, interMarksStd1, ecatMarksStd1);
    cout << "Enter Student 2 Name: ";
    cin >> nameStd2;
    cout << "Enter Student 2 Matric Marks: ";
    cin >> matricMarksStd2;
    cout << "Enter Student 2 Inter(1st Year) Marks: ";
    cin >> interMarksStd2;
    cout << "Enter Student 2 ECAT Marks: ";
    cin >> ecatMarksStd2;
    calculateAggregate(nameStd2, matricMarksStd2, interMarksStd2, ecatMarksStd2);

    compareMarks(nameStd1, ecatMarksStd1, nameStd2, ecatMarksStd2);

}
void printMenu()
{
    cout<<"     UNIVERSITY ADMISSION MANAGEMENT SYSTEM" <<endl;  
}

void calculateAggregate(string name, float matricMarks, float interMarks, float ecatMarks)
{
    float aggregate;
    aggregate = ((matricMarks/1100)*30) + ((interMarks/550)*30) + ((ecatMarks/400)*40);
    cout << "The Aggregate for Admission of "<<name <<" is: " <<aggregate <<"%" << endl;
}

void compareMarks(string nameStd1, int ecatMarksStd1, string nameStd2, int ecatMarksStd2)
{
    if (ecatMarksStd1 > ecatMarksStd2){
        cout << "Roll Number 1: " <<nameStd1 <<endl;
        cout << "Roll Number 2: " <<nameStd2 <<endl;
    }
    if (ecatMarksStd2 > ecatMarksStd1){
        cout << "Roll Number 1: " <<nameStd2 <<endl;
        cout << "Roll Number 2: " <<nameStd1 <<endl;
    }
}
    

 