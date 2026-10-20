int main() {
    
    int sum = 0;
    int count = 0;
    
    for(int i = 1; i <= 100; i++)
    {
        int count = 0;
    
    for(int k = 1; k <= i; k++)
        {
            if( i % k == 0)
            {
                count++;
            }
        }
        
        if(count == 2)
        {
            sum += i;
        }
    }
    
    printf("%d", sum);
        
    return 0;
}
