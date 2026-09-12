# C Programming Language Basics 

## 1. Data Types
The table below describes the fundamental data types used in C programming along with their sizes and descriptions:

| Data Type | Size (typical) | Description |
| :--- | :--- | :---|
| `int` | 4 bytes | Stores integer (whole number) values without decimals. |
| `float` | 4 bytes | Stores single-precision floating-point numbers (decimals values). |
| `double` | 8 bytes | Stores double-precision floating-point numbers (higher accuracy decimals). |
| `char` | 1 byte | Stores a single character. |
| `bool` | 1 byte | Stores Boolean values (`true` or `false`) using `<stdbool.h>`. |
| `void` | 0 bytes | Represents empty/no data type or functions that return no value. |

---

## 2. Format Specifiers
Format specifiers are used in C for formatted input and output operations:

| Format Specifier | Data Type | Example Output |
| :--- | :---| :--- |
| `%d` | Signed Decimal Integer | `25` | 
| `%u` | Unsigned Decimal Integer | `100` |
| `%o` | Unsigned Octal Integer | `31` |
| `%x` | Unsigned Hexadecimal (lowercase) | `1a`| 
| `%X` | Unsigned Hexadecimal (uppercase) | `1A`|
| `%f` | Floating-point number | `3.141593` |
| `%e` | Exponential format (scientific notation) | `3.14e+00` |
| `%c` | Single Character | `'A'` |
| `%s` | String ( array of characters) | `"Koonjh"` |
| `%ld` | Long signed Integer | `1000000L` |

---

## 3. Input/Output Functions 

### Standard Input and Output Functions:
* **`printf()`**: Used to display formatted output to the standard console screen.
* **`scanf()`**: Used to read formatted input from the standard keyboard.
* **`getchar()`**: Reads a single character from the standard keyboard input.
* **`putchar()`**: Displays a single character to the console screen.
* **`fget()`**: Reads a line or string safely from a stream (like standard input) preventing buffer overflow.
* **`puts()`**: Writes a string ton the standard output and automatically appends a new line character (`\n`).

---

## 4. Escapes Sequences
Escape Sequences are special characters used to format output strings:

| Escape Sequence | Description | Example Code |
| :--- |:-- | :--- |
| `\n` | Newline moves cursor to next line) | `printf("Hello\nWorld");` |
| `\t` | Horizontal Tab (Adds spacing) | `printf("Name:\Koonjh");` |
| `\\` | Backslash (Prints `\`) | `printf("Folder:\\Path"):` |
| `\"` | Double Quote (Prints `"`) | `printf("\"Hello\"");` |
| `\0` | Null Character (Terminates string) | `char str[] = {'A' , '\0'};` |

---

## 5. Precision in Floating-Point Output 
In C, Precision for floating-point values is specified using a period (`.`) followed by the number of decimal places within a format specifier (e.g, `%.2f`).

* **Default Output:** `printf("%f", 3.14159);` $\rightarrow$ Displays ** (default 6 decimal places).
* **Specified Precision (`%.2f`):** `printf("%.2f", 3.14159);` $\rightarrows$ Displays **`3.14** (rounds to two decimal places).
* **Specified Precision (`%.4f`):** `printf("%.4f", 3.14159);` $\rightarrows$ Displays **`3.1416`** (rounds to 4 decimal places). 


