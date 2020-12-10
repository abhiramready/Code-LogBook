#include <iostream> 
using namespace std;  
int main() 
{   
    int num; 
  	cin>>num;
    int space;       
    int i, j, lterm, rterm;   
    lterm = 1;  
    rterm = num * num + 1; 
    for (i = num; i > 0; i--) { 
        for (space = num; space > i; space--) 
            cout << "--"; 
        for (j = 1; j <= i; j++) { 
            cout << lterm; 
            cout << "*"; 
            lterm++; 
        } 
        for (j = 1; j <= i; j++) { 
            cout << rterm; 
            if (j < i) 
                printf("*"); 
            rterm++; 
        } 
        rterm = rterm - (i - 1) * 2 - 1; 
        cout << endl; 
    } 
} 
/*

3

1*2*3*10*11*12
--4*5*8*9
----6*7

5

1*2*3*4*5*26*27*28*29*30
--6*7*8*9*22*23*24*25
----10*11*12*19*20*21
------13*14*17*18
--------15*16

*/
