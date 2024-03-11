#include <iostream>
#include <string>

class Person {
public:
    std::string name;
    int age;

    Person(const std::string& n, int a) : name(n), age(a) {}
};

int main() {
    Person person("John Doe", 25);
    
    std::cout << "Name: " << person.name << std::endl;
    std::cout << "Age: " << person.age << std::endl;

    return 0;
}