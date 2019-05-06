#include "Task.h"
Task::Task()
{
    Date a;
    description = "";
};
Task:: ~Task()
{
    a.~Date();
    description.clear();
};