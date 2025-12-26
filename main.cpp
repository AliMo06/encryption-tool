#include <iostream>
#include "aes.h"
#include "caesar.h"
#include "rsa.h"

int main() {
    int userInput = 0;
    while(userInput != 0){
        //TODO: create input handling for user to select if they want jto encrypt/decrypt and with which algorithim
    }
    aes("hello.txt");
    caesar("hello.txt");
    rsa("hello.txt");
}