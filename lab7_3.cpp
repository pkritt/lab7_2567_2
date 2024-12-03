#include <iostream>
#include <string>
using namespace std;

char before(char x){
if (x>='B' &&  x<='Z'){
    x = x-1;
}
else if (x=='A'){x='Z';}
else {x = '0';}    

return x;
}

int main()
{
cout << before('A');
cout << before('B');
cout << before('Z');
cout << before('[');

}
