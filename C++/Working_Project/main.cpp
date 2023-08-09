#include <iostream>
#include "task.h"

int main(int argc, char** argv) {
    Task task1("First Day ", " Today I'll do some examples about C++..");
    
    std::cout << "Title  " << task1.getTitle() << std::endl;
    std::cout << "Description: " << task1.getDescription() << std::endl;

    return 0;
}
