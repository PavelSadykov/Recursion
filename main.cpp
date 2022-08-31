//
//  main.cpp
//  Рекурсия - это когда функция вызывает сама себя непосредственно или косвенно
//
//  Created by Павел on 31.08.2022.
//

#include <iostream>
using namespace std;

//факториал с помощью рекурсии(как матрешка)
long long factorial(int num){
 if(num<=1)
     return 1;
    return factorial (num-1)* num;
}

//написать функцию, которая выводит число Фибоначчи под номером N. для демонстрации вывести первые 13 чисел Фибоначчи с помощью рекурсии
int fibo (int num){
    if(num==0 or num==1)
        return num;
    return fibo(num-2)+fibo(num-1);
}




int main(int argc, const char * argv[]) {
    setlocale(LC_ALL, "Rus");
    int n;
    
  /*
    //Факториал
    cout<<"Введите число: ";
    cin>>n;
    cout<<n<<"! "<<factorial(n)<<endl;
  */
    
    //Фибоначчи
    cout<<"Введите номер числа Фибоначчи : ";
    cin>>n;
    cout<<n<<":  "<<fibo(n)<<endl;
    cout<<"Первые 13 чисел Фибоначчи : ";
    for(int i = 0; i<13;i++)
        cout<<fibo(i)<<"  ";
        cout<<endl;
    return 0;
}
