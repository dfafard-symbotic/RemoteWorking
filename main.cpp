#include <iostream>
#include "person.hpp"

using std::cout;
using std::endl;

int main()
{

    cout << "List of our friends:\n\n";


    Person p1("Joe", "Bloggs");
    cout << "\t" << p1.ToString() << endl;

    Person p2("John", "Bloggs");
    cout << "\t" << p2.ToString() << endl;
	
    Person p3("Johnathan", "Bloggs");
    cout << "\t" << p3.ToString() << endl;
    
    cout << endl;

    return 0;
}
