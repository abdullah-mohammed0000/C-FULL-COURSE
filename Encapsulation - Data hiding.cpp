#include<iostream>
using namespace std;
class student
{
private:
    string name;
    public:
    void setname(string x)
    {
        name =x;
    }
    string getname()
    {
        return name;
    }
};

int main()
{
    student s1;
    s1.setname("Abdullah Mohammed");
    cout<<s1.getname()<<endl;
}
