/**
 * CS V15 Data Structures and Algorithms
 * CRN: 70342
 * Assignment: ex04-mergesort
 *
 * Statement of code ownership: I hereby state that I have written all of this
 * code and I have not copied this code from any other person or source.
 *
 * Got this from Alden Smith
 * author Efrain Santiago
 */

#include <iostream>
#include "mergesort.h"
#include <string>

using edu::vcccd::vc::csv15::mergesort;

int main(int argc, char *argv[]) {
    int array[] = { 9, 10, 8, 1, 7, 2, 6, 3, 5, 4 };
    mergesort(array, 10);
    for (int i : array) {
        std::cout << i << ", ";
    }
    std::cout << std::endl;

    std::string strArray[] = { "Valley", "Raid", "Randy", "Far", "Zebra",  "Pho", "Right",  "Town", "Allen", "Yawn", };
    mergesort(strArray, 10);
    for (const auto &i : strArray) {
        std::cout << i << ", ";
    }
    std::cout << std::endl;
}