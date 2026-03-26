#include <iostream>
using namespace std;

int main(){

// 1. Квадрат из звёздочек
int N1 = 4;
for(int i = 1; i <= N1; i++){
    for(int j = 1; j <= N1; j++){
        cout << "*";
    }
    cout << endl;
}
cout << endl;

// 2. Прямоугольник из решёток
int rows2 = 3, cols2 = 5;
for(int i = 1; i <= rows2; i++){
    for(int j = 1; j <= cols2; j++){
        cout << "#";
    }
    cout << endl;
}
cout << endl;

// 3. Таблица чисел
int N3 = 3, M3 = 5;
for(int i = 1; i <= N3; i++){
    for(int j = 1; j <= M3; j++){
        cout << j;
    }
    cout << endl;
}
cout << endl;

// 4. Таблица умножения 1–5
for(int i = 1; i <= 5; i++){
    for(int j = 1; j <= 5; j++){
        cout << i * j << " ";
    }
    cout << endl;
}
cout << endl;

// 5. Прямоугольный треугольник
int N5 = 5;
for(int i = 1; i <= N5; i++){
    for(int j = 1; j <= i; j++){
        cout << "*";
    }
    cout << endl;
}
cout << endl;

// 6. Перевёрнутый треугольник
for(int i = N5; i >= 1; i--){
    for(int j = 1; j <= i; j++){
        cout << "*";
    }
    cout << endl;
}
cout << endl;

// 7. Лесенка из чисел
for(int i = 1; i <= 5; i++){
    for(int j = 1; j <= i; j++){
        cout << j;
    }
    cout << endl;
}
cout << endl;

// 8. Одинаковые числа
for(int i = 1; i <= 5; i++){
    for(int j = 1; j <= i; j++){
        cout << i;
    }
    cout << endl;
}
cout << endl;

// 9. Треугольник с буквами
for(int i = 0; i < 5; i++){
    for(int j = 0; j <= i; j++){
        cout << char('A' + i);
    }
    cout << endl;
}
cout << endl;

// 10. Координаты
for(int i = 1; i <= 3; i++){
    for(int j = 1; j <= 3; j++){
        cout << "(" << i << "," << j << ") ";
    }
    cout << endl;
}
cout << endl;

// 11. Сумма чисел
int sum = 0;
for(int i = 1; i <= 2; i++){
    for(int j = 1; j <= 3; j++){
        sum += j;
    }
}
cout << "Сумма = " << sum << endl << endl;

// 12. Чётные числа
for(int i = 1; i <= 4; i++){
    for(int j = 1; j <= 4; j++){
        cout << j * 2 << " ";
    }
    cout << endl;
}
cout << endl;

// 13. Шахматный узор
for(int i = 1; i <= 5; i++){
    for(int j = 1; j <= 5; j++){
        if((i + j) % 2 == 0) cout << "X";
        else cout << "O";
    }
    cout << endl;
}
cout << endl;

// 14. Диагональ из единиц
for(int i = 1; i <= 5; i++){
    for(int j = 1; j <= 5; j++){
        if(i == j) cout << "1";
        else cout << "0";
    }
    cout << endl;
}
cout << endl;

// 15. Две диагонали
for(int i = 1; i <= 5; i++){
    for(int j = 1; j <= 5; j++){
        if(i == j || i + j == 6) cout << "*";
        else cout << ".";
    }
    cout << endl;
}
cout << endl;

// 16. Числовой квадрат
for(int i = 1; i <= 4; i++){
    for(int j = 1; j <= 4; j++){
        cout << j << " ";
    }
    cout << endl;
}
cout << endl;

// 17. Нумерация
int num = 1;
for(int i = 1; i <= 3; i++){
    for(int j = 1; j <= 4; j++){
        cout << num << " ";
        num++;
    }
    cout << endl;
}
cout << endl;

// 18. Обратный треугольник
for(int i = 5; i >= 1; i--){
    for(int j = 1; j <= i; j++){
        cout << j;
    }
    cout << endl;
}
cout << endl;

// 19. Пирамида
for(int i = 1; i <= 5; i++){
    for(int s = 1; s <= 5 - i; s++){
        cout << " ";
    }
    for(int j = 1; j <= 2 * i - 1; j++){
        cout << "*";
    }
    cout << endl;
}
cout << endl;

// 20. Полая рамка
for(int i = 1; i <= 5; i++){
    for(int j = 1; j <= 7; j++){
        if(i == 1 || i == 5 || j == 1 || j == 7)
            cout << "*";
        else
            cout << " ";
    }
    cout << endl;
}
cout << endl;

// 21. Чёт/нечёт
for(int i = 1; i <= 5; i++){
    for(int j = 1; j <= 5; j++){
        if((i + j) % 2 == 0) cout << "1";
        else cout << "0";
    }
    cout << endl;
}
cout << endl;

// 22. Сумма индексов
for(int i = 1; i <= 3; i++){
    for(int j = 1; j <= 3; j++){
        cout << i + j << " ";
    }
    cout << endl;
}
cout << endl;

// 23. Таблица сравнения
for(int i = 1; i <= 4; i++){
    for(int j = 1; j <= 4; j++){
        if(i == j) cout << "* ";
        else if(i > j) cout << "+ ";
        else cout << "- ";
    }
    cout << endl;
}
cout << endl;

// 24. Ромб
for(int i = 1; i <= 5; i++){
    for(int s = 1; s <= 5 - i; s++) cout << " ";
    for(int j = 1; j <= 2 * i - 1; j++) cout << "*";
    cout << endl;
}
for(int i = 4; i >= 1; i--){
    for(int s = 1; s <= 5 - i; s++) cout << " ";
    for(int j = 1; j <= 2 * i - 1; j++) cout << "*";
    cout << endl;
}
cout << endl;

// 25. Таблица умножения 1–10
for(int i = 1; i <= 10; i++){
    for(int j = 1; j <= 10; j++){
        cout << i * j << "\t";
    }
    cout << endl;
}

return 0;
}