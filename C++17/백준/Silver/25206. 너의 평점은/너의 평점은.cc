#include <iostream>
#include <string>
using namespace std;

double sum;
double sum_score;

int main() {
  for(int i=0; i<20; i++) {
    string subjects; // 과목명
    double score; //학점
    string str_grade; //string 등급
    double d_grade; // double 등급
    cin >> subjects >> score >> str_grade;
    if(str_grade == "A+") d_grade = 4.5;
    else if(str_grade == "A0") d_grade = 4.0;
    else if(str_grade == "B+") d_grade = 3.5;
    else if(str_grade == "B0") d_grade = 3.0;
    else if(str_grade == "C+") d_grade = 2.5;
    else if(str_grade == "C0") d_grade = 2.0;
    else if(str_grade == "D+") d_grade = 1.5;
    else if(str_grade == "D0") d_grade = 1.0;
    else if(str_grade == "F") d_grade = 0.0;
    else if(str_grade == "P") {
      continue;
    };
    sum_score += d_grade * score;
    sum += score;
  }

  cout << sum_score / sum;
}