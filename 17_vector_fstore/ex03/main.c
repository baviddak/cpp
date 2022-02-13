// Do not use any standard lib functions
// #include <iostream>
// #include <map>
#include <stdio.h>
#include <string.h>

void to_lower(char *s){
    char upper[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
    char lower[] = "abcdefghijklmnopqrstuvwxyz";
    char *p = s;
    char update_c;
    int size = 0;

    // printf("Size is %d\n", sizeof(s));


    while(*p != '\0'){
        size++;
        p++;
    }

    for(int j=0; j<size; j++){
        // printf("%c\n", *p);
        // printf("Inside loop\n");
        for(int i=0;i<26; i++){
            // printf("%c\n", s[j]);

            if(s[j] == upper[i]){
                // printf("Inside if\n");
                // printf("%c\n", lower[i]);
                update_c = lower[i];
                printf("New letter: %c\n", update_c);
            }
        }
        printf("end\n");
        s[j] = update_c;
    }
}

int main(){
    char *my_string = "Hello this is a String with Upper letters and lower letters!";
    

    // std::cout << "Old String: " << my_string << "\n";
    printf("Old is: %s\n", my_string);
    to_lower(my_string);
    // std::cout << "New String: " << my_string << "\n";
    printf("New is: %s\n", my_string);
    return 0;
}