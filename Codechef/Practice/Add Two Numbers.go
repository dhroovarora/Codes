https://www.codechef.com/practice/course/go/PGOL05/problems/FLOW001




package main

import "fmt"

func main() {
    var t int

    fmt.Scanf("%d", &t)

    // Loop for each test case
    for t > 0 {
        var a, b int
        fmt.Scanf("%d %d", &a, &b)

        // Your code for each test case goes here

        t--
    
        var res int =  a + b
        
        fmt.Println(res)
    }
}