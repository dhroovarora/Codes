https://www.codechef.com/practice/course/go/PGOL02/problems/PARKINGCHARG




package main
import "fmt"

func main(){
	// your code goes here
	var x,y,h int
	fmt.Scan(&x,&y,&h)
	
	total:= x + y*(h-1)
	
	fmt.Println(total)
}