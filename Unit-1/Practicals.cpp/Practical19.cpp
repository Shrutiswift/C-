#include "iostream"
#include <cstring>
using namespace std;
class Pairs
{
private:
    char numpair[20];
public:
    friend ostream &operator<<(ostream &output, const Pairs &p)
    {
        output << p.numpair;
        return output;
    }
    friend istream &operator>>(istream &input, Pairs &p)
    {
        char pair[20];
        input >> pair;
        int len = strlen(pair);
        if (len < 5 || pair[0] != '(' || pair[len - 1] != ')' || !strstr(pair, ","))
        {
            cout << "Invalid pair value found!" << endl;
            strcpy(p.numpair, "");
        }
        else
        {
            strcpy(p.numpair, pair);
        }
        return input;
    }
};

int main()
{
    Pairs p;
    cout << "Enter the value of pair object: ";
    cin >> p;
    cout << "Entered pair value is: " << p << endl;
    return 0;
}