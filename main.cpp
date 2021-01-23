#include <iostream>
#include <string>
#include "person.h"

using namespace std;

int main(int argc, char* args[]){
    Person* person = new Person("Fakher Halim");
    cout << "Hello " << person->getName() << endl;
    delete person;
    return 0;
}