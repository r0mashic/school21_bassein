/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_foreach.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: balysane <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/18 13:27:13 by balysane          #+#    #+#             */
/*   Updated: 2021/08/18 19:49:19 by balysane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>
#include <time.h>
#include <math.h>
int min_function(int a, int b, int c);

int main()
{
    srand(time(NULL));
    int value_of_massive = 20;
    char NACH_ARR[value_of_massive][value_of_massive];
    int INT_ARR[value_of_massive][value_of_massive];
    int NEW_INT_ARR[value_of_massive][value_of_massive];

    for (int i = 0; i < value_of_massive; i++)                                        //    заполнение точками
    {
        for (int j = 0; j < value_of_massive; j++ )
            NACH_ARR[i][j] = '.'; 
    }

    for (int i = 0; i < value_of_massive; i++)                                        //    заполнение нулями
    {
        for (int j = 0; j < value_of_massive - (value_of_massive - 2); j++)
            NACH_ARR[i][rand() % value_of_massive] = 'o';
    }

    for (int i = 0; i < value_of_massive; i++)                                        //    вывод на экран NACH_ARR
    {        
        for (int j = 0; j < value_of_massive; j++ )
            printf( "%c", NACH_ARR[i][j]);
        printf( "\n" );
    }
    printf("\n");

    for (int i = 0; i < value_of_massive; i++)                                        //    замена char -> int
    {
        for(int j = 0; j < value_of_massive; j++)
        {
            if (NACH_ARR[i][j] == 'o')
                INT_ARR[i][j] = 0;
            else
                INT_ARR[i][j] = 1;
        }
    }

    printf("карта c 1 и 0:\n");
    for (int i = 0; i < value_of_massive; i++)                                        //    вывод на экран INT_ARR
    {        
        for (int j = 0; j < value_of_massive; j++ )
            printf( "%d", INT_ARR[i][j]);
        printf( "\n" );
    }
    printf("\n");

    for (int j = 0; j < value_of_massive; j++)                                        //    проверка ближайших значений
    {        
        for (int i = 0; i < value_of_massive; i++)
        {
            if (i*j != 0 && INT_ARR[i][j] != 0 )
                INT_ARR[i][j] = min_function(INT_ARR[i-1][j-1], INT_ARR[i-1][j], INT_ARR[i][j-1]) + 1;
            else
                INT_ARR[i][j] = INT_ARR[i][j];
        }
    }

        printf("карта с нахождением квадратов:\n");
    for (int i = 0; i < value_of_massive; i++)                                        //    вывод на экран INT_ARR
    {        
        for (int j = 0; j < value_of_massive; j++ )
            printf( "%d", INT_ARR[i][j]);
        printf( "\n" );
    }

    int Jindex = 0;
    int Iindex = 0;
    int k = 0;

    // for (int i = 0; i < value_of_massive; i++)                                     //    заполнение точками
    //     for (int j = 0; j < value_of_massive; j++ )
    //         NEW_INT_ARR[i][j] = 0; 

    for (int j = 0; j < value_of_massive; j++)                                        //    нахождение максимального значения
    {        
        for (int i = 0; i < value_of_massive; i++)
        {
            if (i*j != 0 && INT_ARR[i][j] != 0 )
                if (INT_ARR[i][j] > k)
                    k = INT_ARR[i][j];
        }
    }

    // for (int j = 0; j < value_of_massive; j++)                                     //    нахождение 1 максимального значения
    // {        
    //     for (int i = 0; i < value_of_massive; i++)
    //     {
    //         if (i*j != 0 && INT_ARR[i][j] != 0 )
    //             if (INT_ARR[i][j] == k)
    //             {
    //                 NEW_INT_ARR[i][j] = INT_ARR[i][j];
    //                 Iindex = i;
    //                 Jindex = j;
    //                 printf("\n[i]: %d", Iindex);
    //                 printf("\n[j]: %d\n\n", Jindex);
    //             }
    //     }
    // }

    for (int j = 0; j < value_of_massive; j++)                                        //    нахождение 1 максимального значения
    {        
        for (int i = 0; i < value_of_massive; i++)
        {
            if (INT_ARR[i][j] != 0 )
            {
                if (INT_ARR[i][j] == k)
                {
                    // INT_ARR[i][j] = INT_ARR[i][j];
                    Iindex = i;
                    Jindex = j;
                    k++;
                }
                else 
                    INT_ARR[i][j] = 0;
            }
        }
    }
int max_znach = k - 1;
    for (int j = 0; j < value_of_massive; j++)                                        //    квадрат из макс значений
    {        
        for (int i = 0; i < value_of_massive; i++)
        {
            if (INT_ARR[i][j] == max_znach )
                for (int j1 = 0; j1 < j; j++)
                {
                    for (int i1 = 0; i1 < i; i++)
                    {
                        INT_ARR[i][j] = max_znach;

                    
//                     }

//                 }
                
//                 // if (INT_ARR[i][j] == k)
//                 // {
//                 //     INT_ARR[i][j] = INT_ARR[i][j];
//                 //     Iindex = i;
//                 //     Jindex = j;
//                 //     k++;
//                 // }3qq1 2   q2x 
//                 // else 
//                 //     INT_ARR[i][j] = 2;
//         }
//     }



    printf("\nmax value: %d", k - 1);  
    printf("\n[i]: %d", Iindex);
    printf("\n[j]: %d\n\n", Jindex);

    for (int i = 0; i < value_of_massive; i++)                                        //    вывод на экран INT_ARR
    {        
        for (int j = 0; j < value_of_massive; j++ )
            printf( "%d", INT_ARR[i][j]);
        printf( "\n" );
    }

    // for (int j = 0; j < value_of_massive; j++)                                     //    зполнение массива 0 и макс квадратом
    // {        
    //     for (int i = 0; i < value_of_massive; i++)
    //     {
    //         if (i*j != 0 && INT_ARR[i][j] != 0 )
    //             INT_ARR[i][j] = min_function(INT_ARR[i-1][j-1], INT_ARR[i-1][j], INT_ARR[i][j-1]) + 1;
    //         else
    //             INT_ARR[i][j] = INT_ARR[i][j];
    //     }
    // }ж   
            
//     for (int j = 0; j < value_of_massive; j++)                                         //    нахождение максимального значения
//     {        
//         for (int i = 0; i < value_of_massive; i++)
//         {
//             if (INT_ARR[i][j] == k - 1 )
//                 printf("kisa");
//                 // for (int i; i < INT_ARR[i])
//                 //     ;
//                 //if (INT_ARR[i][j] > k)
//                 //    k = INT_ARR[i][j];
//         }

//     }
  }

int min_function(int a, int b, int c) 
{
    if (a <= b && a <= c) 
        return (a);
    else if (b <= a && b <= c) 
        return (b);
    else 
        return (c);
}
