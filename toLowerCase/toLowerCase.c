char* toLowerCase(char* str) {
    int i = 0;
	while (str[i])
	{
        if (str[i] >= 'A' && str[i] <= 'Z')
           str[i] += 32;
		i++;
	}
    return (str);
}

/*
Example 1:
Input: "Hello"
Output: "hello"

Example 2:
Input: "here"
Output: "here"

Example 3:
Input: "LOVELY"
Output: "lovely"

Explained: str[i] is the index of the string. If we were to pass in "Hello" to str and we typed str[1] it would be at the 'e' spot in the string. "Hello" is represented as 
str[0] = 'H'
str[1] = 'e'
str[2] = 'l'
str[3] = 'l'
str[4] = 'o'
We can't do str[i + 32] because it would skip way past any spot in the string. Which is why we have the Plus-Equals symbol (+=) on the outside of it. The Plus-Equals symbol adds and applies the ascii value to letter.
Ascii value of 'H' is 72. 72 + 32 = 104. The ascii value of 103 is 'h'.

Type "man ascii" in the command line to see the decimal ascii values. You'll see that += 32 will make all Uppercase letters lowercase.
*/
