#include <iostream>
#include <stdlib.h>
#include <iomanip>
#include <fstream>

#define NC "\e[0m"
#define RED "\e[0;31m"
#define GRN "\e[0;32m"
#define REDB "\e[41m"
#define CYN "\e[0;36m"

using namespace std;

class Student
{
    int roll_no;
    char name[20];
    float ss, hindi, eng, math, sc;
    float percentage;
    char Grade;

public:
    void getdata();
    void display_data();
    void Calculate();
    int ret_rollnumber();
    void show_tabular();
};

void Student::show_tabular()
{
    cout << " " << roll_no << setw(4) << " " << name << setw(15) << sc << setw(4) << ss << setw(4) << math << setw(4) << eng << setw(4) << hindi << setw(8) << percentage << setw(6) << Grade << endl;
}

void Student::Calculate()
{
    percentage = (ss + hindi + eng + math + sc) / 5.0;
    if (percentage >= 90)
        Grade = 'A';
    else if (percentage >= 80)
        Grade = 'B';
    else if (percentage >= 65)
        Grade = 'C';
    else if (percentage >= 50)
        Grade = 'D';
    else
        Grade = 'F';
}

void Student::getdata()
{
    cout << "\nEnter the roll number of student: ";
    cin >> roll_no;
    cout << "\nEnter the Name of student: ";
    cin.ignore();
    cin.getline(name, 20);
    cout << "\nEnter marks in Science out of 100 : ";
    cin >> sc;
    cout << "\nEnter marks in Social Science out of 100 : ";
    cin >> ss;
    cout << "\nEnter marks in Maths out of 100 : ";
    cin >> math;
    cout << "\nEnter marks in English out of 100 : ";
    cin >> eng;
    cout << "\nEnter marks in Hindi out of 100 : ";
    cin >> hindi;
    Calculate();
}

void Student::display_data()
{
    cout << "\nRoll number of student : " << roll_no;
    cout << "\nName of student : " << name;
    cout << "\nMarks in Science : " << sc;
    cout << "\nMarks in Social Science : " << ss;
    cout << "\nMarks in Maths : " << math;
    cout << "\nMarks in English : " << eng;
    cout << "\nMarks in Hindi :" << hindi;
    cout << "\nPercentage of student is  :" << percentage;
    cout << "\nGrade of student is :" << Grade;
}

int Student ::ret_rollnumber()
{
    return roll_no;
}

void create_student()
{
    ofstream file;
    file.open("Student.txt", ios::app);
    Student st;
    st.getdata();
    // file.write(reinterpret_cast<char *>(&S),sizeof(S));
    file.write((char *)&st, sizeof(Student));
    file.close();
    cout << GRN "\n\nStudent record has been created! " NC;
    cin.ignore();
    cin.get();
}

void display()
{
    Student st;
    ifstream inFile;
    inFile.open("Student.txt");
    if (!inFile)
    {
        cout << RED "File could not be open!! Press any Key..." NC;
        cin.ignore();
        cin.get();
        return;
    }
    cout << "\n\n\n\t\tDISPLAY ALL RECORDS !!!\n\n";
    while (inFile.read((char *)&st, sizeof(Student)))
    {
        st.display_data();
        cout << "\n\n====================================\n";
    }
    inFile.close();
    cin.ignore();
    cin.get();
}

int display_selected(int n)
{
    Student st;
    ifstream File;
    File.open("Student.txt");
    if (!File)
    {
        cout << RED "File could not be open !! Press any Key..." NC;
        cin.ignore();
        cin.get();
        return 0;
    }
    bool flag = false;
    while (File.read((char *)&st, sizeof(Student)))
    {
        if (st.ret_rollnumber() == n)
        {
            st.display_data();
            flag = true;
        }
    }
    File.close();
    if (flag == false)
    {
        cout << RED "\n\nRecord doesnot exist!" NC;
        cin.ignore();
        cin.get();
        return 10;
    }
    cin.ignore();
    cin.get();
    return 0;
}

void modify(int n)
{
    bool found = false;
    Student st;
    fstream File;
    File.open("Student.txt", ios::in | ios::out);
    if (!File)
    {
        cout << RED "File could not be open !! Press any Key..." NC;
        cin.ignore();
        cin.get();
        return;
    }
    while (!File.eof() && found == false)
    {

        File.read((char *)&st, sizeof(Student));
        if (st.ret_rollnumber() == n)
        {
            st.display_data();
            cout << "\n\nPlease Enter The New Details of student" << endl;
            st.getdata();
            int pos = (-1) * static_cast<int>(sizeof(st));
            File.seekp(pos, ios::cur);
            File.write((char *)&st, sizeof(Student));
            cout << GRN "\n\n\t Record Updated" NC;
            found = true;
        }
    }
    File.close();
    if (found == false)
        cout << RED "\n\n Record Not Found " NC;
    cin.ignore();
    cin.get();
}

void delete_student(int n)
{
    Student st;
    ifstream inFile;
    inFile.open("Student.txt");
    if (!inFile)
    {
        cout << RED "File could not be open !! Press any Key..." NC;
        cin.ignore();
        cin.get();
        return;
    }
    ofstream outFile;
    outFile.open("Temp.txt", ios::out);
    inFile.seekg(0, ios::beg);
    while (inFile.read((char *)&st, sizeof(Student)))
    {
        if (st.ret_rollnumber() != n)
        {
            outFile.write((char *)&st, sizeof(Student));
        }
    }
    outFile.close();
    inFile.close();
    remove("Student.txt");
    rename("Temp.txt", "Student.txt");
    cout << GRN "\n\n\tRecord Deleted .." NC;
    cin.ignore();
    cin.get();
}

void final_result()
{
    Student st;
    ifstream inFile;
    inFile.open("Student.txt");
    if (!inFile)
    {
        cout << RED "File could not be open !! Press any Key..." NC;
        cin.ignore();
        cin.get();
        return;
    }
    cout << "\n\n\t\t\tALL STUDENTS RESULT \n\n";
    cout << "===============================================================\n";
    cout << " R.No      Name             S   SS   M   E   H    %age   Grade" << endl;
    cout << "===============================================================\n";
    while (inFile.read((char *)&st, sizeof(Student)))
    {
        st.show_tabular();
    }
    cin.ignore();
    cin.get();
    inFile.close();
}

void result()
{
    char ch;
    int rno;
    system("cls");
    cout << "\n\n\t MENU";
    cout << "\n\n\t1. Class Result";
    cout << "\n\n\t2. Student Report Card";
    cout << "\n\n\t3. Back to Main Menu";
    cout << "\n\n\n\tEnter Choice (1/2/3)? ";
    cin >> ch;
    system("cls");
    switch (ch)
    {
    case '1':
        final_result();
        break;
    case '2':
        cout << "\n\n\tEnter Roll Number Of Student : ";
        cin >> rno;
        display_selected(rno);
        break;
    case '3':
        break;
    default:
        cout << "\a";
    }
}

void Menu()
{
    char ch;
    int num, x;
    system("cls");
    cout << "\n\n\n\tENTRY MENU";
    cout << "\n\n\t1.CREATE STUDENT RECORD";
    cout << "\n\n\t2.DISPLAY ALL STUDENTS RECORDS";
    cout << "\n\n\t3.SEARCH STUDENT RECORD ";
    cout << "\n\n\t4.MODIFY STUDENT RECORD";
    cout << "\n\n\t5.DELETE STUDENT RECORD";
    cout << "\n\n\t6.BACK TO MAIN MENU";
    cout << "\n\n\tPlease Enter Your Choice (1-6) ";
    cin >> ch;
    system("cls");
    switch (ch)
    {
    case '1':
        create_student();
        break;
    case '2':
        display();
        break;
    case '3':
        cout << "\n\n\tPlease Enter The roll number ";
        cin >> num;
        display_selected(num);
        break;
    case '4':
        cout << "\n\n\tPlease Enter The roll number ";
        cin >> num;
        modify(num);
        break;
    case '5':
        cout << "\n\n\tPlease Enter The roll number ";
        cin >> num;
        x = display_selected(num);
        if (x != 10)
            delete_student(num);
        break;
    case '6':
        break;
    default:
        cout << "\a";
        Menu();
    }
}

// ******************MAIN FUNCTION********************
int main()
{
    cout << GRN "\n\n\t\t\t==========================================";
    cout <<     "\n\n\t\t\t        STUDENT REPORT CARD PROJECT";
    cout <<     "\n\n\t\t\t         MADE BY RAJAT RAGHUVANSHI";
    cout <<     "\n\n\t\t\t==========================================";
    cout <<     "\n\n\n\n\nPRESS ENTER TO CONTINUE\n\n" NC;
    cin.get();
    char ch;
    while (ch != '3')
    {
        system("cls");
        cout << CYN "\t\t\t\t      " << char(201);
        for (int i = 0; i < 13; i++)
            cout << char(205);
        cout << char(187) << "\n";
        cout << "\t\t\t\t      " << char(186) << "  MAIN MENU  " << char(186) << "\n";
        cout << "\t\t\t\t      " << char(200);
        for (int i = 0; i < 13; i++)
            cout << char(205);
        cout << char(188) << "\n";
        cout << "\n\n\t1. VIEW RESULT ";
        cout << "\n\t2. ENTER/EDIT DATA";
        cout << "\n\t3. EXIT";
        cout << "\n\n\tPlease Select Your Choice (1-3): " NC;
        cin >> ch;
        switch (ch)
        {
        case '1':
            result();
            break;
        case '2':
            Menu();
            break;
        case '3':
            break;
        default:
            cout << "\a";
        }
    }
    return 0;
}
