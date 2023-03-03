#include <stdio.h>

int main() {
    char quote[] = "Cookies are the sweetest!";
    fortuneCookie(quote);
    
    return 0;
}

void fortuneCookie(char msg[]) {
    printf("The string message reads: %s\n", msg);
    printf("msg occupies %i bytes\n", sizeof(msg));
}