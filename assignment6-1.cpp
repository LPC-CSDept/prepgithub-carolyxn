#include <iostream>
using namespace std; 

int inputValid(int a, int b); // call functions
void prime(int begin, int end);

int main ()
{
    int begin, end; 
    int i, p; 
    do
    {
    cout << "Enter in your range from [from, to]: " << endl;
    cin >> begin >> end;
    }
    while (inputValid(begin, end)); // while loop to continue validating
    prime(begin, end); 
    
}

int inputValid(int a, int b) // input validation function
{
    if (a >= b || a < 2 || b < 0)
        return 1;
    else 
        return 0;
}

void prime(int begin, int end) // calculation function, returns 0 or 1
{
    int x, y;

    for (x = begin; x <= end; x++)
    {
        if (x == 0 || x == 1)
            continue;
        for (y = 2; y <= (x / 2); y++)
            if (x % y == 0)
                break;
            if (y > (x/2))
                cout << "Prime numbers: " << x << endl;
    }
}