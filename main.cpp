#include <iostream>
#include"Admin.h"
using namespace std;

int main()
{
    cout << "This is a banking system\n";
    
    try
    {
        Admin a1(1 ,"doooo","123456798",2000);
        cout << a1.getName()<< endl;
        cout << a1.getPassword()<< endl;
        cout << a1.getSalary()<< endl;
    }
    catch(exception e)
    {
        cout << "salary not valid\n";
    }
    
}