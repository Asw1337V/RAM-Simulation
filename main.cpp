#include <iostream>
#include "dependencies.cpp"

using namespace std;

int main()
{
    List* obj = DynamicAllocation::onCreateList();
    List* ob = DynamicAllocation::onCreateList();

    cout << obj->identifier << " " << ob ->identifier <<endl;
    return 0;
}
