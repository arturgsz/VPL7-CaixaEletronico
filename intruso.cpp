#include <string>
#include <vector>
#include <iostream>
#include <map>
#include "intruso.hpp"
// Exemplos de entrada
// 2 (numero de entrada)
// 1 7 3 9 0 8 5 6 2 4 B C E A E B
// 9 0 7 5 8 4 6 2 3 1 E C C B D A
//----------------------------------

std ::vector<char> a, b, c, d, e;
int size_all_password = 0, counter = 0;
std ::string password = "         ";

void Intruso ::set_senha_vazada(std::string vazou)
{
    // Duas primeiras prosições de cada vetor de cada letra são os possiveis numeros;
    a.push_back(vazou[0]);
    a.push_back(vazou[2]);
    b.push_back(vazou[4]);
    b.push_back(vazou[6]);
    c.push_back(vazou[8]);
    c.push_back(vazou[10]);
    d.push_back(vazou[12]);
    d.push_back(vazou[14]);
    e.push_back(vazou[16]);
    e.push_back(vazou[18]);

    for (int i = 20; i < vazou.size(); i += 2)
    {
        all_passwords.push_back(vazou[i]);
        size_all_password = all_passwords.size();
    }
}

// Implementado, mas apenas vai testar as duas primeiras senhas;
void Intruso ::crack_senha()
{
    std ::vector<char> count;

    for (int i = 0; i < 6; i++)
    {
        switch (all_passwords[i])
        {
        case 'A':
            switch (all_passwords[i + 6])
            {
            case 'A':
                if (size_all_password / 6 == 3)
                {
                    switch (all_passwords[i + 12])
                    {
                    case 'A':
                        for (int j = 0; j < 2; j++)
                        {
                            for (int k = 2; k < 4; k++)
                            {
                                for (int l = 4; l < 6; l++)
                                {
                                    if (a[j] == a[k] && a[j] == a[l])
                                        count.push_back(a[j]);
                                }
                            }
                        }
                        break;
                    case 'B':
                        for (int j = 0; j < 2; j++)
                        {
                            for (int k = 2; k < 4; k++)
                            {
                                for (int l = 4; l < 6; l++)
                                {
                                    if (a[j] == a[k] && a[j] == b[l])
                                        count.push_back(a[j]);
                                }
                            }
                        }
                        break;
                    case 'C':
                        for (int j = 0; j < 2; j++)
                        {
                            for (int k = 2; k < 4; k++)
                            {
                                for (int l = 4; l < 6; l++)
                                {
                                    if (a[j] == a[k] && a[j] == c[l])
                                        count.push_back(a[j]);
                                }
                            }
                        }
                        break;
                    case 'D':
                        for (int j = 0; j < 2; j++)
                        {
                            for (int k = 2; k < 4; k++)
                            {
                                for (int l = 4; l < 6; l++)
                                {
                                    if (a[j] == a[k] && a[j] == d[l])
                                        count.push_back(a[j]);
                                }
                            }
                        }
                        break;
                    case 'E':
                        for (int j = 0; j < 2; j++)
                        {
                            for (int k = 2; k < 4; k++)
                            {
                                for (int l = 4; l < 6; l++)
                                {
                                    if (a[j] == a[k] && a[j] == e[l])
                                        count.push_back(a[j]);
                                }
                            }
                        }
                        break;
                    }
                }
                else
                {
                    for (int j = 0; j < 2; j++)
                    {
                        for (int k = 2; k < 4; k++)
                        {
                            if (a[j] == a[k])
                                count.push_back(a[j]);
                        }
                    }
                }
                break;

            case 'B':
                if (size_all_password / 6 == 3)
                {
                    switch (all_passwords[i + 12])
                    {
                    case 'A':
                        for (int j = 0; j < 2; j++)
                        {
                            for (int k = 2; k < 4; k++)
                            {
                                for (int l = 4; l < 6; l++)
                                {
                                    if (a[j] == b[k] && a[j] == a[l])
                                        count.push_back(a[j]);
                                }
                            }
                        }
                        break;
                    case 'B':
                        for (int j = 0; j < 2; j++)
                        {
                            for (int k = 2; k < 4; k++)
                            {
                                for (int l = 4; l < 6; l++)
                                {
                                    if (a[j] == b[k] && a[j] == b[l])
                                        count.push_back(a[j]);
                                }
                            }
                        }
                        break;
                    case 'C':
                        for (int j = 0; j < 2; j++)
                        {
                            for (int k = 2; k < 4; k++)
                            {
                                for (int l = 4; l < 6; l++)
                                {
                                    if (a[j] == b[k] && a[j] == c[l])
                                        count.push_back(a[j]);
                                }
                            }
                        }
                        break;
                    case 'D':
                        for (int j = 0; j < 2; j++)
                        {
                            for (int k = 2; k < 4; k++)
                            {
                                for (int l = 4; l < 6; l++)
                                {
                                    if (a[j] == b[k] && a[j] == d[l])
                                        count.push_back(a[j]);
                                }
                            }
                        }
                        break;
                    case 'E':
                        for (int j = 0; j < 2; j++)
                        {
                            for (int k = 2; k < 4; k++)
                            {
                                for (int l = 4; l < 6; l++)
                                {
                                    if (a[j] == b[k] && a[j] == e[l])
                                        count.push_back(a[j]);
                                }
                            }
                        }
                        break;
                    }
                }
                else
                {
                    for (int j = 0; j < 2; j++)
                    {
                        for (int k = 2; k < 4; k++)
                        {
                            if (a[j] == b[k])
                                count.push_back(a[j]);
                        }
                    }
                }
                break;
            case 'C':
                if (size_all_password / 6 == 3)
                {
                    switch (all_passwords[i + 12])
                    {
                    case 'A':
                        for (int j = 0; j < 2; j++)
                        {
                            for (int k = 2; k < 4; k++)
                            {
                                for (int l = 4; l < 6; l++)
                                {
                                    if (a[j] == c[k] && a[j] == a[l])
                                        count.push_back(a[j]);
                                }
                            }
                        }
                        break;
                    case 'B':
                        for (int j = 0; j < 2; j++)
                        {
                            for (int k = 2; k < 4; k++)
                            {
                                for (int l = 4; l < 6; l++)
                                {
                                    if (a[j] == c[k] && a[j] == b[l])
                                        count.push_back(a[j]);
                                }
                            }
                        }
                        break;
                    case 'C':
                        for (int j = 0; j < 2; j++)
                        {
                            for (int k = 2; k < 4; k++)
                            {
                                for (int l = 4; l < 6; l++)
                                {
                                    if (a[j] == c[k] && a[j] == c[l])
                                        count.push_back(a[j]);
                                }
                            }
                        }
                        break;
                    case 'D':
                        for (int j = 0; j < 2; j++)
                        {
                            for (int k = 2; k < 4; k++)
                            {
                                for (int l = 4; l < 6; l++)
                                {
                                    if (a[j] == c[k] && a[j] == d[l])
                                        count.push_back(a[j]);
                                }
                            }
                        }
                        break;
                    case 'E':
                        for (int j = 0; j < 2; j++)
                        {
                            for (int k = 2; k < 4; k++)
                            {
                                for (int l = 4; l < 6; l++)
                                {
                                    if (a[j] == c[k] && a[j] == e[l])
                                        count.push_back(a[j]);
                                }
                            }
                        }
                        break;
                    }
                }
                else
                {
                    for (int j = 0; j < 2; j++)
                    {
                        for (int k = 2; k < 4; k++)
                        {
                            if (a[j] == c[k])
                                count.push_back(a[j]);
                        }
                    }
                }
                break;
            case 'D':
                if (size_all_password / 6 == 3)
                {
                    switch (all_passwords[i + 12])
                    {
                    case 'A':
                        for (int j = 0; j < 2; j++)
                        {
                            for (int k = 2; k < 4; k++)
                            {
                                for (int l = 4; l < 6; l++)
                                {
                                    if (a[j] == d[k] && a[j] == a[l])
                                        count.push_back(a[j]);
                                }
                            }
                        }
                        break;
                    case 'B':
                        for (int j = 0; j < 2; j++)
                        {
                            for (int k = 2; k < 4; k++)
                            {
                                for (int l = 4; l < 6; l++)
                                {
                                    if (a[j] == d[k] && a[j] == b[l])
                                        count.push_back(a[j]);
                                }
                            }
                        }
                        break;
                    case 'C':
                        for (int j = 0; j < 2; j++)
                        {
                            for (int k = 2; k < 4; k++)
                            {
                                for (int l = 4; l < 6; l++)
                                {
                                    if (a[j] == d[k] && a[j] == c[l])
                                        count.push_back(a[j]);
                                }
                            }
                        }
                        break;
                    case 'D':
                        for (int j = 0; j < 2; j++)
                        {
                            for (int k = 2; k < 4; k++)
                            {
                                for (int l = 4; l < 6; l++)
                                {
                                    if (a[j] == d[k] && a[j] == d[l])
                                        count.push_back(a[j]);
                                }
                            }
                        }
                        break;
                    case 'E':
                        for (int j = 0; j < 2; j++)
                        {
                            for (int k = 2; k < 4; k++)
                            {
                                for (int l = 4; l < 6; l++)
                                {
                                    if (a[j] == d[k] && a[j] == e[l])
                                        count.push_back(a[j]);
                                }
                            }
                        }
                        break;
                    }
                }
                else
                {
                    for (int j = 0; j < 2; j++)
                    {
                        for (int k = 2; k < 4; k++)
                        {
                            if (a[j] == d[k])
                                count.push_back(a[j]);
                        }
                    }
                }
                break;
            case 'E':
                if (size_all_password / 6 == 3)
                {
                    switch (all_passwords[i + 12])
                    {
                    case 'A':
                        for (int j = 0; j < 2; j++)
                        {
                            for (int k = 2; k < 4; k++)
                            {
                                for (int l = 4; l < 6; l++)
                                {
                                    if (a[j] == e[k] && a[j] == a[l])
                                        count.push_back(a[j]);
                                }
                            }
                        }
                        break;
                    case 'B':
                        for (int j = 0; j < 2; j++)
                        {
                            for (int k = 2; k < 4; k++)
                            {
                                for (int l = 4; l < 6; l++)
                                {
                                    if (a[j] == e[k] && a[j] == b[l])
                                        count.push_back(a[j]);
                                }
                            }
                        }
                        break;
                    case 'C':
                        for (int j = 0; j < 2; j++)
                        {
                            for (int k = 2; k < 4; k++)
                            {
                                for (int l = 4; l < 6; l++)
                                {
                                    if (a[j] == e[k] && a[j] == c[l])
                                        count.push_back(a[j]);
                                }
                            }
                        }
                        break;
                    case 'D':
                        for (int j = 0; j < 2; j++)
                        {
                            for (int k = 2; k < 4; k++)
                            {
                                for (int l = 4; l < 6; l++)
                                {
                                    if (a[j] == e[k] && a[j] == d[l])
                                        count.push_back(a[j]);
                                }
                            }
                        }
                        break;
                    case 'E':
                        for (int j = 0; j < 2; j++)
                        {
                            for (int k = 2; k < 4; k++)
                            {
                                for (int l = 4; l < 6; l++)
                                {
                                    if (a[j] == e[k] && a[j] == e[l])
                                        count.push_back(a[j]);
                                }
                            }
                        }
                        break;
                    }
                }
                else
                {
                    for (int j = 0; j < 2; j++)
                    {
                        for (int k = 2; k < 4; k++)
                        {
                            if (a[j] == e[k])
                                count.push_back(a[j]);
                        }
                    }
                    break;
                }
            }
            break;

            ///////////////////////////////////////////////////////////////////////////////////////////////////////////////

        case 'B':
            switch (all_passwords[i + 6])
            {
            case 'A':
                if (size_all_password / 6 == 3)
                {
                    switch (all_passwords[i + 12])
                    {
                    case 'A':
                        for (int j = 0; j < 2; j++)
                        {
                            for (int k = 2; k < 4; k++)
                            {
                                for (int l = 4; l < 6; l++)
                                {
                                    if (b[j] == a[k] && b[j] == a[l])
                                        count.push_back(b[j]);
                                }
                            }
                        }
                        break;
                    case 'B':
                        for (int j = 0; j < 2; j++)
                        {
                            for (int k = 2; k < 4; k++)
                            {
                                for (int l = 4; l < 6; l++)
                                {
                                    if (b[j] == a[k] && b[j] == b[l])
                                        count.push_back(b[j]);
                                }
                            }
                        }
                        break;
                    case 'C':
                        for (int j = 0; j < 2; j++)
                        {
                            for (int k = 2; k < 4; k++)
                            {
                                for (int l = 4; l < 6; l++)
                                {
                                    if (b[j] == a[k] && b[j] == c[l])
                                        count.push_back(b[j]);
                                }
                            }
                        }
                        break;
                    case 'D':
                        for (int j = 0; j < 2; j++)
                        {
                            for (int k = 2; k < 4; k++)
                            {
                                for (int l = 4; l < 6; l++)
                                {
                                    if (b[j] == a[k] && b[j] == d[l])
                                        count.push_back(b[j]);
                                }
                            }
                        }
                        break;
                    case 'E':
                        for (int j = 0; j < 2; j++)
                        {
                            for (int k = 2; k < 4; k++)
                            {
                                for (int l = 4; l < 6; l++)
                                {
                                    if (b[j] == a[k] && b[j] == e[l])
                                        count.push_back(b[j]);
                                }
                            }
                        }
                        break;
                    }
                }
                else
                {
                    for (int j = 0; j < 2; j++)
                    {
                        for (int k = 2; k < 4; k++)
                        {
                            if (b[j] == a[k])
                                count.push_back(b[j]);
                        }
                    }
                }
                break;

            case 'B':
                if (size_all_password / 6 == 3)
                {
                    switch (all_passwords[i + 12])
                    {
                    case 'A':
                        for (int j = 0; j < 2; j++)
                        {
                            for (int k = 2; k < 4; k++)
                            {
                                for (int l = 4; l < 6; l++)
                                {
                                    if (b[j] == b[k] && b[j] == a[l])
                                        count.push_back(b[j]);
                                }
                            }
                        }
                        break;
                    case 'B':
                        for (int j = 0; j < 2; j++)
                        {
                            for (int k = 2; k < 4; k++)
                            {
                                for (int l = 4; l < 6; l++)
                                {
                                    if (b[j] == b[k] && b[j] == b[l])
                                        count.push_back(b[j]);
                                }
                            }
                        }
                        break;
                    case 'C':
                        for (int j = 0; j < 2; j++)
                        {
                            for (int k = 2; k < 4; k++)
                            {
                                for (int l = 4; l < 6; l++)
                                {
                                    if (b[j] == b[k] && b[j] == c[l])
                                        count.push_back(b[j]);
                                }
                            }
                        }
                        break;
                    case 'D':
                        for (int j = 0; j < 2; j++)
                        {
                            for (int k = 2; k < 4; k++)
                            {
                                for (int l = 4; l < 6; l++)
                                {
                                    if (b[j] == b[k] && b[j] == d[l])
                                        count.push_back(b[j]);
                                }
                            }
                        }
                        break;
                    case 'E':
                        for (int j = 0; j < 2; j++)
                        {
                            for (int k = 2; k < 4; k++)
                            {
                                for (int l = 4; l < 6; l++)
                                {
                                    if (b[j] == b[k] && b[j] == e[l])
                                        count.push_back(b[j]);
                                }
                            }
                        }
                        break;
                    }
                }
                else
                {
                    for (int j = 0; j < 2; j++)
                    {
                        for (int k = 2; k < 4; k++)
                        {
                            if (b[j] == b[k])
                                count.push_back(b[j]);
                        }
                    }
                }
                break;
            case 'C':
                if (size_all_password / 6 == 3)
                {
                    switch (all_passwords[i + 12])
                    {
                    case 'A':
                        for (int j = 0; j < 2; j++)
                        {
                            for (int k = 2; k < 4; k++)
                            {
                                for (int l = 4; l < 6; l++)
                                {
                                    if (b[j] == c[k] && b[j] == a[l])
                                        count.push_back(b[j]);
                                }
                            }
                        }
                        break;
                    case 'B':
                        for (int j = 0; j < 2; j++)
                        {
                            for (int k = 2; k < 4; k++)
                            {
                                for (int l = 4; l < 6; l++)
                                {
                                    if (b[j] == c[k] && b[j] == b[l])
                                        count.push_back(b[j]);
                                }
                            }
                        }
                        break;
                    case 'C':
                        for (int j = 0; j < 2; j++)
                        {
                            for (int k = 2; k < 4; k++)
                            {
                                for (int l = 4; l < 6; l++)
                                {
                                    if (b[j] == c[k] && b[j] == c[l])
                                        count.push_back(b[j]);
                                }
                            }
                        }
                        break;
                    case 'D':
                        for (int j = 0; j < 2; j++)
                        {
                            for (int k = 2; k < 4; k++)
                            {
                                for (int l = 4; l < 6; l++)
                                {
                                    if (b[j] == c[k] && b[j] == d[l])
                                        count.push_back(b[j]);
                                }
                            }
                        }
                        break;
                    case 'E':
                        for (int j = 0; j < 2; j++)
                        {
                            for (int k = 2; k < 4; k++)
                            {
                                for (int l = 4; l < 6; l++)
                                {
                                    if (b[j] == c[k] && b[j] == e[l])
                                        count.push_back(b[j]);
                                }
                            }
                        }
                        break;
                    }
                }
                else
                {
                    for (int j = 0; j < 2; j++)
                    {
                        for (int k = 2; k < 4; k++)
                        {
                            if (b[j] == c[k])
                                count.push_back(b[j]);
                        }
                    }
                }
                break;
            case 'D':
                if (size_all_password / 6 == 3)
                {
                    switch (all_passwords[i + 12])
                    {
                    case 'A':
                        for (int j = 0; j < 2; j++)
                        {
                            for (int k = 2; k < 4; k++)
                            {
                                for (int l = 4; l < 6; l++)
                                {
                                    if (b[j] == d[k] && b[j] == a[l])
                                        count.push_back(b[l]);
                                }
                            }
                        }
                        break;
                    case 'B':
                        for (int j = 0; j < 2; j++)
                        {
                            for (int k = 2; k < 4; k++)
                            {
                                for (int l = 4; l < 6; l++)
                                {
                                    if (b[j] == d[k] && b[j] == b[l])
                                        count.push_back(b[j]);
                                }
                            }
                        }
                        break;
                    case 'C':
                        for (int j = 0; j < 2; j++)
                        {
                            for (int k = 2; k < 4; k++)
                            {
                                for (int l = 4; l < 6; l++)
                                {
                                    if (b[j] == d[k] && b[j] == c[l])
                                        count.push_back(b[j]);
                                }
                            }
                        }
                        break;
                    case 'D':
                        for (int j = 0; j < 2; j++)
                        {
                            for (int k = 2; k < 4; k++)
                            {
                                for (int l = 4; l < 6; l++)
                                {
                                    if (b[j] == d[k] && b[j] == d[l])
                                        count.push_back(b[j]);
                                }
                            }
                        }
                        break;
                    case 'E':
                        for (int j = 0; j < 2; j++)
                        {
                            for (int k = 2; k < 4; k++)
                            {
                                for (int l = 4; l < 6; l++)
                                {
                                    if (b[j] == d[k] && b[j] == e[l])
                                        count.push_back(b[j]);
                                }
                            }
                        }
                        break;
                    }
                }
                else
                {
                    for (int j = 0; j < 2; j++)
                    {
                        for (int k = 2; k < 4; k++)
                        {
                            if (b[j] == d[k])
                                count.push_back(b[j]);
                        }
                    }
                }
                break;
            case 'E':
                if (size_all_password / 6 == 3)
                {
                    switch (all_passwords[i + 12])
                    {
                    case 'A':
                        for (int j = 0; j < 2; j++)
                        {
                            for (int k = 2; k < 4; k++)
                            {
                                for (int l = 4; l < 6; l++)
                                {
                                    if (b[j] == e[k] && b[j] == a[l])
                                        count.push_back(b[j]);
                                }
                            }
                        }
                        break;
                    case 'B':
                        for (int j = 0; j < 2; j++)
                        {
                            for (int k = 2; k < 4; k++)
                            {
                                for (int l = 4; l < 6; l++)
                                {
                                    if (b[j] == e[k] && b[j] == b[l])
                                        count.push_back(b[j]);
                                }
                            }
                        }
                        break;
                    case 'C':
                        for (int j = 0; j < 2; j++)
                        {
                            for (int k = 2; k < 4; k++)
                            {
                                for (int l = 4; l < 6; l++)
                                {
                                    if (b[j] == e[k] && b[j] == c[l])
                                        count.push_back(b[j]);
                                }
                            }
                        }
                        break;
                    case 'D':
                        for (int j = 0; j < 2; j++)
                        {
                            for (int k = 2; k < 4; k++)
                            {
                                for (int l = 4; l < 6; l++)
                                {
                                    if (b[j] == e[k] && b[j] == d[l])
                                        count.push_back(b[j]);
                                }
                            }
                        }
                        break;
                    case 'E':
                        for (int j = 0; j < 2; j++)
                        {
                            for (int k = 2; k < 4; k++)
                            {
                                for (int l = 4; l < 6; l++)
                                {
                                    if (b[j] == e[k] && b[j] == e[l])
                                        count.push_back(b[j]);
                                }
                            }
                        }
                        break;
                    }
                }
                else
                {
                    for (int j = 0; j < 2; j++)
                    {
                        for (int k = 2; k < 4; k++)
                        {
                            if (b[j] == e[k])
                                count.push_back(b[j]);
                        }
                    }
                    break;
                }
            }
            break;

            /////////////////////////////////////////////////////////////////////////////////////////////////////////////

        case 'C':
            switch (all_passwords[i + 6])
            {
            case 'A':
                if (size_all_password / 6 == 3)
                {
                    switch (all_passwords[i + 12])
                    {
                    case 'A':
                        for (int j = 0; j < 2; j++)
                        {
                            for (int k = 2; k < 4; k++)
                            {
                                for (int l = 4; l < 6; l++)
                                {
                                    if (c[j] == a[k] && c[j] == a[l])
                                        count.push_back(c[j]);
                                }
                            }
                        }
                        break;
                    case 'B':
                        for (int j = 0; j < 2; j++)
                        {
                            for (int k = 2; k < 4; k++)
                            {
                                for (int l = 4; l < 6; l++)
                                {
                                    if (c[j] == a[k] && c[j] == b[l])
                                        count.push_back(c[j]);
                                }
                            }
                        }
                        break;
                    case 'C':
                        for (int j = 0; j < 2; j++)
                        {
                            for (int k = 2; k < 4; k++)
                            {
                                for (int l = 4; l < 6; l++)
                                {
                                    if (c[j] == a[k] && c[j] == c[l])
                                        count.push_back(c[j]);
                                }
                            }
                        }
                        break;
                    case 'D':
                        for (int j = 0; j < 2; j++)
                        {
                            for (int k = 2; k < 4; k++)
                            {
                                for (int l = 4; l < 6; l++)
                                {
                                    if (c[j] == a[k] && c[j] == d[l])
                                        count.push_back(c[j]);
                                }
                            }
                        }
                        break;
                    case 'E':
                        for (int j = 0; j < 2; j++)
                        {
                            for (int k = 2; k < 4; k++)
                            {
                                for (int l = 4; l < 6; l++)
                                {
                                    if (c[j] == a[k] && c[j] == e[l])
                                        count.push_back(c[j]);
                                }
                            }
                        }
                        break;
                    }
                }
                else
                {
                    for (int j = 0; j < 2; j++)
                    {
                        for (int k = 2; k < 4; k++)
                        {
                            if (c[j] == a[k])
                                count.push_back(c[j]);
                        }
                    }
                }
                break;

            case 'B':
                if (size_all_password / 6 == 3)
                {
                    switch (all_passwords[i + 12])
                    {
                    case 'A':
                        for (int j = 0; j < 2; j++)
                        {
                            for (int k = 2; k < 4; k++)
                            {
                                for (int l = 4; l < 6; l++)
                                {
                                    if (c[j] == b[k] && c[j] == a[l])
                                        count.push_back(c[j]);
                                }
                            }
                        }
                        break;
                    case 'B':
                        for (int j = 0; j < 2; j++)
                        {
                            for (int k = 2; k < 4; k++)
                            {
                                for (int l = 4; l < 6; l++)
                                {
                                    if (c[j] == b[k] && c[j] == b[l])
                                        count.push_back(c[j]);
                                }
                            }
                        }
                        break;
                    case 'C':
                        for (int j = 0; j < 2; j++)
                        {
                            for (int k = 2; k < 4; k++)
                            {
                                for (int l = 4; l < 6; l++)
                                {
                                    if (c[j] == b[k] && c[j] == c[l])
                                        count.push_back(c[j]);
                                }
                            }
                        }
                        break;
                    case 'D':
                        for (int j = 0; j < 2; j++)
                        {
                            for (int k = 2; k < 4; k++)
                            {
                                for (int l = 4; l < 6; l++)
                                {
                                    if (c[j] == b[k] && c[j] == d[l])
                                        count.push_back(c[j]);
                                }
                            }
                        }
                        break;
                    case 'E':
                        for (int j = 0; j < 2; j++)
                        {
                            for (int k = 2; k < 4; k++)
                            {
                                for (int l = 4; l < 6; l++)
                                {
                                    if (c[j] == b[k] && c[j] == e[l])
                                        count.push_back(c[j]);
                                }
                            }
                        }
                        break;
                    }
                }
                else
                {
                    for (int j = 0; j < 2; j++)
                    {
                        for (int k = 2; k < 4; k++)
                        {
                            if (c[j] == b[k])
                                count.push_back(c[j]);
                        }
                    }
                }
                break;
            case 'C':
                if (size_all_password / 6 == 3)
                {
                    switch (all_passwords[i + 12])
                    {
                    case 'A':
                        for (int j = 0; j < 2; j++)
                        {
                            for (int k = 2; k < 4; k++)
                            {
                                for (int l = 4; l < 6; l++)
                                {
                                    if (c[j] == c[k] && c[j] == a[l])
                                        count.push_back(c[j]);
                                }
                            }
                        }
                        break;
                    case 'B':
                        for (int j = 0; j < 2; j++)
                        {
                            for (int k = 2; k < 4; k++)
                            {
                                for (int l = 4; l < 6; l++)
                                {
                                    if (c[j] == c[k] && c[j] == b[l])
                                        count.push_back(c[j]);
                                }
                            }
                        }
                        break;
                    case 'C':
                        for (int j = 0; j < 2; j++)
                        {
                            for (int k = 2; k < 4; k++)
                            {
                                for (int l = 4; l < 6; l++)
                                {
                                    if (c[j] == c[k] && c[j] == c[l])
                                        count.push_back(c[j]);
                                }
                            }
                        }
                        break;
                    case 'D':
                        for (int j = 0; j < 2; j++)
                        {
                            for (int k = 2; k < 4; k++)
                            {
                                for (int l = 4; l < 6; l++)
                                {
                                    if (c[j] == c[k] && c[j] == d[l])
                                        count.push_back(c[j]);
                                }
                            }
                        }
                        break;
                    case 'E':
                        for (int j = 0; j < 2; j++)
                        {
                            for (int k = 2; k < 4; k++)
                            {
                                for (int l = 4; l < 6; l++)
                                {
                                    if (c[j] == c[k] && c[j] == e[l])
                                        count.push_back(c[j]);
                                }
                            }
                        }
                        break;
                    }
                }
                else
                {
                    for (int j = 0; j < 2; j++)
                    {
                        for (int k = 2; k < 4; k++)
                        {
                            if (c[j] == c[k])
                                count.push_back(c[j]);
                        }
                    }
                }
                break;
            case 'D':
                if (size_all_password / 6 == 3)
                {
                    switch (all_passwords[i + 12])
                    {
                    case 'A':
                        for (int j = 0; j < 2; j++)
                        {
                            for (int k = 2; k < 4; k++)
                            {
                                for (int l = 4; l < 6; l++)
                                {
                                    if (c[j] == d[k] && c[j] == a[l])
                                        count.push_back(c[j]);
                                }
                            }
                        }
                        break;
                    case 'B':
                        for (int j = 0; j < 2; j++)
                        {
                            for (int k = 2; k < 4; k++)
                            {
                                for (int l = 4; l < 6; l++)
                                {
                                    if (c[j] == d[k] && c[j] == b[l])
                                        count.push_back(c[j]);
                                }
                            }
                        }
                        break;
                    case 'C':
                        for (int j = 0; j < 2; j++)
                        {
                            for (int k = 2; k < 4; k++)
                            {
                                for (int l = 4; l < 6; l++)
                                {
                                    if (c[j] == d[k] && c[j] == c[l])
                                        count.push_back(c[j]);
                                }
                            }
                        }
                        break;
                    case 'D':
                        for (int j = 0; j < 2; j++)
                        {
                            for (int k = 2; k < 4; k++)
                            {
                                for (int l = 4; l < 6; l++)
                                {
                                    if (c[j] == d[k] && c[j] == d[l])
                                        count.push_back(c[j]);
                                }
                            }
                        }
                        break;
                    case 'E':
                        for (int j = 0; j < 2; j++)
                        {
                            for (int k = 2; k < 4; k++)
                            {
                                for (int l = 4; l < 6; l++)
                                {
                                    if (c[j] == d[k] && c[j] == e[l])
                                        count.push_back(c[j]);
                                }
                            }
                        }
                        break;
                    }
                }
                else
                {
                    for (int j = 0; j < 2; j++)
                    {
                        for (int k = 2; k < 4; k++)
                        {
                            if (c[j] == d[k])
                                count.push_back(c[j]);
                        }
                    }
                }
                break;
            case 'E':
                if (size_all_password / 6 == 3)
                {
                    switch (all_passwords[i + 12])
                    {
                    case 'A':
                        for (int j = 0; j < 2; j++)
                        {
                            for (int k = 2; k < 4; k++)
                            {
                                for (int l = 4; l < 6; l++)
                                {
                                    if (c[j] == e[k] && c[j] == a[l])
                                        count.push_back(c[j]);
                                }
                            }
                        }
                        break;
                    case 'B':
                        for (int j = 0; j < 2; j++)
                        {
                            for (int k = 2; k < 4; k++)
                            {
                                for (int l = 4; l < 6; l++)
                                {
                                    if (c[j] == e[k] && c[j] == b[l])
                                        count.push_back(c[j]);
                                }
                            }
                        }
                        break;
                    case 'C':
                        for (int j = 0; j < 2; j++)
                        {
                            for (int k = 2; k < 4; k++)
                            {
                                for (int l = 4; l < 6; l++)
                                {
                                    if (c[j] == e[k] && c[j] == c[l])
                                        count.push_back(c[j]);
                                }
                            }
                        }
                        break;
                    case 'D':
                        for (int j = 0; j < 2; j++)
                        {
                            for (int k = 2; k < 4; k++)
                            {
                                for (int l = 4; l < 6; l++)
                                {
                                    if (c[j] == e[k] && c[j] == d[l])
                                        count.push_back(c[j]);
                                }
                            }
                        }
                        break;
                    case 'E':
                        for (int j = 0; j < 2; j++)
                        {
                            for (int k = 2; k < 4; k++)
                            {
                                for (int l = 4; l < 6; l++)
                                {
                                    if (c[j] == e[k] && c[j] == e[l])
                                        count.push_back(c[j]);
                                }
                            }
                        }
                        break;
                    }
                }
                else
                {
                    for (int j = 0; j < 2; j++)
                    {
                        for (int k = 2; k < 4; k++)
                        {
                            if (c[j] == e[k])
                                count.push_back(c[j]);
                        }
                    }
                    break;
                }
            }
            break;

            //////////////////////////////////////////////////////////////////////////////////////////////////////////////

        case 'D':
            switch (all_passwords[i + 6])
            {
            case 'A':
                if (size_all_password / 6 == 3)
                {
                    switch (all_passwords[i + 12])
                    {
                    case 'A':
                        for (int j = 0; j < 2; j++)
                        {
                            for (int k = 2; k < 4; k++)
                            {
                                for (int l = 4; l < 6; l++)
                                {
                                    if (d[j] == a[k] && d[j] == a[l])
                                        count.push_back(d[j]);
                                }
                            }
                        }
                        break;
                    case 'B':
                        for (int j = 0; j < 2; j++)
                        {
                            for (int k = 2; k < 4; k++)
                            {
                                for (int l = 4; l < 6; l++)
                                {
                                    if (d[j] == a[k] && d[j] == b[l])
                                        count.push_back(d[j]);
                                }
                            }
                        }
                        break;
                    case 'C':
                        for (int j = 0; j < 2; j++)
                        {
                            for (int k = 2; k < 4; k++)
                            {
                                for (int l = 4; l < 6; l++)
                                {
                                    if (d[j] == a[k] && d[j] == c[l])
                                        count.push_back(d[j]);
                                }
                            }
                        }
                        break;
                    case 'D':
                        for (int j = 0; j < 2; j++)
                        {
                            for (int k = 2; k < 4; k++)
                            {
                                for (int l = 4; l < 6; l++)
                                {
                                    if (d[j] == a[k] && d[j] == d[l])
                                        count.push_back(d[j]);
                                }
                            }
                        }
                        break;
                    case 'E':
                        for (int j = 0; j < 2; j++)
                        {
                            for (int k = 2; k < 4; k++)
                            {
                                for (int l = 4; l < 6; l++)
                                {
                                    if (d[j] == a[k] && d[j] == e[l])
                                        count.push_back(d[j]);
                                }
                            }
                        }
                        break;
                    }
                }
                else
                {
                    for (int j = 0; j < 2; j++)
                    {
                        for (int k = 2; k < 4; k++)
                        {
                            if (d[j] == a[k])
                                count.push_back(d[j]);
                        }
                    }
                }
                break;

            case 'B':
                if (size_all_password / 6 == 3)
                {
                    switch (all_passwords[i + 12])
                    {
                    case 'A':
                        for (int j = 0; j < 2; j++)
                        {
                            for (int k = 2; k < 4; k++)
                            {
                                for (int l = 4; l < 6; l++)
                                {
                                    if (d[j] == b[k] && d[j] == a[l])
                                        count.push_back(d[j]);
                                }
                            }
                        }
                        break;
                    case 'B':
                        for (int j = 0; j < 2; j++)
                        {
                            for (int k = 2; k < 4; k++)
                            {
                                for (int l = 4; l < 6; l++)
                                {
                                    if (d[j] == b[k] && d[j] == b[l])
                                        count.push_back(d[j]);
                                }
                            }
                        }
                        break;
                    case 'C':
                        for (int j = 0; j < 2; j++)
                        {
                            for (int k = 2; k < 4; k++)
                            {
                                for (int l = 4; l < 6; l++)
                                {
                                    if (d[j] == b[k] && d[j] == c[l])
                                        count.push_back(d[j]);
                                }
                            }
                        }
                        break;
                    case 'D':
                        for (int j = 0; j < 2; j++)
                        {
                            for (int k = 2; k < 4; k++)
                            {
                                for (int l = 4; l < 6; l++)
                                {
                                    if (d[j] == b[k] && d[j] == d[l])
                                        count.push_back(d[j]);
                                }
                            }
                        }
                        break;
                    case 'E':
                        for (int j = 0; j < 2; j++)
                        {
                            for (int k = 2; k < 4; k++)
                            {
                                for (int l = 4; l < 6; l++)
                                {
                                    if (d[j] == b[k] && d[j] == e[l])
                                        count.push_back(d[j]);
                                }
                            }
                        }
                        break;
                    }
                }
                else
                {
                    for (int j = 0; j < 2; j++)
                    {
                        for (int k = 2; k < 4; k++)
                        {
                            if (d[j] == b[k])
                                count.push_back(d[j]);
                        }
                    }
                }
                break;
            case 'C':
                if (size_all_password / 6 == 3)
                {
                    switch (all_passwords[i + 12])
                    {
                    case 'A':
                        for (int j = 0; j < 2; j++)
                        {
                            for (int k = 2; k < 4; k++)
                            {
                                for (int l = 4; l < 6; l++)
                                {
                                    if (d[j] == c[k] && d[j] == a[l])
                                        count.push_back(d[j]);
                                }
                            }
                        }
                        break;
                    case 'B':
                        for (int j = 0; j < 2; j++)
                        {
                            for (int k = 2; k < 4; k++)
                            {
                                for (int l = 4; l < 6; l++)
                                {
                                    if (d[j] == c[k] && d[j] == b[l])
                                        count.push_back(d[j]);
                                }
                            }
                        }
                        break;
                    case 'C':
                        for (int j = 0; j < 2; j++)
                        {
                            for (int k = 2; k < 4; k++)
                            {
                                for (int l = 4; l < 6; l++)
                                {
                                    if (d[j] == c[k] && d[j] == c[l])
                                        count.push_back(d[j]);
                                }
                            }
                        }
                        break;
                    case 'D':
                        for (int j = 0; j < 2; j++)
                        {
                            for (int k = 2; k < 4; k++)
                            {
                                for (int l = 4; l < 6; l++)
                                {
                                    if (d[j] == c[k] && d[j] == d[l])
                                        count.push_back(d[j]);
                                }
                            }
                        }
                        break;
                    case 'E':
                        for (int j = 0; j < 2; j++)
                        {
                            for (int k = 2; k < 4; k++)
                            {
                                for (int l = 4; l < 6; l++)
                                {
                                    if (d[j] == c[k] && d[j] == e[l])
                                        count.push_back(d[j]);
                                }
                            }
                        }
                        break;
                    }
                }
                else
                {
                    for (int j = 0; j < 2; j++)
                    {
                        for (int k = 2; k < 4; k++)
                        {
                            if (d[j] == c[k])
                                count.push_back(d[j]);
                        }
                    }
                }
                break;
            case 'D':
                if (size_all_password / 6 == 3)
                {
                    switch (all_passwords[i + 12])
                    {
                    case 'A':
                        for (int j = 0; j < 2; j++)
                        {
                            for (int k = 2; k < 4; k++)
                            {
                                for (int l = 4; l < 6; l++)
                                {
                                    if (d[j] == d[k] && d[j] == a[l])
                                        count.push_back(d[j]);
                                }
                            }
                        }
                        break;
                    case 'B':
                        for (int j = 0; j < 2; j++)
                        {
                            for (int k = 2; k < 4; k++)
                            {
                                for (int l = 4; l < 6; l++)
                                {
                                    if (d[j] == d[k] && d[j] == b[l])
                                        count.push_back(d[j]);
                                }
                            }
                        }
                        break;
                    case 'C':
                        for (int j = 0; j < 2; j++)
                        {
                            for (int k = 2; k < 4; k++)
                            {
                                for (int l = 4; l < 6; l++)
                                {
                                    if (d[j] == d[k] && d[j] == c[l])
                                        count.push_back(d[j]);
                                }
                            }
                        }
                        break;
                    case 'D':
                        for (int j = 0; j < 2; j++)
                        {
                            for (int k = 2; k < 4; k++)
                            {
                                for (int l = 4; l < 6; l++)
                                {
                                    if (d[j] == d[k] && d[j] == d[l])
                                        count.push_back(d[j]);
                                }
                            }
                        }
                        break;
                    case 'E':
                        for (int j = 0; j < 2; j++)
                        {
                            for (int k = 2; k < 4; k++)
                            {
                                for (int l = 4; l < 6; l++)
                                {
                                    if (d[j] == d[k] && d[j] == e[l])
                                        count.push_back(d[j]);
                                }
                            }
                        }
                        break;
                    }
                }
                else
                {
                    for (int j = 0; j < 2; j++)
                    {
                        for (int k = 2; k < 4; k++)
                        {
                            if (d[j] == d[k])
                                count.push_back(d[j]);
                        }
                    }
                }
                break;
            case 'E':
                if (size_all_password / 6 == 3)
                {
                    switch (all_passwords[i + 12])
                    {
                    case 'A':
                        for (int j = 0; j < 2; j++)
                        {
                            for (int k = 2; k < 4; k++)
                            {
                                for (int l = 4; l < 6; l++)
                                {
                                    if (d[j] == e[k] && d[j] == a[l])
                                        count.push_back(d[j]);
                                }
                            }
                        }
                        break;
                    case 'B':
                        for (int j = 0; j < 2; j++)
                        {
                            for (int k = 2; k < 4; k++)
                            {
                                for (int l = 4; l < 6; l++)
                                {
                                    if (d[j] == e[k] && d[j] == b[l])
                                        count.push_back(d[j]);
                                }
                            }
                        }
                        break;
                    case 'C':
                        for (int j = 0; j < 2; j++)
                        {
                            for (int k = 2; k < 4; k++)
                            {
                                for (int l = 4; l < 6; l++)
                                {
                                    if (d[j] == e[k] && d[j] == c[l])
                                        count.push_back(d[j]);
                                }
                            }
                        }
                        break;
                    case 'D':
                        for (int j = 0; j < 2; j++)
                        {
                            for (int k = 2; k < 4; k++)
                            {
                                for (int l = 4; l < 6; l++)
                                {
                                    if (d[j] == e[k] && d[j] == d[l])
                                        count.push_back(d[j]);
                                }
                            }
                        }
                        break;
                    case 'E':
                        for (int j = 0; j < 2; j++)
                        {
                            for (int k = 2; k < 4; k++)
                            {
                                for (int l = 4; l < 6; l++)
                                {
                                    if (d[j] == e[k] && d[j] == e[l])
                                        count.push_back(d[j]);
                                }
                            }
                        }
                        break;
                    }
                }
                else
                {
                    for (int j = 0; j < 2; j++)
                    {
                        for (int k = 2; k < 4; k++)
                        {
                            if (d[j] == e[k])
                                count.push_back(d[j]);
                        }
                    }
                    break;
                }
            }
            break;

            //////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

        case 'E':
            switch (all_passwords[i + 6])
            {
            case 'A':
                if (size_all_password / 6 == 3)
                {
                    switch (all_passwords[i + 12])
                    {
                    case 'A':
                        for (int j = 0; j < 2; j++)
                        {
                            for (int k = 2; k < 4; k++)
                            {
                                for (int l = 4; l < 6; l++)
                                {
                                    if (e[j] == a[k] && e[j] == a[l])
                                        count.push_back(e[j]);
                                }
                            }
                        }
                        break;
                    case 'B':
                        for (int j = 0; j < 2; j++)
                        {
                            for (int k = 2; k < 4; k++)
                            {
                                for (int l = 4; l < 6; l++)
                                {
                                    if (e[j] == a[k] && e[j] == b[l])
                                        count.push_back(e[j]);
                                }
                            }
                        }
                        break;
                    case 'C':
                        for (int j = 0; j < 2; j++)
                        {
                            for (int k = 2; k < 4; k++)
                            {
                                for (int l = 4; l < 6; l++)
                                {
                                    if (e[j] == a[k] && e[j] == c[l])
                                        count.push_back(e[j]);
                                }
                            }
                        }
                        break;
                    case 'D':
                        for (int j = 0; j < 2; j++)
                        {
                            for (int k = 2; k < 4; k++)
                            {
                                for (int l = 4; l < 6; l++)
                                {
                                    if (e[j] == a[k] && e[j] == d[l])
                                        count.push_back(e[j]);
                                }
                            }
                        }
                        break;
                    case 'E':
                        for (int j = 0; j < 2; j++)
                        {
                            for (int k = 2; k < 4; k++)
                            {
                                for (int l = 4; l < 6; l++)
                                {
                                    if (e[j] == a[k] && e[j] == e[l])
                                        count.push_back(e[j]);
                                }
                            }
                        }
                        break;
                    }
                }
                else
                {
                    for (int j = 0; j < 2; j++)
                    {
                        for (int k = 2; k < 4; k++)
                        {
                            if (e[j] == a[k])
                                count.push_back(e[j]);
                        }
                    }
                }
                break;

            case 'B':
                if (size_all_password / 6 == 3)
                {
                    switch (all_passwords[i + 12])
                    {
                    case 'A':
                        for (int j = 0; j < 2; j++)
                        {
                            for (int k = 2; k < 4; k++)
                            {
                                for (int l = 4; l < 6; l++)
                                {
                                    if (e[j] == b[k] && e[j] == a[l])
                                        count.push_back(e[j]);
                                }
                            }
                        }
                        break;
                    case 'B':
                        for (int j = 0; j < 2; j++)
                        {
                            for (int k = 2; k < 4; k++)
                            {
                                for (int l = 4; l < 6; l++)
                                {
                                    if (e[j] == b[k] && e[j] == b[l])
                                        count.push_back(e[j]);
                                }
                            }
                        }
                        break;
                    case 'C':
                        for (int j = 0; j < 2; j++)
                        {
                            for (int k = 2; k < 4; k++)
                            {
                                for (int l = 4; l < 6; l++)
                                {
                                    if (e[j] == b[k] && e[j] == c[l])
                                        count.push_back(e[j]);
                                }
                            }
                        }
                        break;
                    case 'D':
                        for (int j = 0; j < 2; j++)
                        {
                            for (int k = 2; k < 4; k++)
                            {
                                for (int l = 4; l < 6; l++)
                                {
                                    if (e[j] == b[k] && e[j] == d[l])
                                        count.push_back(e[j]);
                                }
                            }
                        }
                        break;
                    case 'E':
                        for (int j = 0; j < 2; j++)
                        {
                            for (int k = 2; k < 4; k++)
                            {
                                for (int l = 4; l < 6; l++)
                                {
                                    if (e[j] == b[k] && e[j] == e[l])
                                        count.push_back(e[j]);
                                }
                            }
                        }
                        break;
                    }
                }
                else
                {
                    for (int j = 0; j < 2; j++)
                    {
                        for (int k = 2; k < 4; k++)
                        {
                            if (e[j] == b[k])
                                count.push_back(e[j]);
                        }
                    }
                }
                break;
            case 'C':
                if (size_all_password / 6 == 3)
                {
                    switch (all_passwords[i + 12])
                    {
                    case 'A':
                        for (int j = 0; j < 2; j++)
                        {
                            for (int k = 2; k < 4; k++)
                            {
                                for (int l = 4; l < 6; l++)
                                {
                                    if (e[j] == c[k] && e[j] == a[l])
                                        count.push_back(e[j]);
                                }
                            }
                        }
                        break;
                    case 'B':
                        for (int j = 0; j < 2; j++)
                        {
                            for (int k = 2; k < 4; k++)
                            {
                                for (int l = 4; l < 6; l++)
                                {
                                    if (e[j] == c[k] && e[j] == b[l])
                                        count.push_back(e[j]);
                                }
                            }
                        }
                        break;
                    case 'C':
                        for (int j = 0; j < 2; j++)
                        {
                            for (int k = 2; k < 4; k++)
                            {
                                for (int l = 4; l < 6; l++)
                                {
                                    if (e[j] == c[k] && e[j] == c[l])
                                        count.push_back(e[j]);
                                }
                            }
                        }
                        break;
                    case 'D':
                        for (int j = 0; j < 2; j++)
                        {
                            for (int k = 2; k < 4; k++)
                            {
                                for (int l = 4; l < 6; l++)
                                {
                                    if (e[j] == c[k] && e[j] == d[l])
                                        count.push_back(e[j]);
                                }
                            }
                        }
                        break;
                    case 'E':
                        for (int j = 0; j < 2; j++)
                        {
                            for (int k = 2; k < 4; k++)
                            {
                                for (int l = 4; l < 6; l++)
                                {
                                    if (e[j] == c[k] && e[j] == e[l])
                                        count.push_back(e[j]);
                                }
                            }
                        }
                        break;
                    }
                }
                else
                {
                    for (int j = 0; j < 2; j++)
                    {
                        for (int k = 2; k < 4; k++)
                        {
                            if (e[j] == c[k])
                                count.push_back(e[j]);
                        }
                    }
                }
                break;
            case 'D':
                if (size_all_password / 6 == 3)
                {
                    switch (all_passwords[i + 12])
                    {
                    case 'A':
                        for (int j = 0; j < 2; j++)
                        {
                            for (int k = 2; k < 4; k++)
                            {
                                for (int l = 4; l < 6; l++)
                                {
                                    if (e[j] == d[k] && e[j] == a[l])
                                        count.push_back(e[j]);
                                }
                            }
                        }
                        break;
                    case 'B':
                        for (int j = 0; j < 2; j++)
                        {
                            for (int k = 2; k < 4; k++)
                            {
                                for (int l = 4; l < 6; l++)
                                {
                                    if (e[j] == d[k] && e[j] == b[l])
                                        count.push_back(e[j]);
                                }
                            }
                        }
                        break;
                    case 'C':
                        for (int j = 0; j < 2; j++)
                        {
                            for (int k = 2; k < 4; k++)
                            {
                                for (int l = 4; l < 6; l++)
                                {
                                    if (e[j] == d[k] && e[j] == c[l])
                                        count.push_back(e[j]);
                                }
                            }
                        }
                        break;
                    case 'D':
                        for (int j = 0; j < 2; j++)
                        {
                            for (int k = 2; k < 4; k++)
                            {
                                for (int l = 4; l < 6; l++)
                                {
                                    if (e[j] == d[k] && e[j] == d[l])
                                        count.push_back(e[j]);
                                }
                            }
                        }
                        break;
                    case 'E':
                        for (int j = 0; j < 2; j++)
                        {
                            for (int k = 2; k < 4; k++)
                            {
                                for (int l = 4; l < 6; l++)
                                {
                                    if (e[j] == d[k] && e[j] == e[l])
                                        count.push_back(e[j]);
                                }
                            }
                        }
                        break;
                    }
                }
                else
                {
                    for (int j = 0; j < 2; j++)
                    {
                        for (int k = 2; k < 4; k++)
                        {
                            if (e[j] == d[k])
                                count.push_back(e[j]);
                        }
                    }
                }
                break;
            case 'E':
                if (size_all_password / 6 == 3)
                {
                    switch (all_passwords[i + 12])
                    {
                    case 'A':
                        for (int j = 0; j < 2; j++)
                        {
                            for (int k = 2; k < 4; k++)
                            {
                                for (int l = 4; l < 6; l++)
                                {
                                    if (e[j] == e[k] && e[j] == a[l])
                                        count.push_back(e[j]);
                                }
                            }
                        }
                        break;
                    case 'B':
                        for (int j = 0; j < 2; j++)
                        {
                            for (int k = 2; k < 4; k++)
                            {
                                for (int l = 4; l < 6; l++)
                                {
                                    if (e[j] == e[k] && e[j] == b[l])
                                        count.push_back(e[j]);
                                }
                            }
                        }
                        break;
                    case 'C':
                        for (int j = 0; j < 2; j++)
                        {
                            for (int k = 2; k < 4; k++)
                            {
                                for (int l = 4; l < 6; l++)
                                {
                                    if (e[j] == e[k] && e[j] == c[l])
                                        count.push_back(e[j]);
                                }
                            }
                        }
                        break;
                    case 'D':
                        for (int j = 0; j < 2; j++)
                        {
                            for (int k = 2; k < 4; k++)
                            {
                                for (int l = 4; l < 6; l++)
                                {
                                    if (e[j] == e[k] && e[j] == d[l])
                                        count.push_back(e[j]);
                                }
                            }
                        }
                        break;
                    case 'E':
                        for (int j = 0; j < 2; j++)
                        {
                            for (int k = 2; k < 4; k++)
                            {
                                for (int l = 4; l < 6; l++)
                                {
                                    if (e[j] == e[k] && e[j] == e[l])
                                        count.push_back(e[j]);
                                }
                            }
                        }
                        break;
                    }
                }
                else
                {
                    for (int j = 0; j < 2; j++)
                    {
                        for (int k = 2; k < 4; k++)
                        {
                            if (e[j] == e[k])
                                count.push_back(e[j]);
                        }
                    }
                    break;
                }
            }
            break;
        }
    }

    for (int i = 0; i < count.size(); i++)
        std ::cout << count[i] << " ";
}