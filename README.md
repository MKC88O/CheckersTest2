# CheckersTest2
Название проекта: "CHECKERS".
Автор: 
Фёдоров-Марущак Максим Юрьевич.

Группа: 
ПВ312. IT Step Academy Odessa.

Цель:

Разработать консольную версию классической настольной игры "Шашки" с использованием языка программирования С++ (только процедурный подход).

Основные требования:

Игровое поле:

Игровое поле представляет собой квадратную доску размером 8x8 клеток.
Каждая клетка поля может быть либо светлой, либо темной.
Каждая сторона игры (белые и черные) начинает игру с 12 шашками, расположенными на темных клетках в начальной позиции.


Игороки:

Игра расчитана для двоих игроков. Игроки инициализируются как "WHITE" и "BLACK".
Игрок "WHITE" играет белыми шашками, а игрок "BLACK" - черными.


Шашки:

Шашки представляются в виде круглых фишек, различимых по цвету (черные и белые, хотя могут быть и других цветов).
Шашки бывают двух типов: обычные и дамки.
Обычные шашки могут двигаться только вперед по диагонали на одну свободную клетку.
Дамки могут двигаться как вперед, так и назад по диагонали на любое число свободных клеток.
Шашка становится дамкой, когда она достигает последнего ряда противоположного конца поля.

Ходы:

Игроки делают ходы по очереди, начиная с белых.
Игрок выбирает шашку и вводит в консоли координаты клетки, на которойона стоит и указывает координаты клетки, на которую он хочет ее переместить (например a3b4).
Если на пути шашки находится шашка противника, игрок может побить ее, передвинув свою шашку на клетку за ней, если та свободна. Побитая шашка убирается с доски, а бьющему игроку добавляется одно очко в счете игры.
После успешного хода, если есть возможность продолжить атаку (побить нескольких шашек подряд), игрок должен это сделать.

Победа:

Игрок побеждает, если он захватил все шашки противника или противник не может сделать ход.
