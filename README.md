# SysNet1-Project1 MyShell

This program creates a basic shell that parses user input, creates new processes to execute specific programs, and performs input/output redirection and background execution.

To run the program:
  - type into the console "make myshell"
  - after typing "make myshell," to execute the file type "./myshell"


Sample Command Explanation:

  ls –l shows a listing of files in the current directory 
  
  ls –l >testfile.txt writes a listing of files into the text file testfile.txt 
  
  grep –i shell testfile.txt  list many lines containing the word shell in the previous file 
  
  cat <myshell.cpp displays the source code of the program on the screen 
  
  cat <myshell.cpp & as above except the output will be displayed in the background causing the prompt of the shell to be mixed with the output of the file 
  
  cat testfile.txt & displays  the  content  of  the  text  file  testfile.txt  on  the  screen  in  the background 
  
  ./slow & runs the program slow from the current working directory in the background 
  
  exit terminates the shell; all child processes must be terminated for the shell to close avoiding creation of zombie processes 
