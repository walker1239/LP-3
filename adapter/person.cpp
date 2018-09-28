#include <iostream>
#include <string>
#include <vector>

using namespace std;

class person
{
  protected:
    string name;
    int id;

  public:
    person(const string &_name = "", int _id = 0) : name(_name), id(_id)
    {
    }
    virtual ~person()
    {
        cout << "delete person " << name << endl;
    }
    virtual void print()
    {
        cout << "person " << name << " " << id << endl;
    }
};

class student : public person
{
  private:
    string program;

  public:
    student(const string _name = "", int _id = 0, const string _program = "") : person(_name, _id), program(_program)
    {
    }
    ~student()
    {
        cout << "delete student " << name << endl;
    }
    void print()
    {
        cout << "student " << name << " " << id << " " << program << endl;
    }
};

int main()
{
    vector<person *> vp;
    vp.push_back(new person("juan", 12345));
    vp.push_back(new student("luis", 31245, "ing de software"));
    vp.push_back(new person("maria", 11235));
    vp.push_back(new student("jaime", 31245, "admin"));
    for (person *p : vp)
        p->print();

    for (person *p : vp)
        delete p;

    return 0;
}