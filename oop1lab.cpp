#include <iostream>
#include <iomanip>
#include <cctype>
#include <cmath>
//библиотеки смотреть какие удалить какие вставить
using namespace std;

int main()
{
    cout << 1990 << setw(8) << 135 << endl
    << 1991 << setw(8) << 7290 << endl
    << 1992 << setw(8) << 11300 << endl
    << 1993 << setw(8) << 16200 << endl;
    
    int var = 10;
    cout << var << endl; // var is 10
    var *=2; // var becomes 20
    cout << var << endl; // displays var
    var--;          //decrements it
    cout << var << endl; // var is 19

    cout << "Весна, весна, приходят люди\nк пустой реке, шумит гранит,\nтечет река, кого ты судишь,\nскажи, кто прав, река твердит" << endl;
    
    float dollar;
    cout<<"Введите сумму в долларах: ";
    cin>>dollar;
    cout<<dollar<<" долларов"<<" в переводе на другие валюты: \n"
    <<dollar/1.487<<" фунтов стерлингов"<<endl
    <<dollar/0.172<<" франков"<<endl
    <<dollar/0.584<<" немецких марок"<<endl
    <<dollar/0.00955<<" йен"<<endl;
    
    float deg, df;
    cout<<"Введите градусы по Цельсию: ";
    cin>>deg;
    df=deg*9/5+32;
    cout<<deg<<" градусов по Цельсию эквивалентны "<<df<<" градусам по Фаренгейту"<<endl;
    
    cout << setfill('.') << 1990 << setw(8) << 135 << endl
    << 1991 << setw(8) << 7290 << endl
    << 1992 << setw(8) << 11300 << endl
    << 1993 << setw(8) << 16200 << endl;
    
    int a, b, c, d, chis, znam;
    char dummychar;
    cout<<"Введите первую дробь: ";
    cin>>a>>dummychar>>b;
    cout<<"Введите вторую дробь: ";
    cin>>c>>dummychar>>d;
    chis=a*d+b*c;
    znam=b*d;
    cout<<"Их произведение равно "<<chis<<"/"<<znam<<endl;
    
    int funt, shil, pens;
    float ds;
    cout<<"Введите количество фунтов: ";
    cin>>funt;
    cout<<"Введите количество шиллингов: ";
    cin>>shil;
    cout<<"Введите количество пенсов: ";
    cin>>pens;
    ds=(static_cast<float>(shil)*12+pens)/(240)+funt;
    cout<<"Десятичных фунтов: £"<<round(ds*100)/100<<endl;
    
    cout<<setfill(' ')<<setiosflags(ios::left)<<setw(17)<<"Фамилия"<<setw(14)<<"Имя"<<setw(22)<<"Адрес"<<setw(16)<<"Город\n"<<endl; //не забыть убрать сетфилл
    cout<<setiosflags(ios::left)<<setw(16)<<"Петров"<<setw(18)<<"Василий"<<setw(25)<<"Кленовая 16"<<setw(16)<<"Санкт-Петербург"<<endl;
    cout<<setiosflags(ios::left)<<setw(16)<<"Иванов"<<setw(17)<<"Сергей"<<setw(25)<<"Осиновая 3"<<setw(16)<<"Находка"<<endl;
    cout<<setiosflags(ios::left)<<setw(17)<<"Сидоров"<<setw(15)<<"Иван"<<setw(26)<<"Березовая 21"<<setw(16)<<"Калининград"<<endl;
    
    //не забыть добавить инт и флот
    cout<<"Введите число десятичных фунтов: ";
    cin>>ds;
    funt=static_cast<int>(ds);
    float defrac=ds-funt;
    float shil1;
    shil1=20*defrac;
    shil=static_cast<int>(shil1);
    float defshil=shil1-shil;
    pens=12*defshil;
    cout<<"Эквивалентная сумма в старой форме записи: £"<<funt<<"."<<shil<<"."<<pens;
    
    return 0;
}
