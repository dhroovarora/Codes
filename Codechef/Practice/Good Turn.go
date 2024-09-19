https://www.codechef.com/practice/course/go/PGOL05/problems/GDTURN




package main

import "fmt"

func main() {
    var t int

    fmt.Scanf("%d", &t)

    // Loop for each test case
    for t > 0 {
        var x, y int
        fmt.Scanf("%d %d", &x, &y)

        // Your code for each test case goes here
        if(x+y > 6){
            fmt.Println("YES");
        }else{
            fmt.Println("NO");
        }
        
        t--
    }
}