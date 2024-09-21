https://www.codechef.com/practice/course/go/PGOL05/problems/WATERCONS




package main

import "fmt"

func main() {
    var t int
    
    fmt.Scanf("%d", &t)

    // Loop for each test case
    for t > 0 {
        var x int
        fmt.Scanf("%d", &x)

        // Your code for each test case goes here
        if (x >= 2000){
            fmt.Println("YES")
        }else{
            fmt.Println("NO")
        }
        t--
    }
}