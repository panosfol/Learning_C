#include <stdio.h>
#include <string.h>

struct {
    char *cmd_name;
    void (*cmd_pointers)();
} file_cmd[]=
{{"new",        new_cmd},
 {"open",       open_cmd},
 {"close",      close_cmd},
 {"close all",  close_all_cmd},
 {"save",       save_cmd},
 {"save as",    save_as_cmd},
 {"save all",   save_all_cmd},
 {"printf",     print_cmd},
 {"exit",       exit_cmd}
};


int main() {
    return 0;
}

void search (char *str) {
    
    for (int i = 0; i < 8; i++) {
        if (strcmp (str, file_cmd[i].cmd_name) == 0) {
            file_cmd[i].cmd_pointers();
        }
    }
}