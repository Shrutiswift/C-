#include <iostream>
using namespace std;
class student {
    int x;
    public:
            int area(float length){
                cout << length*length;
            }
            int area(int breadth){
                cout << breadth*breadth;
            }
            
        
};
int main() {
    student object;
    float length ;
    int breadth;
    cout << "Length: ";
    cin >>length;
    cout << "Breadth: ";
    cin >>breadth;

    cout << object.area(length) << "\n"; 
    cout << object.area(breadth) << "\n";
    
    int area = length*breadth;
    cout << "Area: " <<  area << "\n";
    return 0;
}