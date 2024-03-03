# Week 7: Assignment💡

<h1>Question 1</h1>

**CGPA calculation**

You are the new tech administrator of a college. The college offers four courses listed below.

|Course name   |    Course code    |      Credits  |
| :---:        | :---:             | :---:         |
|Science       |   1001            |            10 |
|Maths         |     1002          |             5 |
|Literature    |     1003          |             5 |
|Philosophy    |  1004             |             1 |
 
Each student has to take exactly three courses and she gets a grade from (0 - 10)
on the course, depending on her performance.

The CGPA of a student is calculated as  cgpa= $\sum_{i=1}^3 credits_i∗grade_i \over \sum_{i=1}^3 creditsi$

That is for each course the student took, you multiply the grade obtained with the credits of the course.

Sum this value over each course, and divide it by the total credits of all courses the student took.

The previous administrator wrote an incomplete C program for a CGPA calculator, using structures.

Complete the C code for the program, by writing the code for the function 

float calculate_gpa(student s);

This function takes as an input the struct student variable of a student s, which contains all the information
about the courses the student s took and her grades in the courses.

You have to return the total cgpa of the student as the output.


**Input**

The first line contains the number of students n.

The next n lines contains the information on the students in the following order:

Name  CourseCode1 Marks1 CourseCode2 Marks2 CourseCode3 Marks3

**Output**

The names and CGPAs (to a single decimal point) of students, line by line in the following format:

Name CGPA


<h1>Question 2</h1>


**Linked List Operations**

In this question, a  linked list is partially implemented where each element in the linked list

is a structure of the following format:

struct node{

	int id;
 
	int priority;
 
	struct node *next;
 
}; 


The field priority is a positive integer, which denotes the priority of an element inside the list.

You have to complete the C code for performing the following operations in the linked list:

Create and return a node e with given id and value val

struct node * create_node(int id, int val);

Add an node e to the beginning of the list. Return the new list.
struct node * append(struct node * list, struct node * e);

Search for a node e with id inside the list. Return a pointer to e  if found, else return NULL

struct node * search(struct node * list, int id); 

Change the value of an element with given id (if found), in the list to the new value val. 

void change_priority(struct node * list, int id, int val) ;

Note: The code for manipulating the input as well as output is given to you. You only have to write code for the incomplete functions.

Input
-------

AA set of lines, each lines containing a character representing the operation and its inputs.

The operation can be one of the following:

A <id> <val>

Add an node with id and val to the list, at the start of the list.


C <id> <val>

Change the priority field of the element with id to val.

If an element with this id is not found, do nothing.
 
S <id>

If an element with the id is in the list print the id and the priority and a newline. 

Else, print the id and -1 and a newline.

E

End of input, exit from the program

Output
---------
The output of search queries.


