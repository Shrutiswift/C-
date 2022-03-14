#include <iostream>
using namespace std;
class student
{
public:
    int sum(int x, int y);
};
inline int student::sum(int x, int y)
{
    return (x + y);
}
