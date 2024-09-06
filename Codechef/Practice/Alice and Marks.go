https://www.codechef.com/practice/course/go/PGOL03/problems/MARKSTW?tab=statement




package main
import "fmt"

func main(){
    var alice,bob int
    fmt.Scan(&alice,&bob)
    if(alice>=2*bob){
        fmt.Println("YES")
    }else{
        fmt.Println("NO")
    }
    
}