﻿using System;

class Pattern_22
{
    public static void Main()
    {

    for (int i = 4;i >= 0;i--)
    {
    for (int j = 0;j <= i;j++)
    {
    Console.Write((char)(i + 65));
    }
    Console.WriteLine();
    }
        Console.ReadKey(true);
    }
}
