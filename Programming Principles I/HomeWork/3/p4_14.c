int main() {
    
    int fact = 1;
    
    for(int i = 1; i <= 5; i++)
    {
        fact *= i;
        printf("factorial of %d equals to %d\n", i, fact);
    }
    
    return 0;
    
}

//20! is too big a number for a normal int to hold, so the result would overflow and come out wrong.
