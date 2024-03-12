# Week 7: Assignment💡

<h1>Question 1</h1>

**Deletion from Doubly linked list**

In this question, you have to write code to remove the first node in a doubly linked list containing a specified number. The code to create the linked list is already given.

The main() function calls a function removeData(head,tail,n) to remove the first node containing data n from the linked list.
Complete the code by writing the missing function. You can also write additional functions which you may need.

**Input Format**

You will be given a positive number N in the first line.
This will be followed by a line containing N integers.
This will be followed by an integer M.

**Output format**

The output will be the list after deleting M.

<h1>Question 2</h1>

**Priority Queue using Linked List**

In this question, a  linked list is partially implemented where each element in the linked list is a structure of the following format:

struct node{
	int id;
	int priority;
	struct node *next;
}; 

The field priority is a positive integer, which denotes the priority of an element inside the list.
The higher the value of integer in this field, the higher priority.

You have to complete the C code for performing the following operations in the linked list:
Create and return a node e with given id and value val
struct node * create_node(int id, int val);

Add an node e to the beginning of the list. Return the new list.
struct node * append(struct node * list, struct node * e);

Search for a node e with id inside the list. Return a pointer to e  if found, else return NULL
struct node * search(struct node * list, int id); 

Change the value of an element with given id (if found), in the list to the new value val. 
void change_priority(struct node * list, int id, int val) ;

Extract the element in the list with maximum priority. Return pointer to new list.
struct node* extract_max(struct node * list);
After extract_max, the element having the max priority is removed from the list. Extract max also prints the id of the removed element in the following format "Max: id".

Note: You can assume that the priority of each element in the list is unique.

Note: The code for manipulating the input as well as output is given to you. You only have to write code for the incomplete functions.

**Input**

A set of lines, each lines containing a character representing the operation and its inputs.

The operation can be one of the following:
A <id> <val>
Add an node with id and val to the list, at the start of the list.

C <id> <val>
Change the priority field of the element with id to val.
If an element with this id is not found, do nothing.
 
S <id>
If an element with the id is in the list print the id and the priority and a newline. 
Else, print the id and -1 and a newline.

M
Extract the element in the list with maximum priority. Print the id of the element as "Max: id" 

E
End of input, exit from the program

**Output**

The output of search queries and extract max operations.
