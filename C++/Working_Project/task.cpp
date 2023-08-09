#include "task.h"

Task::Task(std::string title, std::string description) {
    this->title = title;
    this->description = description;
}

void Task::setTitle(std::string title) {
    this->title = title;
}

void Task::setDescription(std::string description) {
    this->description = description;
}

std::string Task::getTitle() {
    return title;
}

std::string Task::getDescription() {
    return description; 
}

Task::~Task() {
    // Destructor kodu buraya eklenebilir
}
