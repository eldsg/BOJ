package main
import "fmt"
func main(){
    var a,b,c,d,f int
    fmt.Scanf("%d", &b)
    f=b
    for {
        c = b/10
        d = b%10
        b = d*10+(c+d)%10
        a++
        if(f == b) {
            break;
        }
    }
    fmt.Println(a)
}