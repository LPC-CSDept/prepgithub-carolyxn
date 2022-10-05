#include <iostream>
using namespace std; 

int inputValid(int, int); // call functions
void prime(int, int);

int main ()
{
    int begin, end, y; 

    cout << "Enter in your range from [from, to]: " << endl;
    cin >> begin >> end;
    
    y = inputValid(begin, end);// validation
    if (!y)
        exit(0);
    prime(begin, end); 
    
}

int inputValid(int a, int b) // input validation function
{
    if (a > b || a < 2 || b < 0)
        return 0;
    else 
        return 1;
}

void prime(int begin, int end) // calculation function, returns 0 or 1
{
    int x, y;
    for (x = begin; x <= end; x++)
    {
        for (y = 2; y <= (x / 2); y++){
            if (x % y == 0)
                break;
            }
        if (y > (static_cast<double>(x)/2))
            cout << "Prime numbers: " << x << endl;
            
    }
}