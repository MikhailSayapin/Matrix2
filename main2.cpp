#include <iostream>
#include <stdlib.h>
#include <string.h>

using namespace std;

int main(int argc, char* argv[])
{

    if (argc == 1)
    {
        cout << " Матрица пустая. " << endl;
        return 0;
    }

    string str1 = "\0", str2 = "\0";
    int x, y, i, j, k, m, n; // k используется на всём протяжении программы для разных целей.
    for (k = 0; argv[1][k] != '*'; k++)
    {
        str1 += argv[1][k];
    }

    k++;

    while (k != strlen(argv[1]))
    {
        str2 += argv[1][k];
        k++;
    }

    k = 2;

    x = atoi(str1.c_str());
    y = atoi(str2.c_str());

    int arr[x][y];

    if ((argc - 2) > (x * y))
    {
        cout << " \nПереполнение элементами матрицы размера " << x << "*" << y << endl;
        return 0;
    }

    if ((argc - 2) < (x * y))
    {
        cout << " \nНедостаточно элементов для матрицы размера " << x << "*" << y << endl;
        return 0;
    }


    for (i = 0; i < x; i++)
    {
        for (j = 0; j < y; j++)
        {
            arr[i][j] = atoi(argv[k]);
            k++;
        }
    }


    while (true)
    {
        cout << "\nВыберите одну из операций:" << endl;
        cout << "1. Вывести матрицу" << endl;
        cout << "2. Сложить матрицу" << endl;
        cout << "3. Умножить матрицу" << endl;
        cout << "4. Транспонировать матрицу" << endl;
        cout << "5. Сохранить в файл" << endl;
        cout << "6. Загрузить из файла" << endl;
        cout << "7. Сортировать матрицу" << endl;
        cout << "8. Выйти\n" << endl;
        cin >> k;
        switch (k)
        {
            case 8:
            {
                return 0;
            }
            
            
            case 1:
            {
                cout << endl;
                for (i = 0; i < x; i++)
                {
                    for (j = 0; j < y; j++)
                    {
                        cout << arr[i][j] << " ";
                    }
                    cout << endl;
                }
                break;
            }

            
            case 2:
            {
                cout << endl;
                cout << "Введите элементы матрицы размера " << x << "*" << y << endl;
                int arrsumm[x][y];
                for(i=0; i<x; i++)
                {
                    for(j=0; j<y; j++)
                    {
                        cin >> arrsumm[i][j];
                    }
                }
                
                cout << endl;
                
                for(i=0; i<x; i++)
                {
                    for(j=0; j<y; j++)
                    {
                        cout << arr[i][j] + arrsumm[i][j] << " ";
                    }
                    cout << endl;
                }
                break;
            }

            
            
            default:
                cout << "Номер операции введён неверно.";
        }
    }

    return 0;
}
