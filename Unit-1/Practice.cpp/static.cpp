#include "iostream"
#include "string.h"
using namespace std;
class collect
{
protected:
    char title[90];
    float price;

public:
    collect(char *s, float a)
    {
        strcpy(title, s);
        price = a;
    }
    virtual void display() {}
};
class book : public collect
{
    int pages;

public:
    book(char *s, float a, int p) : collect(s, a)
{
    pages = p;
}
void display();
};
class tape : public collect
{
    float time;
public:
    tape(char *s, float a, float t) : collect(s, a)
{
    time = t;
}
void display();

};
void book::display()
{
    cout << "Title: " << title;
    cout << "\nPages: " << pages;
    cout << "\nPrice: " << price;
}
void tape::display()
{
    cout << "Title: " << title;
    cout << "\nPlay Time: " <<time << "mins";
    cout << "\nPrice: " << price;
}
int main()
{
    char *title = new char[40];
    float price, time;
    int pages;
    cout << "Enter Book Details: ";
    cout << "\nTitle: ";
    cin >> title;
    cout << "Price: ";
    cin >> price;
    cout << "Pages: ";
    cin >> pages;
    book books(title, price, pages);
    cout << "\nEnter Tapes Details here: ";
    cout << "\nTitle: ";
    cin >> title;
    cout << "Price: ";
    cin >> price;
    cout << "Play Time: ";
    cin >> time;
    tape tapes(title, price, time);
    collect *list[4];
    list[0] = &books;
    list[1] = &tapes;
    cout << "Collect Details: \n\n";
    cout << "Book: \n";
    list[0]->display();
    
    cout << "\n\nTape: \n";
    list[1]->display();
    return 0;
}
