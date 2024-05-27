#include<iostream>

int main(){
    char grade;
    std::cout << "Enter your grade to see your marks: ";
    std::cin >> grade;

    // switch syntax-->
    /*switch (expression) {
    case value1:
        // code block
        break;
    case value2:
        // code block
        break;
    // more cases as needed
    default:(optional)
        // code block for default case(if no cases matches the value)*/

   switch(grade){
        // Case 'A' indicates if the grade is 'A'
        case 'A' :
            // If grade is 'A', print the corresponding marks range
            std::cout << "Your marks will be in range of 90-100" << "\n" ;
            // Break out of the switch statement to avoid falling through to the next case
            break;

        // Similarly, cases 'B', 'C', 'D', and 'E' check for respective grades
        case 'B' :
            std::cout << "Your marks will be in range of 80-90" << "\n" ;
            break;

        case 'C' :
            std::cout << "Your marks will be in range of 70-60" << "\n" ;
            break;

        case 'D' :
            std::cout << "Your marks will be in range of 60-50" << "\n" ;
            break;

        case 'E' :
            std::cout << "Your marks will be in range of 0-50" << "\n" ;
            break;
        
        // Default case executes if none of the above cases match
        default :
            std::cout << "Invalid input" << "\n";
    }

    return 0;
}