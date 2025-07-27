# cpp-patterns
c++ pattern programs

# ✨ C++ Pattern Programs

This repository contains a collection of classic and creative star and character patterns implemented in C++. Each pattern showcases use of nested loops, conditionals, and formatting — perfect for beginners who want to improve their logic and console output skills.

##  Included Patterns

- ✅ Left-aligned Star Triangle  
- ✅ Right-aligned Star Triangle  
- ✅ Floyd's Triangle (Number series)  
- ✅ Alphabet Floyd’s Triangle (A-Z sequence)  
- ✅ Hourglass Star Pattern  

## Algorithms 
LEFT AND RIGHT STAR PATTERNS:
1. Start the program.
2. Define number of rows (e.g., n = 5).
3. For the left triangle:
   a. Loop from i = 1 to n:
      - Print i stars in each row.
4. For the right triangle:
   a. Loop from i = 1 to n:
      - Print (n - i) spaces.
      - Print i stars.
5. End program.

FLOYD'S TRIANGLE
1. Start the program.
2. Initialize a counter = 1.
3. Loop i = 1 to n:
   a. For j = 1 to i:
      - Print the counter.
      - Increment counter.
4. End program.


ALPHABET FLOYD'S TRIANGLE
1. Start the program.
2. Initialize a character variable = 'A'.
3. Loop i = 1 to n:
   a. For j = 1 to i:
      - Print the character.
      - Increment character.
4. End program.


HOURGLASS PATTERN
1. Start the program.
2. Define n rows (half of hourglass height).
3. For top half (inverted triangle):
   a. Loop i = n to 1:
      - Print (n - i) spaces.
      - Print (2*i - 1) stars.
4. For bottom half:
   a. Loop i = 2 to n:
      - Print (n - i) spaces.
      - Print (2*i - 1) stars.
5. End program.



