using System;
using System.Collections.Generic;
using System.Threading;

class Program
{
    static void Main()
    {
        List<ConsoleKey> sequence = new List<ConsoleKey>{ ConsoleKey.DownArrow, ConsoleKey.RightArrow, ConsoleKey.A };

        Console.WriteLine("Ű���� �Է��� �����մϴ�. 0.3�ʸ��� �Է��� �׽��ϴ�.");

        List<ConsoleKey> inputSequence = new List<ConsoleKey>();
        bool invalidInput = false;

        while (true)
        {
            if (Console.KeyAvailable)
            {
                ConsoleKeyInfo keyInfo = Console.ReadKey(intercept: true);

                if (keyInfo.Key == ConsoleKey.Escape)
                {
                    Console.WriteLine("���α׷� ����");
                    break;
                }

                if (keyInfo.Key != ConsoleKey.Spacebar)
                {
                    inputSequence.Add(keyInfo.Key);
                }

                invalidInput = !IsValidSequence(inputSequence, sequence);
            }

            Thread.Sleep(300);

            if (inputSequence.Count >= sequence.Count)
            {
                if (!invalidInput && CompareLists(inputSequence, sequence))
                {
                    Console.WriteLine("�Ƶ���! =o");
                }

                inputSequence.Clear();
                invalidInput = false;
            }
        }
    }

    static bool IsValidSequence(List<ConsoleKey> input, List<ConsoleKey> sequence)
    {
        int minCount = Math.Min(input.Count, sequence.Count);

        for (int i = 0; i < minCount; i++)
        {
            if (input[i] != sequence[i])
            {
                return false;
            }
        }

        return true;
    }

    static bool CompareLists(List<ConsoleKey> list1, List<ConsoleKey> list2)
    {
        if (list1.Count != list2.Count)
        {
            return false;
        }

        for (int i = 0; i < list1.Count; i++)
        {
            if (list1[i] != list2[i])
            {
                return false;
            }
        }

        return true;
    }
}
