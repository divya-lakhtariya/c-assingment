/*
Assume that the test results of a batch of students are stored in three different
classes. Class Students are storing the roll number. Class Test stores the marks
obtained in two subjects and class result contains the total marks obtained in
the test. The class result can inherit the details of the marks obtained in the
test and roll number of students. (Multilevel Inheritance)
*/
#include<iostream>
#include<stdio.h>
using namespace std;

class Student
{
        int roll;
        char name[25];
    public:
        void getdata()
        {
                cout<<"\n -----------------------------------------";
                cout<<"\n Enter Roll No.            : ";
                cin>>roll;
                cout<<"\n Enter Student Name        : ";
                cin>>name;
        }
        void putdata()
        {
                cout<<"\n -----------------------------------------";
                cout<<"\n ********** Student Marklist **********";
                cout<<"\n -----------------------------------------";
                cout<<"\n Roll No.             :  "<<roll;
                cout<<"\n Student Name         :  "<<name<<endl;
        }
};
class StudentExam : public Student      //Class StudentExam derived from Class Student
{
    public:
        int sub1, sub2, sub3;
        float per;
    public:
        void accept_data()
        {
                getdata();
                cout<<"\n Enter Marks for Subject 1 : ";
                cin>>sub1;
                cout<<"\n Enter Marks for Subject 2 : ";
                cin>>sub2;
                cout<<"\n Enter Marks for Subject 3 : ";
                cin>>sub3;
                
        }
        void display_data()
        {
                putdata();
                cout<<"\n Marks of Subject 1   :  "<<sub1;
                cout<<"\n Marks of Subject 2   :  "<<sub2;
                cout<<"\n Marks of Subject 3   :  "<<sub3;
                
        }
};
class StudentResult : public StudentExam      //Class StudentResult derived from Class StudentExam
{
    public:
        void total ()
        {
                per = (sub1+sub2+sub3)/3.0;
                cout<<"\n\n Total Percentage     :  "<<per;
                cout<<"\n ----------------------------------------- \n";
        }
};
int main()
{
        StudentResult str;     //'str' is derived 
        int c, i;
        cout<<"\n Enter No. of Students You Want? : ";
        cin>>c;
        for(i=0; i<c; i++)
        {
                str.accept_data();
                str.display_data();
                str.total();
        }
        return 0;
}
