#include "library.h"
#include <iostream>

char Decrypt(char a, int key){
    if (std::ispunct(a)){
        return a;
    }
    if(a == ' '){
        return a;
    }
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

char Encrypt(char a, int key){
    if (std::ispunct(a)){
        return a;
    }
    if(a == ' '){
        return a;
    }
    a = tolower(a);
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
