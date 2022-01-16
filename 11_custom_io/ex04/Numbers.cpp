#include "Numbers.h"

Numbers::Numbers(const string& in_str){
    // string base_test = in_str.substr(0,1); 

    if(in_str.substr(0,1).compare("0x") == 0){
        base = Notation::Hexadecimal;

    }else if(in_str.substr(0,0).compare("0") == 0){
        base = Notation::Octal;

    }else{
        base = Notation::Decimal;
    }

}

Numbers::~Numbers(){
}

const string& Numbers::getBase(){

}

int Numbers::getValue(){

}