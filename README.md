# Homework 3
### Homework 3, due until 18.11., 8:30

In this homework you will do some statistics of pseudo-random numbers.
C++ provides random numbers via the command ``int rand()`` which is from
``cstdlib``. It will output an integral value between 0 and ``RAND_MAX``.
``RAND_MAX`` is an integer constant coming from ``cstdlib`` and the maximum possible random number. See footnote about more on random numbers.

Your assignment is:
* Write a program which creates an array of ``N=100`` random double values between **0** and **1**.
  * The array is to be created in ``main``, but filling it with random numbers should be done in an extra function. You will need pointers for this.
* Calculate the expected value *m* and the variance *v* of your *N* random numbers *x_i*, where
 <p align="center">
 <img src="stuffy_stuff/formel.png" width="150">
 * Write one function which calculates *m* and *v*. Your function should  return both values to the main program at the same time. Use references for this. The resulting values should be printed in the main program.

In case of any questions, please use the *Issues* section on the right panel of GitHub to pose the question.

---
In case that you only use `int rand()` in your code, you will notice, that the random numbers you obtain
are the same every time you execute your program. This is because the pseudo-random number generator requires
a seed value. Think of the seed value as a kind of initial value. If you write no further commands for random
numbers in your code, the seed value will be the same every time. Insert the comand `srand(time(NULL))` at the
start of your `main` function in order to use the current time as a seed value. In this way you will always get
different random numbers. 

Depending on your combination of operating system and compiler, you might have to add `#include <ctime>`.
