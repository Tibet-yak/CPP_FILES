#include <iostream>
#include <string>

int main() {

    std::string sname = "Jackie";
    std::string* ptr = &sname;
    (*ptr)[0] = 'S'; // change the first character of the string pointed by ptr + 2
    std::cout << *ptr << std::endl;


    return 0;

}