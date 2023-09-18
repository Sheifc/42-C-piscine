# Pointers Interpretation 

Resource: https://www.youtube.com/watch?v=2ybLD6_2gKM

int	x = 4;

"Integer named x is set to 4"

int *pX = &x;

"Integer pointer (a pointer to an integer) named pX (pointer to x) is set to the address of x"

(cd el punter va detras de un tipo, lo cambia a puntero, en este caso integer pointer)

By using the pointer we have a way of accessing x by reference instead of by value. If we want to copy the value of x to a new variable using that pointer we can do that like this: 

int y = *pX;

"Integer named y is set to the thing pointed to by pX"

(cd el puntero se indica asi sin indicar el tipo antes is a referred to as a direferencing which means go to the address pointed to by the pointer and grab that value, so because px points to x, the dereference will go and grab that value and it will set y equal to x so when you see an asterisk by itself you can say the thing pointed to by)

By doing this, we can pass x by reference instead of value. To be able to read, be scalable and have clean functions on yout code and another reason of using pointers is to use dinamic memory allocation.

Static memory allocations: are thing that are known to have a fixed size at compile time. 

Dinamic memory allocations: can be changed in size as the program runs. 