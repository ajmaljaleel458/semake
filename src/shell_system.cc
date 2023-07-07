#include <string>

std::string execute_command(std::string command)
{
    char buffer[128];
    std::string execution_output = "";
    FILE* pipe = popen(command.c_str(), "r");
    if (!pipe) 
        return "popen failed";
    while (!feof(pipe)) {
      // use buffer to read and add to result
        if (fgets(buffer, 128, pipe) != NULL)
         execution_output += buffer;
    }
   pclose(pipe);
   return execution_output;
}