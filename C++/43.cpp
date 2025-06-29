#include <iostream>
using namespace std;
class A
{
public:
    void say()
    {
        cout << "Hello world" << endl;
    }
};
class B : public virtual A
{
};
class C : public virtual A
{
};
class D : public B, public C
{
};
int main(){

}
#include <iostream>
using namespace std;
class Student
{
protected:
    int roll_no;

public:
    void set_number(int a)
    {
        roll_no = a;
    }
    void print_number(void)
    {
        cout << "Your roll number is " << roll_no << endl;
    }
};
class Test : virtual public Student
{
protected:
    float maths, physics;

public:
    void set_marks(float m1, float m2)
    {
        maths = m1;
        physics = m2;
    }
    void print_marks(void)
    {
        cout << "Your result are here :" << endl
             << "Maths :" << maths << endl
             << "Physics :" << physics << endl;
    };
};
class Sports : virtual public Student
{
protected:
    float score;

public:
    void set_score(float sc)
    {
        score = sc;
    }
    void show()
    {
        cout << "Your score is " << score << endl;
    }
};
class Result : public Test, public Sports
{
private:
    float total;

public:
    void display(void)
    {
        total = maths + physics + score;

        print_marks();
        print_number();
        show();
        cout << "Your score is :" << total << endl;
    }
};
int main()
{
    Result r;
    r.set_marks(93, 94);
    r.set_number(14);
    r.set_score(89);
    r.display();
    return 0;
}