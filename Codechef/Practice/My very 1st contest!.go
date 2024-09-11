https://www.codechef.com/practice/course/go/PGOL04/problems/MY1STCONTEST?tab=statement




package main

import "fmt"

func main() {
    var n, a, b int

    fmt.Scanf("%d %d %d", &n, &a, &b)

    // Your code goes here 
    diff1 := n-a
    diff2 := diff1-b
    fmt.Printf("%d %d\n", diff1, diff2)
    
}