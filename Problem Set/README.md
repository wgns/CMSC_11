# Problem Set
Implement the following functions and provide a menu for testing all the items.

1. int logBase10Estimate(int n) - returns the log of a number base 10. Just give the integer part. Example: n = 1002, ans = 3; n = 54, ans = 1; n = 456789, ans = 5

2. int floor(float x) - returns the biggest integer less than or equal to x.

3. int ceiling(float x) - returns the smallest integer greater than or equal to x.

4. int isAlNum(char ch) - returns true if the character is a letter or a digit, false otherwise.

5. int isAlpha(char ch) - returns true if the character is a letter, false otherwise.

6. int isUpper(char ch) - returns true if the character is an upper case letter, false otherwise.

7. int isLower(char ch) - returns true if the character is a lower case letter, false otherwise.

8. char toUpper(char ch) - returns the upper case equivalent if the character is a lower case letter, otherwise, return the character itself.

9. char toLower(char ch) - returns the lower case equivalent if the character is an upper case letter, otherwise, return the character itself.

10. int isPunctuation(char ch) - returns true if ch is a punctuation, false otherwise. Cover all accepted punctuation marks.

11. int toInteger(char st[]) - returns the integer equivalent of st. Assume that st is a valid numerical string.

12. float toFloat(char st[]) - returns the float equivalent of st. Assume that st is a valid string representation of a float value.

13. int abs(int x) - returns the absolute value of x.

14. void stringCopy(char src[], char dest[]) - copies the contents of src to dest character by character.

15. int substring(char s1[], char s2[]) - returns true if s2 is a substring of s1, false otherwise.

16. int stringCompare(char s1[], char s2[]) - returns 0 if s1 and s2 are the same, -1 if s1 comes before s2 in dictionary ordering and 1 if s1 comes after s2 in dictionary ordering. Comparing s1 and s2 by doing if(s1==s2) will not work. Notice that s1 and s2 are arrays, therefore they hold the memory address of the first element of the arrays. This means that they will never be the same value since they are 2 different identifiers and they are stored in different memory addresses. This means that to check whether 2 strings are the same, the check has to be done character by character.

17. void camelCase(char st[]) - displays st in camel case. The characters are displayed in upper case and lower case alternately. Example: st = "apple", output = "ApPlE"

18. void reverse(char st[]) - reverses the contents of the string. Do not use a temporary string.

19. int humbleNumber(int x) - determines if x is a humble number or not. A number whose only prime factors are 2, 3, 5 or 7. 1 is an exception (it is considered humble). The following are the first 20 humble numbers: 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 12, 14, 15, 16, 18, 20, 21, 24, 25, 27.

20. int reverse(int x) - returns the reverse equivalent of a number. Sample: if x = 158, return 851.

21. int isFraction(char st[]) - returns 1 if st represents a valid fraction format, 0 otherwise. The following should be considered valid fraction strings: 123, 1/2, 123/456, 25/2, -123, -2/5, 5/-3, -5/-7, etc.

22. int isIncreasing(int A[], int n) - returns 1 if the elements of array A is sorted in increasing fashion (from smallest item to biggest item. YOU ARE NOT GOING TO SORT THE ARRAY. YOU WILL SIMPLY CHECK IF IT IS. Return 0 if otherwise.


**NOTE: DO NOT USE ANY AVAILABLE FUNCTION FROM THE STRING.H LIBRARY OR ANY LIBRARY AT ALL TO HELP/AID YOU IN THE IMPLEMENTATION. I WILL ADD MORE PROBLEMS IF YOU NEED MORE.**
