#include <iostream>
#include <tuple>
#include <string>


// return many values
std::tuple<std::string , int> CreatePerson() {
    return {"John", 25};
}

/* struct Person {
    std::string name;
    int age;
    float height;
    float weight;
    enum Sex {Male, Female} sex;
}; */



int main() {

    std::cout << "Creating a person..." << std::endl;
    auto [name, age] = CreatePerson();
    std::cout << "Name: " << name << std::endl;
    std::cout << "Age: " << age << std::endl;
    std::cout << "---------------------------------" << std::endl;

    //

/*     Person newPerson;
    newPerson.name = "John";
    newPerson.age = 25;
    newPerson.height = 1.8;
    newPerson.weight = 70.0;
    newPerson.sex = Person::Male;

    std::cout << "Name: " << newPerson.name << std::endl;    
    std::cout << "Age: " << newPerson.age << std::endl;    
    std::cout << "Height: " << newPerson.height << std::endl;        
    std::cout << "Weight: " << newPerson.weight << std::endl;            
    std::cout << "Sex: " << (newPerson.sex == Person::Male ? "Male" : "Female") << std::endl;

 */
    return 0;


}