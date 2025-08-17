#include <iostream>

static int s_level = 15;
static int s_speed = 10;

int main() {

/*     if(s_level > 5)
        s_speed = 20;
    else
        s_speed = 10; */

    //s_speed = s_level > 5 ? 20 : 10;

    //三元运算符嵌套,少用

    s_speed = s_level > 5 ? s_level > 10 ? 50 : 30 : 5;

    std::cout << "Speed: " << s_speed << std::endl;


}