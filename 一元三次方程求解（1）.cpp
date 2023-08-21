#include <bits/stdc++.h>
 
using namespace std;
 
int main(){
     double a , b , c , d;
     double e , f , g , h; //本人没什么起名天赋，看看就行了
     double num1,num2,num3;
     cin >> a >> b >> c >> d;
     
     e = b * b - 3 * a * c;
     f = b * c - 9 * a * d;
     g = (2 * e * b - 3 * a * f) / (2 * sqrt(e * e * e));
     h = acos(g);
     
     num1 = (-b - 2 * sqrt(e) * cos(h / 3))/(3 * a);
     num2 = (-b + sqrt(e) * (cos(h / 3)+sqrt(3) * sin(h/3))) / (3 * a);
     num3 = (-b + sqrt(e) * (cos(h/3) - sqrt(3) * sin(h/3))) / (3 * a);
     
     cout << fixed << setprecision(2) << num1 << " ";
     cout << fixed << setprecision(2) <<num3 << " ";
     cout << fixed << setprecision(2) <<num2;
     return 0;
}