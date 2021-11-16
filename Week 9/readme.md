# Magic square problem

A magic square matrix is a square array of numbers, usually positive integers, if the sums of the numbers in each row, each column, and both main diagonals are the same

# magic_square.h

This is the header file which contains the logic to check whether a matrix is magic square or not. That is it sums up every row, column and diagonals and checks if its all the same.

# magicsquare_ip.c

We import the magic_square.h code in this code and the main function accepts a matrix input from the user and then calls on the magicsquare function to check if it satisfies all the conditions. In the end it prints whether its a magic square or not.

# magicsquare_file_ip.c

We get the matrix input from files. The code contains a fuunction getlines(filename) which returns how many lines of data is present in the file. This also represents the size of the square matrix. Once we have the size of matrix we can dynamically allocate a matrix and open the file and read its content to be stored into our 2 dimensional array.
Next we call the magicsquare function which we have imported as a header file to determine whether our input is a magic square matrix or not.

- input_1.txt is a non magic square matrix
- input_2.txt is a magic square matrix
