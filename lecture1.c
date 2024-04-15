#include <cs50.h>
#include <stdio.h>
//https://manual.cs50.io/


int main(void)
{
    //conditional statement
    int x = get_int("what is x");
    int y = get_int("what is y");
    if(x<y)
    {
        printf("x is less than y\n");
    }

    //while loop
    int counter = 3;
    while(counter>0){
        printf("meow\n");
        counter--;
    }

    //for loop
    for (int i = 0, i < 3, i++){
        printf("meow\n");
    }

    //forever loop
    while(true){
    }

    //function
    void meow(void) //this line should be put above so then it is called before callling the function as the code is ran in order
    {
        printf("meow\n")
    }

    //do loop
    int n;
    do
    {
        n = get_int("Size:");
    }
}
