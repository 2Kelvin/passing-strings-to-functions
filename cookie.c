#include <stdio.h>

int main() {
    char quote[] = "Cookies are the sweetest!";
    printf("The quote string is stored at %p\n", quote);
    fortuneCookie(quote);

    char s[] = "How big is it?";
    printf("the size is %i\n", sizeof(s));

    return 0;
}

void fortuneCookie(char msg[]) {
    printf("The string message reads: %s\n", msg);
    printf("msg occupies %i bytes\n", sizeof(msg));
}