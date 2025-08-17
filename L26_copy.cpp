#include <iostream>
#include <cstring>

class String {
    private:
        char* m_Buffer;
        unsigned int m_Size;
    public:
        String(const char* str) {
            m_Size = strlen(str);
            m_Buffer = new char[m_Size + 1];
            memcpy(m_Buffer, str, m_Size);
            m_Buffer[m_Size] = '\0';
        }

        ~String() {
            delete[] m_Buffer;
        }

        char& operator[](unsigned int index) 
        {
            return m_Buffer[index];
        }

        friend std::ostream& operator<<(std::ostream& stream, const String& string);

};

std::ostream& operator<<(std::ostream& stream, const String& string) {
    stream << string.m_Buffer;
    return stream;
}

int main() {
    String string = "Jack, Jill, and Jesse";
    String secondString = string;
    secondString[2] = 'b';

    std::cout << "Original string: " << string << std::endl;
    std::cout << "Copied string: " << secondString << std::endl;

    return 0;

}