https://www.hackerrank.com/challenges/variadic-functions-in-c/problem?isFullScreen=true





int  sum (int count,...) {

    int sum = 0;
    va_list p;
    
    va_start(p, count);
    
    for(int i = 0; i < count; i++){
        sum += va_arg(p, int);
    }
    
    va_end(p);
    
    return sum;
}

int min(int count,...) {
    
    va_list p;
    va_start(p, count);
    
    int min = va_arg(p, int);
    
    for(int i = 0; i < count - 1; i++){
        int temp = va_arg(p, int);
        
        if(temp < min){
            min = temp;
        }
    }
    
    va_end(p);
    
    return min;
}

int max(int count,...) {

    va_list p;
    va_start(p, count);
    
    int max = va_arg(p, int);
    
    for(int i = 0; i < count - 1; i++){
        int temp = va_arg(p, int);
        
        if(temp > max){
            max = temp;
        }
    }
    
    va_end(p);
    
    return max;
}