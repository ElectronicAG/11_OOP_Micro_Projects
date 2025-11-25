#ifndef TASK_H
#define TASK_H

#include <iostream>
#include <cstddef>
#include <string>

class TASK{
    //Private
    private:
        // Attributes
        std::string name{"None"};
        std::string date{"None"};
        std::size_t priority{0};
    public: 
        //Methods
        std::string get_name();
        bool edit_name(std::string &name);
        std::string get_date();
        bool edit_date(std::string &date);
        std::size_t get_priority();
        bool edit_priority(size_t &priority);

        //Constructure
        TASK(std::string name, std::string date, size_t priority);
        //Destructure
        ~TASK();
        
};

#endif
