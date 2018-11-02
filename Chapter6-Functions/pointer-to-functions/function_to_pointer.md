### Pointer to functions

A function pointer is just that, a pointer that denotes a function rather than an object. Like any other pointer, a function pointer points to a particular type. A function's type is determinate by its return type and the types of its parameters. The function's name is not part of its type. For example:

```c++
// compares lenght of two strings
bool lenghtCompares(const string &, const string &);
```

has type `bool(const string &, const string &)`. To declare a pointer that can point at this functions, we declare a pointer in place of the function name:

```c++
// pf points to a function returning bool that takes two const string references
bool (*pf) (const string &, const string &);  //uninitilized
```

Starting for the name we are declaring, we see that `pf` is preceded by a `*`, so `pf` is a pointer. To the right is a parameters list, which means that `pf` points to a function. Looking left, we find that the type the function returns is `bool`. Thus, `pf` points to a function that takes two `const string &` and returns a `bool`.

> **Note:**
> The parentheses aroung `pf` are necessary. If we omit the parentheses, the we declare `pf` as a function that returns a pointer to bool:
> ```c++
> // declares a function named pf that returns a pointer to bool
> bool *pf(const string &, const string &)
> ```

#### Using function pointer

When we use a name of a function as a value, the function is automatically converted to a pointer. For example, we can assign the address of `lenghtCompare` to `pf` as follows:


```c++
pf = lenghtCompare;  // pf now points to the function named lengthCompare
pf = &lenghtCompare; // equivalent assignment: address-of operator is optional
```
More over, we can use a pointer to a function to call the function to which the pointer points. We can do so directly (there is no need to derefence the pointer):

```c++
bool b1 = pf("hello","goodbye");
```

There is no conversion between pointers to one function type and pointers to
another function type. However, as usual, we can assign `nullptr`  or
a zero-valued integer constant expression to a function pointer to indicate that the
pointer does not point to any function:


