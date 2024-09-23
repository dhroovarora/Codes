https://www.codechef.com/practice/course/go/PGOL06/problems/AGELIMIT?tab=statement




package main

import "fmt"

func main() {
    var t int
    fmt.Scanf("%d", &t)

    // Loop for each test case
    for t > 0 {
        var x, y, a int

        // Input for each test case using fmt.Scanf
        fmt.Scanf("%d %d %d", &x, &y, &a)

        // Your code for each test case goes here
        if a >= x && a < y {
            fmt.Println("YES");
        } else{
            fmt.Println("NO");
        }
        t--
    }
}