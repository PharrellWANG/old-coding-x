# CodingX

My C++ battle ground.

## Table of Contents

- [TAppExtendedCollection](#tappextendedcollection)
- [F.A.Q](#faq)
    - [What is the absolute value of the max negative integer](#what-is-the-absolute-value-of-the-max-negative-integer)
    - [`exit` function](#exit-function)
- [Useful Links](#useful-links)
<!-- END doctoc generated TOC please keep comment here to allow auto update -->

## TAppExtendedCollection
The questions, which are not from the official examples
in the book of **Coding Interview** but with some value, are
included in this section. 

## F.A.Q
### What is the absolute value of the max negative integer
[Reference](https://stackoverflow.com/questions/11243014/why-the-absolute-value-of-the-max-negative-integer-2147483648-is-still-2147483)

```c++
printf("abs(-2147483648): %d\n", abs(-2147483648));
//output: abs(-2147483648): -2147483648
```
>The `abs`, `labs`, and `llabs` functions compute the absolute value of an integer j. If the result cannot be represented, the behavior is undefined.

And the result indeed cannot be represented because the 2's complement representation of signed integers isn't symmetric.
Since 2147483648 is greater than INT_MAX on implementation, then abs(-2147483648) is undefined.

### `exit` function
[Reference](https://docs.microsoft.com/en-us/cpp/cpp/exit-function)

The `exit` function, declared in the standard include file STDLIB.H, terminates a C++ program.

The value supplied as an argument to exit is returned to the operating system as 
the program's return code or exit code. By convention, a return code of zero means 
that the program completed successfully.

>You can use the constants `EXIT_FAILURE` and `EXIT_SUCCESS`, 
defined in STDLIB.H, to indicate success or failure of your program.

Issuing a `return` statement from the main function is equivalent to 
calling the `exit` function with the return value as its argument.

To destroy an automatic object before you call `exit`, `_Exit`, or `_exit`, 
explicitly call the destructor for the object, as shown here:
```c++
void last_fn() {}
    struct SomeClass {} myInstance{};
    // ...
    myInstance.~SomeClass(); // explicit destructor call
    exit(0);
}
```
## Useful Links
* [Homepage of the creator of C++: Bjarne Stroustrup](http://www.stroustrup.com)
* [Cpp Core Guidelines (recommended by Bjarne Stroustrup)](https://github.com/isocpp/CppCoreGuidelines)
* [Bjarne Stroustrup's C++ Glossary](http://www.stroustrup.com/glossary.html)
* [About exception](http://www.stroustrup.com/bs_faq2.html#exceptions-why)
