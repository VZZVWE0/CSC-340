/*
/ Desc: Porgram will take student who are not in a group and assing them randomly into a group of 3
/ Contributing members: Anna Marie Felipe
/ Date: 10-01-2023
/
*/

#include <iostream> // Standard Library to handle input/output
#include <vector>   // Library to allow working with vectors
#include <ctime>    // Library to handle time with random 
#include <random>   // Library to help us generate random 
#include <tuple>    // Library to use tuple


template <typename T>
void shuffle(std::vector<T>& v) { //Shuffle to implement the random permutation feature of a vector
    std::mt19937 gen(static_cast<unsigned>(std::time(nullptr))); // Using the Mersenne Twister 19937 generator to randomize
    std::shuffle(v.begin(), v.end(), gen);
}

int main() {

    
    int studentSec1, studentSec2; // Initialize studentSec1, studentSec2
    std::cout << "Number of students in Section 1 not yet in a group: ";
    std::cin >> studentSec1;                                                // Prompts user to enter how many students are not in in a group yet.
    std::cout << "Number of students in Section 2 not yet in a group: ";
    std::cin >> studentSec2;

    // Create vectors of tuples to hold the elements repsectively 
    std::vector<std::tuple<std::string, int>> section1Students;
    std::vector<std::tuple<std::string, int>> section2Students;

    
    std::cout << "\nEnter student names for CSC-340-01:" << std::endl;
    // Using for-loop to populate list of students in section 1
    for (int i = 0; i < studentSec1; ++i) {
        std::string name;
        std::cin >> name;
        section1Students.push_back(std::make_tuple(name, 1)); // 1 represents Section 1
    }

    std::cout << "\nEnter student names for CSC-340-02:" << std::endl;
    // Using for-loop to populate list of students in section 2
    for (int i = 0; i < studentSec2; ++i) {
        std::string name;
        std::cin >> name;
        section2Students.push_back(std::make_tuple(name, 2)); // 2 represents Section 2
    }

    // Call the fucntion to randomly assing students to a group in their respective section
    shuffle(section1Students);
    shuffle(section2Students);

    std::cout << "\nRandomly assigned groups for CSC-340-01:" << std::endl;
    int groupNumber = 1;  // Initilzie group number it 1
    int maxGroupSize = 3; // To set maximum of group size to 3

    for (int i = 0; i < section1Students.size(); i += maxGroupSize) {
        std::cout << "Group " << groupNumber++ << ": ";
        for (int j = i; j < i + maxGroupSize && j < section1Students.size(); ++j) {   // Nested for-loop to display randomly assinged group in Section 1
            std::string name;
            int section;
            std::tie(name, section) = section1Students[j]; // Creates seperate objects for objects in a tuple
            std::cout << name << " ";
        }
        std::cout << std::endl;
    }

    groupNumber = 1; // Initialized group number to 1 again so it does not continue from Section 1

    std::cout << "\nRandomly assigned groups for CSC-340-02:" << std::endl;

    for (int i = 0; i < section2Students.size(); i += maxGroupSize) {
        std::cout << "Group " << groupNumber++ << ": ";
        for (int j = i; j < i + maxGroupSize && j < section2Students.size(); ++j) {  // Nested for-loop to displays randomly assigned group in Section 2
            std::string name;
            int section;
            std::tie(name, section) = section2Students[j];  // Creates seperate objects for objects in a tuple
            std::cout << name << " ";
        }
        std::cout << std::endl;
    }

    return 0;
}