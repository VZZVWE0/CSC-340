#pragma once
/* 
* 
* Design Doc:
* -------------Problem analysis and algorithm design------------
* 
* What's the input data of this problem?   
* 
*	The input of this program is the number of students who are not in a group.
*	Additionally another input in the names of the students.
* 
* What's the output data of this problem? 
* 
*	The output of this program is the students divided into randomly generated groups
*	with repsect to the section they are in.
* 
* 
* List 3 or more sample inputs  and their corresponding output. 
* 
*	Input1: 6 
*	Input1: A, B, C, D, E, F
* 
*	Input2: 5
*	Input2: G, H, I, J, K
* 
*	Output1: Group 1: B, E, D
*			 Group 2: F, C, A
* 
*	Output2: Group 1: I, G, K
*			 Group 2: H, J
* 
* 
* What's your algorithm (described in pseudocode)?
* 
*	The algorithm or the process that I chose is so create function that will take the inputs
*	and when called will scramble the names and put them into group with a maximum of 3 students.
* 
*	I will ask input from the user into 2 different sections.
*	It will take the number of students and ask for the names.
* 
*	Then I will create an object for each section using a tuple that will hold the elements in pairs
*	with their repsective section so that students in a different section will not be able to 
*	be put in a group together.
* 
*	The function to randomize the name will called and should shuffle the order.
* 
*	Then finally print out the list of groups with the students that are populated in them.
*	
*	
* Using the above sample inputs, does your algorithm produce the expected outputs?
* 
*	There are things that I could change but it works closest and the best to how I 
*	initially wanted it to work. I could have done it by asking for the student name as an input and
*	the section the student was in.
* 
* What's the time complexity of your algorithm?  
* 
*	O(n)
* 
* 
* 
* 
*/
