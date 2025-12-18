#include <iostream>

/*
 * safe_hello.cpp
 *
 * A simple “Hello World” program written in a style
 * mindful of safety‑critical coding guidelines
 * (no exceptions, no dynamic heap allocation at runtime).
 */

int SafePrintMessage(void)
{
    /* Print a message to the console */
    std::cout << "Hello, Safety‑Aware C++ World!" << std::endl;

    /* Return 0 to indicate success */
    return 0;
}

int main(void)
{
    /* Call the safe print function */
    const int status = SafePrintMessage();

    /* Check the status and optionally handle errors */
    if (status != 0)
    {
        std::cout << "Error: SafePrintMessage failed!" << std::endl;
    }

    /* Return status code */
    return status;
}
