package main

import "fmt"

func functionOne(x int) {
	fmt.Println(x)
}

func main() {
	varOne := 1
	varTwo := 2
	functionOne(varOne)
	functionOne(varTwo)
}
