#include <stdio.h>
#include <string.h>

void remove_filename (char *);

int main(void)
{
    char url[100] = "http://www.knking.com/index.html";
    remove_filename(url);
    puts (url);
    return 0;
}

void remove_filename (char *url)
{
    while (*url)
        url++;
    while (*url != '/')
        url--;
    *url = '\0';
}