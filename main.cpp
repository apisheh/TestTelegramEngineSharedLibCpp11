#include <iostream>
#include "ClassInit.h"

int main() {
    std::cout << "Hello, World!" << std::endl;
    std::unique_ptr<ClassInit> engine = ClassInit::init();
    while(true){};
    return 0;
}
