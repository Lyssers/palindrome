# Simple CLI tool to check if a word is a palindrome.

1. Compile with `gcc palindrome.c -o palindrome.o`

2. Run with e.g. `./palindrome.o <word>` e.g. `./palindrome.o alyssa`

3. Output

```
You input: alyssa
Word Length is: 6
Half a word is: 3
Reversed right half of word is: ASS
Left half of the word is: ALY
The Word is not a palindrome
```
or

```
You input: 1234567890987654321
Word Length is: 19
Half a word is: 9
Reversed right half of word is: 123456789
Left half of the word is: 123456789
The word is a palindrome
```
