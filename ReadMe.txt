Step 1:
Compile using gcc pre.c -o pre
Step 2: ./pre
Step3:

The first program "pre.c" should read in a list of U.S. states and their populations. 
You can google to find the information.  To be simple, you can use the abbreviation for 
each state. We assume there are at most 10 states in the list. Enter the inputs through 
the keyboard and display the output on the screen. The input ends when an EOF (generated 
by Ctrl-D) is encountered. The output of the program should display the states whose population 
is above 10 million.
 
For example, the following are the inputs to "pre.c". The unit is million.

TX 26 
NC 9
MD 5
NY 19
CA 38 
Ctrl-D (press the keys to terminate the inputs.)
         
Then "pre.c" produces the output: 
TX
NY
CA


Step 4: compile and run sort using step1-2 but for sort
Step 5:


The second program "sort.c" reads in a list of state abbreviations from stdin and 
display them in alphabetical order on the screen. Assume there are no more than 10 states 
and the sequence is read until you press Ctrl-D which generates an EOF. 

If the inputs are:

TX
NY
CA
Ctrl-D (press the keys to terminate the inputs.)

The outputs should be:

CA
NY
TX

Step 6: Opens parent child pipe do the following


To compile use

gcc prog3.c -o prog3
To run use
./prog3 pwd 
