#include<iostream>
using namespace std;
class person
{
public:
    virtual void display()
    {
        cout <<"I am a person"<<endl;
    }
};
class student: public person
{
public:
    void display()
    {
        cout <<"I am a student"<<endl;
    }
};
class teacher: public person
{
public:
    void display()
    {
        cout <<"I am a teacher"<<endl;
    }
};
int main()
{
    student s;
    teacher t;
    person *p;
    p=&s;
    p->display();
    p=&t;
    p->display();



}
