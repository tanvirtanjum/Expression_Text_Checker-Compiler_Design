#include<iostream>
#include<string>
#include<bits/stdc++.h>

using namespace std;

bool match_expression(string expression);
void print_result(bool match);
void logic_match_abc(string text);
void logic_match_abc_star(string text);
void logic_match_abc_plus(string text);
void logic_match_a_or_b(string text);
void match_text(string expression, string text);
void execute();

bool match_expression(string expression)
{
    bool match = true;

    if(expression == "abc")
    {
        match = match;
    }
    else if(expression == "abc*")
    {
        match = match;
    }
    else if(expression == "abc+")
    {
        match = match;
    }
    else if(expression == "a|b")
    {
        match = match;
    }
    else
    {
        match = false;
    }

    return match;
}

void print_result(bool match)
{
    if(match)
    {
        cout << endl << "\t***MATCHED***";
    }
    else
    {
        cout << endl << "\t***NOT MATCHED***";
    }
}

void logic_match_abc(string text)
{
    bool match = true;

    if(text == "abc")
    {
        match = match;
    }
    else
    {
        match = false;
    }

    print_result(match);
}

void logic_match_abc_star(string text)
{
    bool match = true;

    if(text.length() < 2)
    {
        match = false;
    }

    else
    {
        if(text.length() == 2 && text != "ab")
        {
            match = false;
        }

        else if(text.length() == 3 && text != "abc")
        {
            match = false;
        }

        else if(text.length() > 3)
        {
            for(int i=0; i<text.length(); i++)
            {
                if(i == 0)
                {
                    if(text[0] != 'a')
                    {
                        match = false;
                    }
                }

                if(i == 1)
                {
                    if(text[1] != 'b')
                    {
                        match = false;
                    }
                }

                if(i > 1)
                {
                    if(text[i] != 'c')
                    {
                        match = false;
                        break;
                    }
                }
            }
        }

        else
        {
            match = match;
        }
    }

    print_result(match);
}

void logic_match_abc_plus(string text)
{
    bool match = true;

    if(text.length() < 3)
    {
        match = false;
    }

    else
    {
        if(text.length() == 3 && text != "abc")
        {
            match = false;
        }

        else if(text.length() > 3)
        {
            for(int i=0; i<text.length(); i++)
            {
                if(i == 0)
                {
                    if(text[0] != 'a')
                    {
                        match = false;
                    }
                }

                if(i == 1)
                {
                    if(text[1] != 'b')
                    {
                        match = false;
                    }
                }

                if(i > 1)
                {
                    if(text[i] != 'c')
                    {
                        match = false;
                        break;
                    }
                }
            }
        }

        else
        {
            match = match;
        }
    }

    print_result(match);
}

void logic_match_a_or_b(string text)
{
    bool match = true;

    if(text == "a")
    {
        match = match;
    }
    else if(text == "b")
    {
        match = match;
    }
    else
    {
        match = false;
    }

    print_result(match);
}

void match_text(string expression, string text)
{
    if(expression == "abc")
    {
        logic_match_abc(text);
    }

    if(expression == "abc*")
    {
        logic_match_abc_star(text);
    }

    if(expression == "abc+")
    {
        logic_match_abc_plus(text);
    }

    if(expression == "a|b")
    {
        logic_match_a_or_b(text);
    }

}

void execute()
{
    string expression;
    string text;

    cout << "Enter Expression: ";
    cin >> expression;

    bool check_expression = match_expression(expression);

    if(check_expression)
    {
        cout << "Enter Text: ";
        cin >> text;
        match_text(expression, text);
    }

    else
    {
        cout << "***Invalid Expression."<<endl<<"Try Again with Valid Expression.";
    }
}

int main()
{
    bool run = true;
    string cmd;

    while(true)
    {
        execute();

        cout <<endl<<endl<< "Do you want to continue? ('N'/'n'/'No' = No; Other keys = Yes): ";

        cin >> cmd;

        if(cmd[0] == 'N' || cmd[0] == 'n')
        {
            break;
        }
        else
        {
            cout << endl;
        }
    }
}
