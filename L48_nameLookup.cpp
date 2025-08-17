/* 
限定 名是出现在作用域解析运算符 :: 右侧的名称 (另见 限定标识符)。 限定名可以指代

    类成员 (包括静态和非静态函数、类型、模板等)，
    命名空间成员 (包括另一个命名空间)，
    枚举器。

如果 :: 的左侧没有任何内容，则查找仅考虑 全局命名空间作用域 中的声明。 这使得即使名称被局部声明隐藏，也可以引用这些名称

*/

#include <iostream>

namespace M {
    const char* fail = "fail\n";
}

using M::fail;

namespace N {
    const char* ok = "ok\n";
}

using namespace N;


int main() {

    struct std {};

    std::cout << ::fail; //Error
    ::std::cout << ::ok; //ok

    return 0;

}