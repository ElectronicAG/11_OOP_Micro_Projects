// TO_DO LIST BY Alan Gomez.
// 1. To-Do List Application
// Project Idea: Create a to-do list application where users can add, edit, and delete tasks. Each task can be represented as an object with attributes like task name, due date, and priority.
#include "to_do_list.h"
#include <iostream>

using namespace std;

int main()
{

    TODO TODO_LIST;

    TODO_LIST.TD_ADD("Ejemplo OOP 1", "Hoy", 0);
    TODO_LIST.TD_ADD("Ejemplo OOP 2", "Ayer", 5);
    TODO_LIST.TD_ADD("Ejemplo OOP 3", "Mañana", 3);
    TODO_LIST.TD_ADD("Ejemplo OOP 4", "Lunes", 999);

    cout << "------------------------------------------------------------\n";

    TODO_LIST.TD_DISPLAY("Ejemplo OOP 1");
    TODO_LIST.TD_DISPLAY("Ejemplo OOP 2");
    TODO_LIST.TD_DISPLAY("Ejemplo OOP 3");
    TODO_LIST.TD_DISPLAY("Ejemplo OOP 4");

    cout << "------------------------------------------------------------\n";

    TODO_LIST.TD_ADD("Ejemplo OOP 5", "Hoy", 502);
    TODO_LIST.TD_DISPLAY("Ejemplo OOP 5");

    cout << "------------------------------------------------------------\n";

    TODO_LIST.TD_DISPLAY("Ejemplo OOP 2");
    TODO_LIST.TD_EDIT("Ejemplo OOP 2", "Martes", 0);
    TODO_LIST.TD_DISPLAY("Ejemplo OOP 2");

    cout << "------------------------------------------------------------\n";

    TODO_LIST.TD_DISPLAY("Ejemplo OOP 4");
    TODO_LIST.TD_DELETE("Ejemplo OOP 4");
    TODO_LIST.TD_DISPLAY("Ejemplo OOP 4");

    cout << "Finish the example";

}
