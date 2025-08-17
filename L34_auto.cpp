#include <iostream>
#include <vector>
#include <unordered_map>


std::string GetName() {
    return "John";
}

class Device {};

class DeviceManager {
    private:
        std::unordered_map<std::string, std::vector<Device*>> m_devices;
    public:
        const std::unordered_map<std::string, std::vector<Device*>>& GetDevices() const {
            return m_devices;
        }
};


int main() {   
    
    auto name = GetName();

    if(!name.empty()) {
        std::cout << "Hello, " << name << "!" << std::endl;
    }

    std::vector<std::string> names;
    names.push_back("John");
    names.push_back("Mary");
    names.push_back("Peter");

    for(auto it = names.begin(); it != names.end(); it++) {
        std::cout << *it << std::endl;
    }

    DeviceManager dm;
    const std::unordered_map<std::string, std::vector<Device*>>& devices = dm.GetDevices();
    //const auto& devices = dm.GetDevices();

   
    return 0;

}

