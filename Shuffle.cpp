#include<iostream>
#include<string>
#include<stdexcept>
#include "List.h"

void perfect_shuffle(List &l){
    List left, right;
    l.moveFront();
    for(int i = 0; i < l.length(); i++){
        if (i < l.length()/2){
            left.insertBefore(l.moveNext());
        }else{
            right.insertBefore(l.moveNext());
        }
    }

    //std::cout << left;
    //std::cout << right;

    int counter = 0;

    l.clear();
    left.moveFront();
    right.moveFront();
    while(counter < (left.length() + right.length())){
        l.insertBefore(right.moveNext());
        counter++;
        if(counter < (left.length() + right.length())){
            l.insertBefore(left.moveNext());
            counter++;
        }
    }

    //std::cout << l;

}

int main(int argc, char* argv[]){
    if(argc != 2){
        std::cerr << "Please enter 1 number as an argument. Ex: Shuffle 2\n";
        return 1;
    }
    int size  = -1;
    try {
        size = std::stoi(argv[1]);
    }
    catch (std::invalid_argument const &){
        std::cout << "A number was not entered, please enter a number >= 0\n";
        return 1;
    }
    if(size < 0) {
        std::cout << "Please enter a valid number that is >=0\n";
        return 1;
    }


    List deck;
    List control;
    std::cout << "deck size\tshuffle count\n";
    std::cout << "------------------------------\n";

    for (int i = 1; i <= size; i++){
        deck.moveBack();
        deck.insertBefore(i);
        control.insertBefore(i);
        int shuffles = 1;
        perfect_shuffle(deck);
        while(!(deck.equals(control))){
            shuffles++;
            perfect_shuffle(deck);
        }
        std::cout << std::to_string(i) + "\t\t" + std::to_string(shuffles) + "\n";

    }

}

