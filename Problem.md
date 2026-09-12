# C Programming Problems - Pseudocode

## Problem 1: Display Student Information using Different Data Types.
BEGIN
     STRING student name = "Koonjh"
     INTEGER roll number = 26k-0583
     FLOAT gpa = 3.4
     CHARACTER grade = 'A'

     DISPLAY "Name:", student name
     DISPLAY "Roll No:", roll  number
     DISPLAY "GPA:", gpa
     DISPLAY "Grade:", grade
END
## Problem 2: Read and display a character using getchar() and pullchar().
BEGIN
     CHARACTER ch
     DISPLAY "Enter a character:"
     ch = READ_CHARACTER()   // Equivatent to getchar()

     DISPLAY "You entered:"
     WRITE_CHARACTER(ch)     // Equivalent to pullchar() 
END 
##  problem 3: Display a floating-point value using different precision settings.
BEGIN 
     FLOAT pi_value =3.141592

     DISPLAY "Default Precision:", pi_value
     DISPLAY "Precision 2 decimal places:", FORMAT(pi_value, 2)
     DISPLAY "Precision 4 decimal places;", FORMAT(pi_value, 4)
END


