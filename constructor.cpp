#include <iostream>
#include <string.h>
using namespace std;

class hero
{
private:
    int health;

public:
    char level;
    char *name = new char[100];
    static int timeToComplete;

    hero()
    {
        cout << "Default constructor called" << endl;
    }
    // static int random()
    // {
    //     return timeToComplete;
    // }
    static void random()
    {
        cout << timeToComplete << endl;
    }
    void print()
    {
        cout << "health: " << this->health
             << ",";
        cout << "level: " << this->level
             << ",";
        cout << "name:" << this->name
             << "]" << endl;
    }
    void setHealth(int h)
    {
        health = h;
    }
    hero(int health, char level)
    {
        this->health = health;
        this->level = level;
    }
    // copy constructor
    hero(hero &temp)
    {
        char *ch = new char[strlen(temp.name) + 1];
        strcpy(ch, temp.name);
        this->name = ch;
        this->health = temp.health;
        this->level = temp.level;
    }

    int getHealth()
    {
        return health;
    }

    ~hero()
    {
        //cout << "Destructor called" << endl;
    }
};
int hero::timeToComplete = 5;

int main()
{

    // STATIC ALLOCATION
    hero h; //* destructor called automatically

    cout << hero::timeToComplete << endl;
    // cout << hero::random() << endl;
    hero::random();
    cout << h.timeToComplete << endl;
    // hero m;
    // m.timeToComplete = 10;
    // cout << m.timeToComplete << endl;

    // DYNAMIC ALLOCATION
    hero *b = new hero();
    //* destructor has to be called manually
    delete b;
    // char name[7] = "Shreya";
    // h.name = name;
    // h.print();

    // hero m(h);
    // m.print();

    // h.name[0] = 'M';
    // h.print();
    // m.print();

    // h = m;
    // h.print();
    // m.print();
    return 0;
}