#include<iostream>

int main(){
    // foreach loop = loop that eases the traversal over an iterable data set
    // syntax = for (element_declaration : array_or_container) {
    // Loop body



    // Array of strings representing student names
    std::string students[]= {"saroj","atul","harshit"};

    // foreach loop to iterate over each student in the 'students' array
    // Note: The loop variable is named 'student' to avoid confusion with the array name
    for(std::string student : students ){
        std::cout<< student << '\n'; // Output each student's name
    }
    
    // Array of integers representing grades
    int grade[]= {52,84,84,65};

    // foreach loop to iterate over each grade in the 'grade' array
    // Note: The loop variable is named 'grade' to avoid confusion with the array name
    for(int grade : grade){
        std::cout<< grade<<'\n'; // Output each grade
    }

    return 0;
}
