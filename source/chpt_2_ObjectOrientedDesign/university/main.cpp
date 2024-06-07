#include "Person.h"
#include "Student.h"
#include <iostream>

int main(int argc, char const *argv[]) {
    Person person("Jim Person", "12-231");
    person.print();

    Student student("Jim Student", "13-576", "Chef");
    student.print();
    
    return 0;
}
