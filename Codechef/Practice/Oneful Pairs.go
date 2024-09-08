https://www.codechef.com/practice/course/go/PGOL03/problems/ONEFULPAIRS?tab=statement




package main
import "fmt"

func main(){
    var a,b int
    fmt.Scan(&a)
    fmt.Scan(&b)
    if(a+b+(a*b)==111){
        fmt.Println("YES")
    } else{
        fmt.Println("NO")
    }
}