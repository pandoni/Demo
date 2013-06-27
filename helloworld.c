#include <stdio.h>
#include <hello.h>

int main(void)
{
    hello();
    return 0;
}
^d

$ mkdir include
$ cat > include/helloworld.h
#ifndef __HELLO_H__
#define __HELLO_H__
#define hello() printf("Hello World\n");
#endif // __HELLO_H__
