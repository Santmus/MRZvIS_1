# MRZvIS_1

Лабораторная работа №1 МР3вИС Вариант 9 "Алгоритм вычисления произведения пары 6-разрядных чисел умножением со старших разрядов со сдвигом множимого (частичного произведения) вправо."
Выполнили студенты гр 821701: Казаченко Евгений Александрович и Дикусар Владимир Юрьевич 
Проверил:Крачковский Даниил Янович

Данный конвейер содержит 3 этапа, представленных тремя видами операций: вычисление частичного произведения, сдвиг частичного произведения вправо и вычисление суммы частичных произведений.
Контейнер предназначений для работы от одной до трёх парами чисел.В зависимости от количества умножаемых пар количество тактов будет изменяться:
1 пара -8 тактов
2 пары - 14 тактов
3 пары - 20 тактов 
Количество тактов вычисляется по формуле:
tact=p*n+2,где p-разрядность чисел(6-разрядное число),n-количество пар
