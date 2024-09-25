https://codechef.com/practice/course/go/PGOL06/problems/SQUATS




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
        fmt.Println(x*15)
        t--
    }
}