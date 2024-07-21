#include<iostream>

int main(){

    // Array of strings representing student names
    std::string students[] = {"Saroj","Atul","Harshit","Raushan"};

    // Loop through each element of the 'students' array
    for(int i=0; i<sizeof(students)/sizeof(std::string) ; i++){
        std::cout<< students[i]<<'\n'; // Output each student's name
    }

    // Array of characters representing grades
    char grade[] = {'A','B','C','D'};

    // Loop through each element of the 'grade' array
    for(int i=0; i<sizeof(grade)/sizeof(char) ; i++){
        std::cout<< grade[i]<<'\n'; // Output each grade
    }

    return 0;
}
