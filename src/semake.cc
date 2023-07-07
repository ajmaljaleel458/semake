#include <iostream>

#include <json/json.h>
#include <fstream>

#include "shell_system.h"

void get_data_from_user(void)
{
    Json::Value config_data;
    // which c++ compiler goint to be used for this project
    // which c++ standard is using
    // 
}

void init_project(void)
{
    get_data_from_user();
}

int main(int cmdc, char* cmds[])
{
    if(cmdc == 1)
    {
        std::cout << "Not implemented.." << std::endl;
    }
    else if (cmdc == 2)
    {
        if (!strcmp(cmds[1], "init"))
        {
            init_project();
            std::cout << execute_command("pwd") << std::endl;       
        }
        else
        {
            std::cout << "Unknown command.." << std::endl;
        }
    }
    else
    {
        std::cout << "Not implemented.." << std::endl;
    }
} // main