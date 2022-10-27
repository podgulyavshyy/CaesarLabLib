#include "library.h"
#include <iostream>

char DecryptChar(char a, int key){
    a = tolower(a);
    const std::string albet{"abcdefghijklmnopqrstuvwxyz"};
    int i = 0;
    while(a != albet[i]){
        i++;
    }
    key = i - key;
    while(key < 0){
        key += 25;
    }
    while(key > 25){
        key -= 25;
    }
    return albet[key];
}

char EncryptChar(char a, int key){
    const std::string albet{"abcdefghijklmnopqrstuvwxyz"};
    int i = 0;
    while(a != albet[i]){
        i++;
    }
    key = key + i;
    while(key < 0){
        key += 25;
    }
    while(key > 25){
        key -= 25;
    }
    return albet[key];
}