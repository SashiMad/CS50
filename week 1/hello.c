#include <stdio.h>
#include <cs50.h>

int main(void)
{
    //print hello + user's name
    string name = get_string("What's your name? ");
    printf("hello, %s\n", name);
}