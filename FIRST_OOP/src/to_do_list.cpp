#include "to_do_list.h"
#include <iostream>

//Constructure
TASK::TASK(std::string name, std::string date, size_t priority)
        :name{name}, date{date}, priority{priority}{
    //std::cout << "Hello from constructure TASK" << std::endl;
}
//Destructure
TASK::~TASK(){
    //std::cout << "Hello from destructure TASK" << std::endl;
}

/////////////////////////////////////////////////////////////////////
// ADD
/////////////////////////////////////////////////////////////////////
bool TODO::TD_ADD(std::string name, std::string date, size_t priority){
    for (TASK &obj_vec : TODO_vec) {
        if (obj_vec.get_name() == name) {
            std::cout << "This already here \n";
            return false;
        }
    }
    TASK temp {name, date, priority};
    TODO_vec.push_back(temp);
    std::cout << "You add -> \n";
    std::cout << "\t name: " << name << "\n";
    std::cout << "\t date: " << date << "\n";
    std::cout << "\t priority: " << priority << "\n";
    return true;
}
/////////////////////////////////////////////////////////////////////
// EDIT
/////////////////////////////////////////////////////////////////////
bool TODO::TD_EDIT(std::string name, std::string date, size_t priority){
    for (TASK &obj_vec : TODO_vec) {
        if (obj_vec.get_name() == name) {

            std::cout << "You edit -> \n";
            std::cout << "\t name: " << obj_vec.get_name() << "\n";
            std::cout << "\t date: " << obj_vec.get_date() << "\n";
            std::cout << "\t priority: " << obj_vec.get_priority() << "\n";

            obj_vec.edit_date(date);
            obj_vec.edit_priority(priority);

            std::cout << "to -> \n";
            std::cout << "\t date: " << obj_vec.get_date() << "\n";
            std::cout << "\t priority: " << obj_vec.get_priority() << "\n";
            return false;
        }
        
    }
    std::cout << "Nothing to edit \n";
    return true;
}
/////////////////////////////////////////////////////////////////////
// DELETE
/////////////////////////////////////////////////////////////////////
bool TODO::TD_DELETE(std::string name){
    int i{0};
    for(TASK &obj_vec:TODO_vec){
         if (obj_vec.get_name() == name) {

            std::cout << "You delete -> \n";
            std::cout << "\t name: " << obj_vec.get_name() << "\n";
            std::cout << "\t date: " << obj_vec.get_date() << "\n";
            std::cout << "\t priority: " << obj_vec.get_priority() << "\n";
            std::cout << "In the position > " << i << "\n";

            TODO_vec.erase(TODO_vec.begin() + i);
            return true;
         }
        i++;
    }
    std::cout << "Nothing to delete \n";
    return false;
}
/////////////////////////////////////////////////////////////////////
// Display
/////////////////////////////////////////////////////////////////////
bool TODO::TD_DISPLAY(std::string name){
    for (TASK &obj_vec : TODO_vec) {
        //std::cout << obj_vec.get_name() << std::endl;
        if (obj_vec.get_name() == name) {
            std::cout << "You display -> \n";
            std::cout << "\t name: " << obj_vec.get_name() << "\n";
            std::cout << "\t date: " << obj_vec.get_date() << "\n";
            std::cout << "\t priority: " << obj_vec.get_priority() << "\n";
            return false;
        }
    }
    std::cout << "Nothing to display \n";
    return true;
}