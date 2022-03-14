#include<iostream>
using namespace std;
class construct 
{
    private:
    double x, y;
    public:
    construct (double px, double py)
    {
        x = px; y = py;
        
    }
};
int main (void)
{
    construct b = construct (5, 6);
}