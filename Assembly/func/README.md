# Function Call (5 points)

## Instructions

Complete the assembly function `func_call` in `func.S`. `func_call` should call the function `magic_function` int `func.c`. You must use x86 assembly.

`func_call` has the following function prototype:

```c
int func_call(int a, int b, int c);
```

`func_call` should assign the corresponding input parameter to the struct `Foo` before calling `magic_function`. i.e. `int a` should be assigned to `Foo.a` and `int b` assigned to `Foo.b`. `func_call` should return the result of calling `magic_function`.

## Example
A function call of `func_call(1,2,3)` will result in `magic_function` being called with a struct with the following values:

```
Foo {
	a = 1;
	b = 2;
	c = 3;
}
```

Output:

```
a: 1
b: 2
c: 3
Result: 6
```

## Note
You will need to use either your own linux computer or the provided VM to do this problem.
