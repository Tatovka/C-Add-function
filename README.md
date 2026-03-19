# C-Add-function
C function implementing add logic 

After more than 200 days of work, I'm glad to introduce you my biggest project: complete addition function of 1-byte unsigned integers.
For use simple add 
```c
unsigned char add(unsigned char a, unsigned char b);
```
declaration to your code and link with precompiled ``add_u8.o`` file.

# Test file
To test the fuction try ``test_add_u8.c``.
Clone this project and run this command in your shell.
```bash
gcc add_u8.o test_add_u8.o -o test && ./test
```

# Future plans.
- u8 multiplication
- i8 add/sub
- u16 add
- u32 addition distributed system.
