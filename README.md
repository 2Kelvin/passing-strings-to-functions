**Strings are array of characters.** The length of a string is the total character count in the string plus the `\0` character

`sizeof` tells you how many bytes of memory something takes. You can check either data types or pieces of data with it.

```c
sizeof(int);
```

```c
sizeof("Fractal Design");
```

The `sizeof(aPointer)` returns 4 bytes for 32 bit systems & 8 bytes for 64 bit systems

`An array variable is by itself used as a pointer variable.` The address of the array is the address of the first character in the array.