#include <iostream>

class Entity {
    private:
        std::string m_Name;
        mutable int m_CalledCount = 0; //用于统计GetName()函数被调用的次数
    public:
        const std::string& GetName() const {
            m_CalledCount++;
            return m_Name;
        }
};

int main() {
    Entity e;
    e.GetName();

    //another way to use mutable
    int x = 8;
    auto f = [=]() mutable {
        x++;
        std::cout << x << std::endl;
    };

    f();

}