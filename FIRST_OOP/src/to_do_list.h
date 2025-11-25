#ifndef TODO_H
#define TODO_H

#include <iostream>
#include <vector>
#include "TASK.h"



class TODO{
    private:
        std::vector<TASK> TODO_vec;
    public:
        bool TD_ADD(std::string name, std::string date, size_t priority);
        bool TD_EDIT(std::string name, std::string date, size_t priority);
        bool TD_DELETE(std::string name);
        bool TD_DISPLAY(std::string name);
};

#endif