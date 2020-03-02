#include<iostream>
#include<conio.h>

using namespace std;

class Student
{
    int rollno;
    char name[20];
    float percentage;

    public:
        void getdata();
        void showdata();
};

void Student::getdata()
{
    cout<<"Enter rollno:";
    cin>>rollno;

    cout<<"Enter Name:";
    cin>>name;

    cout<<"Enter Percentage:";
    cin>>percentage;
}

void Student::showdata()
{
    cout<<"\n"<<rollno;
    cout<<"\t"<<name;
    cout<<"\t"<<percentage;
}

int main()
{
    Student s[5];
    int i;

    cout<<"Enter data for five students";
    for(i=0; i<5; i++)
    {
        s[i].getdata();
    }

    cout<<"\nStudent data is\n";
    cout<<"\nRollno\tName\tPercentage";
    
    for(i=0; i<5; i++)
    {
        s[i].showdata();
    }

    getch();
    return 0;
}

















