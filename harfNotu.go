package main

import "fmt"

func main() {
	var sinavPuani int

	// Kullanıcıdan sınav puanını alma
	fmt.Print("Sınav puanınızı girin: ")
	fmt.Scanln(&sinavPuani)

	// Puanı harfe çevirme
	switch {
	case sinavPuani >= 90:
		fmt.Println("Harf notunuz: A")
	case sinavPuani >= 80:
		fmt.Println("Harf notunuz: B")
	case sinavPuani >= 70:
		fmt.Println("Harf notunuz: C")
	case sinavPuani >= 60:
		fmt.Println("Harf notunuz: D")
	default:
		fmt.Println("Harf notunuz: F")
	}
}
