#include "../includes/ping_utils.h"

int main(int argc, char **argv) {
    if (argc >= 2) {
        printf("%d %s\n", argc, argv[1]);
    }
    
    return 0;
}