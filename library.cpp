#include "library.h"
#include <iostream>

char DecryptChar(char a, int key){
    if (std::ispunct(a)){
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

char EncryptChar(char a, int key){
    if (std::ispunct(a)){
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

std::string Encrypt(std::string text, int key) {
    std::string encrypted;
    for (int i = 0; i < text.length(); i++) {
        encrypted += EncryptChar(text[i], key);
    }
    return encrypted;
}


std::string Decrypt(std::string text, int key) {
    std::string encrypted;
    for (int i = 0; i < text.length(); i++) {
        encrypted += DecryptChar(text[i], key);
    }
    return encrypted;
}
