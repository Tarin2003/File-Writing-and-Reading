 # File Writing and Reading in C++
 This program demonstrates basic file handling in C++ by writing student data (name, ID, age, batch, section, GPA) to a file and then reading it back. It uses ofstream for 
 writing data and ifstream for reading it.

 ## Writing to the File:
 Uses ofstream to write student details to a file named StudentDetails.txt.
 Each student’s details are input through cin and written to the file in a formatted manner.

## Reading from the File:
After writing, the program uses ifstream to read the content from StudentDetails.txt and displays it on the console.
The getline() function is used to read each line from the file and display it.
