//
// Created by nikit on 24.11.2025.
//
#include <iostream>
#include <fstream>
#include <vector>
#include <string>

using namespace std;

// Функция №1
void read_lines_from_file(const string& input_filename, vector<string>& lines)
{

}

// Функция №2
void print_lines_to_console(const vector<string>& lines)
{

}

// Функция №3
void write_lines_to_file(const string& output_filename, const vector<string>& lines)
{

}

int main()
{
    string input_file = "input.txt";
    string output_file = "output.txt";

    vector<string> lines;

    read_lines_from_file(input_file, lines);
    print_lines_to_console(lines);
    write_lines_to_file(output_file, lines);

    return 0;
}
