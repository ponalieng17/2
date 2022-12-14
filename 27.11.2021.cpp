#include <iostream>
#include <math.h>
using namespace std;
int main()
{   /*Задание 3: Напишите объявление о продаже чего-нибудь и выведите его на экран, в том виде 
как оно должно было бы быть напечатано.*/
    
    setlocale(LC_ALL, "russian");
    cout << "Продам автомобиль.\n\n" << "Марка: VW Golf.\n\n" << "Цвет\t" << "| синий   |\n\n" << "Коробка\t" << "| автомат |\n\n"
    << "Цена\t" << "| 1 млн.$ |\n\n" << "Тел: 8-800-222-22-22\n\n";
    cout << "=========================\n\n";
    /*Задание 4: Заданы три сопротивлении R1, R2, R3 . Вычислить значение сопротивления R0 по формуле: 1/R0 = 1/R1+1/R2+1/R3.*/

    float R0, R1, R2, R3;
    R1 = 2;
    R2 = 4;
    R3 = 8;
    R0 = 1 / (1 / R1 + 1 / R2 + 1 / R3); // преобразуем формулу 1/R0 = 1/R1+1/R2+1/R3
    cout << R0 << endl <<endl;
    cout << "=========================\n\n";
    /*Задание 5: По заданной длине окружности найти площадь круга по формуле S = pi*R2, радиус вычислить из формулы длины окружности: L=2*pi *R*/

    float S, R, L;
    const float pi = 3.14;
    cout << "Введите длинну окружности: ";
    cin >> L;
    R = L / (2 * pi); // радиус вычислить из формулы длины окружности : L = 2 * pi * R
    S = pi * pow(R, 2); // использую функцию pow(), как показывали на уроке чтобы возвести в степень
    cout << "Радиус круга равен: " << R << endl;
    cout << "Площадь круга равна: " << S << endl << endl;
    cout << "=========================\n\n";
    /*Задание 6: Вычислить пройденное расстояние при прямолинейном равноускоренном движении по формуле S = v*t + (a*t2) / 2, где v – скорость, t – время, а – ускорение.*/

    float v, t, a, s;
    float speed;
    cout << "Введите скорость в км/ч: ";
    cin >> speed;
    cout << "Введите время разгона в секундах: ";
    cin >> t;
    v = speed / 3.6; // переводим км/ч в м/с
    a = v / t; // находим ускорение
    s = v * t + (a * pow(t, 2)) / 2;
    cout << "Пройденное расстояние равно: " << s << " метров" << endl << endl;
    cout << "=========================\n\n";
    /*Задание 7:Пользователь вводит с клавиатуры расстояние до аэропорта и время, за которое нужно доехать. Вычислить скорость, с которой ему нужно ехать.*/

    float km, hours, min, km_h;
    cout << "Введите расстояние до аэропорта (в километрах): ";
    cin >> km;
    cout << "Введите время, за которое нужно доехать (часы и через пробел минуты): ";
    cin >> hours >> min;
    hours += min/60; // переводим минуты в часы и складываем
    km_h = km / hours;
    cout << "Скорость с которой вам нужно ехать: " << km_h << " км/ч" << endl << endl;
    cout << "=========================\n\n";
    /*Задание 8:Пользователь вводит с клавиатуры время начала и время завершения телефонного разговора 
    (часы, минуты и секунды). Посчитать стоимость разговора, если стоимость минуты – 30 копеек.*/

    const float price_one_min = 30; // цена за минуту разговора в копейках
    float hours_0, min_0, sec_0; // начало разговора
    float hours_1, min_1, sec_1; //конец разговора
    cout << "Введите время начала разговора (часы, минуты, секунды, через пробел): ";
    cin >> hours_0 >> min_0 >> sec_0;
    cout << "Введите время завершения разговора (часы, минуты, секунды, через пробел): ";
    cin >> hours_1 >> min_1 >> sec_1;

    float count_0 = (hours_0 * 3600) + (min_0 * 60) + sec_0; // перевожу в секунды время начала разговора
    float count_1 = (hours_1 * 3600) + (min_1 * 60) + sec_1; // перевожу в секунды время завершения разговора
    float diff_in_sec = count_1 - count_0; // находим время разговора в секундах
    float over_price = diff_in_sec * (price_one_min / 60); // цена в копейках
    if (hours_0 >= 24 || hours_0 <= -1 || min_0 >= 60 || min_0 <= -1 || sec_0 >= 60 || sec_0 <= -1 || hours_1 >= 24 || hours_1 <= -1 || min_1 >= 60 || min_1 <= -1 || sec_1 >= 60 || sec_1 <= -1)
    {
        cout << "Некорректно ввели время" << endl;
    }
    else if (diff_in_sec < 0) {
        cout << "Время конца разговора меньше, чем начала. Извините, но программа ограничена рамками в одни сутки без перехода на другой день!" << endl;
    }


    else if (over_price <= 99) {
        cout << "Стоимость разговора : " << over_price << " коп." << endl;
    }
    else {
        cout << "Стоимость разговора: " << over_price / 100 << " руб." << endl << endl;
    }

     cout << "=========================\n\n";
     /*Задание 9:Пользователь вводит с клавиатуры расстояние, расход бензина на 100 км и стоимость трех 
      видов бензина. Вывести на экран сравнительную таблицу со стоимостью поездки на разных видах бензина*/

     float dist, cons_gas_on_100, cost_1, cost_2, cost_3;
     cout << "Введите расстояние расстояние поездки в километрах: ";
     cin >> dist;
     cout << "Введите расход бензина на 100 км в литрах: ";
     cin >> cons_gas_on_100;
     cout << "Введите в рублях стоимость трёх видов бензина через пробел: ";
     cin >> cost_1 >> cost_2 >> cost_3;
     float quanlity_gas_on_trip = cons_gas_on_100 * dist / 100;// колличество бензина на поездку
     float cost_1_per_trip = quanlity_gas_on_trip * cost_1; // стоимость  поездки на первом введенном виде бензина
     float cost_2_per_trip = quanlity_gas_on_trip * cost_2; // стоимость  поездки на втором введенном виде бензина
     float cost_3_per_trip = quanlity_gas_on_trip * cost_3; // стоимость  поездки на третьем введенном виде бензина
     cout << "=================================================================================" << endl;
     cout << "|\tстоимость  поездки на бензине №1\t|\t" << cost_1_per_trip << "\t|\tруб.\t|" << endl;
     cout << "=================================================================================" << endl;
     cout << "|\tстоимость  поездки на бензине №2\t|\t" << cost_2_per_trip << "\t|\tруб.\t|" << endl;
     cout << "=================================================================================" << endl;
     cout << "|\tстоимость  поездки на бензине №3\t|\t" << cost_3_per_trip << "\t|\tруб.\t|" << endl;
     cout << "=================================================================================" << endl;
    }

