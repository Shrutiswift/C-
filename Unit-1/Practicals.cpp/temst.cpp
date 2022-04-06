#include "bits/stdc++.h"
using namespace std;

class pairs
{
    char pair[50];

public:
    friend ostream &operator<<(ostream &output, pairs &p)
    {
        output << p.pair;
        return output;
    }

    friend istream &operator>>(istream &input, pairs &p)
    {
        char temp[50];
        input >> temp;
        int length = strlen(temp);
        if (length < 5 || temp[0] != '(' || temp[length - 1] != ')' || !strstr(temp, ","))
        {
            cout << "Invalid Pair Value...\n";
            strcpy(temp, "");
        }
        else
        {
            strcpy(p.pair, temp);
        }
        return input;
    }
};

int main(void)
{
    pairs pair;
    cout<<"Shruti Sharma\n21BCS9445\n";
    cout << "Enter the value of pair object: ";
    cin >> pair;
    cout << "Entered pair value is: " << pair << endl;
}