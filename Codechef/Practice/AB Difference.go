https://www.codechef.com/practice/course/go/PGOL04/problems/ABDIFF




package main

import "fmt"
import "math"

func main() {
    var a, b int

    fmt.Scanf("%d %d", &a, &b)
    
    chefAns := a * b
    addAns := a + b
    
    // Calculate the difference between the chef's answer and addition value of a and b
    diff := (float64(chefAns) - float64(addAns))
    
    // Print the difference
    fmt.Println(math.Abs(diff))

}