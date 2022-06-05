#include "iostream"
using namespace std;
class TEMP{
    int x;
    public:
    TEMP();
    ~TEMP();
    void Show() const;
};
TEMP :: TEMP() {
    x = 50;
}
void TEMP :: Show()
const{
    cout << x;
}
int main(){
    TEMP obj;
    obj.Show();
    return 0;
}