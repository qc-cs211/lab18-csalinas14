#include <iostream>
using namespace std;
int main( ) {
    int b[3][2];
    cout<<"Array size: " << sizeof(b)<<endl;
    cout << "sizeof(int) = " << sizeof(int) << endl;

    cout<<"Pointer size: " << sizeof(b+0)<<endl;
    cout<<sizeof(*(b+0))<<endl;

    cout<<" b is: "<<b<<endl;
    cout<<" b+1 is: "<<b+1<<endl;

    cout<<" &b is: "<<&b<<endl;
    cout<<" &b+1 is: "<<&b+1<<endl<<endl;

    return 0;
}
