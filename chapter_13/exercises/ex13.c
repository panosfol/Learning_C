#include <stdio.h>
#include <string.h>

void build_index_url (const char *domain, char *index_url);

int main(void)
{
    char *domain = "malakas.com";
    char index_url [100];

    build_index_url(domain, index_url);
    puts (index_url);
    return 0;
}

void build_index_url (const char *domain, char *index_url)
{
    char beginning [100] = "http://www.", end [100] = "/index.html";

    strcat (beginning, domain);
    strcat (beginning, end);
    strcpy (index_url, beginning);
}