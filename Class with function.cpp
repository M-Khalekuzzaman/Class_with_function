//adding function with in class
#include<iostream>
#include<conio.h>
using namespace std;
class studentInfo{
public :
        int id;
        double gpa;
        float marks;
        void display()
        {
            cout << id << "  " <<gpa << "  " <<marks <<endl;
        }
};
int main()
{
    studentInfo shakib,pranto;
    shakib.id = 101;
    shakib.gpa = 4.50;
    shakib.marks = 80;
    shakib.display();

    pranto.id = 103;
    pranto.gpa = 4.70;
    pranto.marks = 70;
    pranto.display();

    getch();
}
