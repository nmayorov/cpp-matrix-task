# Тестовое задание для разработчика C++

Требуется реализовать простую ("игрушечную" или демо) библиотеку линейной алгебры на C++.

## Требования к функционалу

Библиотека должна предоставлять две сущности: матрица и вектор. 
Вектор может быть реализован, как частный случай матрицы.
Должны поддерживаться следующие операции (под матрицей ниже подразумевается матрица или вектор):

1. Создание матрицы, возможность задать её элементы
2. Прочитать или назначить элемент матрицы по индексам
3. Возможность напечатать матрицу (преобразование к строке, либо вывод в поток std::ostream)
4. Умножение матрицы на скаляр `B = s * A`
5. Сложение и вычитание матриц `C = A + B`, `D = A - B`
6. Матричное умножение `C = A * B`, `y = A * x`
7. Транспонирование матрицы
8. Поддержка "in-place" версий операций по типу `A += B`
9. Бонусный пункт: вычисление обратной матрицы и/или решение системы уравнений `A * x = b`, для квадратной матрицы `A`

Для реализации операций в математической нотации нужно воспользоваться перегрузкой операторов в C++.

Конкретная реализации, сигнатуры методов или функций, обработка ошибок и т. д. остается на усмотрение автора решения.
Будут оцениваться все аспекты предложенной реализации.

## Требование к оформлению решения

Решение требуется оформить, как проект на CMake, содержащий две части:

1. Статическую библиотеку, реализующую требуемый функционал для линейной алгебры
2. Приложение, которое выполняет тесты, проверяющие реализованный функционал с помощью библиотеки для модульного тестирования Catch2

Результатом сборки проекта будет бинарный файл библиотеки и исполняемый файл с тестами, запустив который, можно увидеть, что N-ое число тестов успешно проходит.

Пример структуры такого проекта находится в директории `demo`.
Ожидается, что автор решения должен разобраться с CMake и использованием библиотеки Catch2.
Обратите внимание, что заголовочный файл `catch.hpp` содержится в директории `demo/tests`, ничего кроме него для написания тестов не потребуется.

## Пожелания к решению и критерии оценки

Будет оцениваться:

- Дизайн: логичность и элегантность предложенных классов, методов, способ обработки ошибок и т. д.
- Полнота и корректность реализации
- Идиоматичность использования C++, "чистота" кода
- Качество покрытия функционала тестами

Пожелания к решению:

- Использовать консистентный стиль и форматирование кода, быть внимательным к деталям, наименованию переменных и т. д.
- Предпочитать возможности языка C++ возможностям языка C (std::ostream заместо printf и т. д.)
- По возможности приложить небольшое описание к коду: какой был быбран подход в целом, какие были приняты трудные решения, почему и т. д.
