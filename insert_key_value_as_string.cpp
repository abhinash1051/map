#include <iostream>
#include <map>
using namespace std;

int main() {
    map<string, int> m;

    m["abhi"] = 25;
    m["vansh"] = 30;
    m["Charlie"] = 35;
    m["Dave"] = 40;
    m["Eve"] = 45;

    std::cout << "Contents of the map:" << std::endl;
    for (auto it = m.begin(); it != m.end(); ++it) {
        std::cout << it->first << ": " << it->second << std::endl;
    }

    return 0;
}
