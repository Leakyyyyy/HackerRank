#include <bits/stdc++.h>
#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

using namespace std;

int main()
{
    int chiselko;
    cin >> chiselko;
    if (chiselko <=9 && chiselko >= 1){
        if (chiselko == 1){
            cout << "one";
        }
        if (chiselko == 2){
            cout << "two";
        }
        if (chiselko == 3){
            cout << "three";
        }
        if (chiselko == 4){
            cout << "four";
        }
        if (chiselko == 5){
            cout << "five";
        }
        if (chiselko == 6){
            cout << "six";
        }
        if (chiselko == 7){
            cout << "seven";
        }
        if (chiselko == 8){
            cout << "eight";
        }
        if (chiselko == 9){
            cout << "nine";
        }
    } else {
        cout << "Greater than 9";
    }
/*Можно и кроче но я бы сам не догодался*/
    return 0;
}
