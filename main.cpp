#include <iostream>
#include "Admin.h"
#include "validate.h"
#include "Person.h"
#include "Employee.h"

using namespace std;

int main()
{
    cout << "Welcome TO the National Bank of Aliens\n";

    try
    {
        
        Admin a1("1", "doooo", "123456798", "Male", 30, "securePass123", 2000, 50000.0);
        
        
        a1.Display();

    }
    catch (const exception& e) // Corrected exception handling
    {
        cout << "Error: " << e.what() << endl;
    }

    return 0;
}
