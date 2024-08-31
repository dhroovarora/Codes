https://www.codechef.com/practice/course/go/PGOL02/problems/LEARNSQL




package main

import (
    "fmt"
)

func main() {
    var R, C, E int
    fmt.Scan(&R, &C, &E)
    
    // Total rows after adding extra rows
    totalRows := R + E
    
    // Total number of cells
    totalCells := totalRows * C
    
    fmt.Println(totalCells)
}