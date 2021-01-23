#include <iostream>
#include <string>
#include "person.h"

using namespace std;
//First run <CTRL><SHIFT>B to build after any change. Then <F5> to run with debugging
int main(int argc, char* args[]){
    Person* person = new Person("Fakher Halim");
    cout << "Hello Fakher, " << person->getName() << endl;
    delete person;
    return 0;
}