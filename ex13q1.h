// Author: Rehaan Sharma
// Header file for Lab 13, Question 1, Lab Section D07
// Date: 11/28/2018

#ifndef DISJOINT_SET_H
#define DISJOINT_SET_H

#define MAX_STUDENTS 2000000    // the Max number of students as given 
#define MAX_LINES 3000000       // Maximum number of lines we casn adjust it tho

int parent[MAX_STUDENTS + 1];  //array used in my program
//  to initialize sets
void initializeSets();

// to find the student id  of a given student
int findSet(int student);

// Function to perform union of two sets )
void unionSets(int student1, int student2);

// Main function for testing or execution taking command line arguments
int main(int argc, char *argv[]);

#endif
