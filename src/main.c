#include <stdio.h>

int main(int argc, char **argv) {
    if (argc != 2) {
        perror("Set correct arguments for the program.\n");
        return 1;
    }
}