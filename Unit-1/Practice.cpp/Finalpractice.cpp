#include <iostream> 
using namespace std;
inline int smallest(int x, int y, int z);
inline int largest(int x, int y, int z);
int main() {
    int x, y, z;
    cout << "Enter three numbers: ";
    cin >> x >> y >> z;
    int large = largest(x, y, z);
    cout << "\nLargest number is: " << large;

    int small = smallest(x,y,z);
    cout << "\nSmallest number is: " << small;
    return 0;
}
inline int largest(int x, int y, int z){
    if (x > y && x > z)
        return x;
    else if(y > z)
        return y;
    else 
        return z;
}
inline int smallest(int x, int y, int z) {
    if(x < y && x < z)
        return x;
    else if(y < z)
        return y;
    else 
        return z;
}