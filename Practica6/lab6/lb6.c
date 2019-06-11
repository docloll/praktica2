// lb6.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include "pch.h"
#include <stdio.h>
#include <math.h>
enum MarkType { Diff, NotDiff };
enum MarkEnum {	non, one ,notsat,sat,good,ex };
union MarkValue
{
	_Bool accepted;
	enum MarkEnum mark;
};
struct Mark
{
	enum MarkType type;
	union MarkValue value;
};
struct SubjectInfo
{
	char name[80];
	char teacher[80];
	long long timestamp;
	struct Mark mark;
};
struct TermInfo
{
	int year;
	short team;
	struct SubjectInfo theor[3];
	struct SubjectInfo pract[3];
};
struct z
{
	char firstName[80];
	char lastName[80];
	struct TermInfo fearms[6];
};
void zachetkastudenta()
{ 
	struct z s1 = { "Ivan","Ivanov",
	{
		{2017,1,
		  {{"Fizika","Latishev",123412340,{NotDiff,{.accepted = 1}}},
		   {"SEPIT","Korableva",123412341,{NotDiff,{.accepted = 1}}},
		   {"informatika","Shakin",123412342,{NotDiff,{.accepted = 1}}}
	      },
		  {{"Visshaya matematika","Gudkova",123412343,{Diff,{.mark = ex}}},
		   {"Philosofiya","Korableva",123412344,{Diff,{.mark = ex}}},
		   {"Geometria i algebra","Soliev",12341234,{Diff,{.mark = good}}}
	      }
	    },
		{2018,2,
	      {{"Ingenernaya Grafika","Evstratov",123412340,{NotDiff,{.accepted = 1}}},
		   {"Fizkultura","Goryacheva",123412341,{NotDiff,{.accepted = 1}}},
		   {"informatika","Shakin",123412342,{NotDiff,{.accepted = 1}}}
	      },
	      {{"Visshaya matematika","Gudkova",123412343,{Diff,{.mark = good}}},
		   {"Philosofiya","korableva",123412344,{Diff,{.mark = ex}}},
		   {"Angliiskii yazik","Maltseva",12341234,{Diff,{.mark = good}}}
		  }
		},
		{2018,3,
	     {{"Teoriya eiecktricheskih tsepei","Frisk",123412340,{NotDiff,{.accepted = 1}}},
		  {"Electronika","Vlasov",123412341,{NotDiff,{.accepted = 1}}},
		  {"Matematicheskie paketi","Semenova",123412342,{NotDiff,{.accepted = 1}}}
	     },
	     {{"Diskretnaya matematika","Dubnov",123412343,{Diff,{.mark = good}}},
		  {"Visshaya matematika","Gudkova",123412343,{Diff,{.mark = good}}},
		  {"Teoriya veroyatnosti","Demin",123412344,{Diff,{.mark = good}}},
		 }
		},
		{2019,4,
		 {{"Fizika","Gilinskii",123412340,{NotDiff,{.accepted = 1}}},
		  {"Vichislitelnie metodi","Kravchenko",123412341,{NotDiff,{.accepted = 1}}},
		  {"Ecologia","Prepod",123412342,{NotDiff,{.accepted = 1}}}
	     },
	     {{"TETS","Frisk",123412343,{Diff,{.mark = ex}}},
		  {"OTS","Suhorukov",123412344,{Diff,{.mark = good}}},
		  {"Electronika","Vlasov",12341234,{Diff,{.mark = good}}}
	     }
		},
		{2019,5,
		 {{"Predmet","NormPrepod",123412340,{NotDiff,{.accepted = 1}}},
		  {"Neponyatnaya shtuka","Strogii' prepod",123412341,{NotDiff,{.accepted = 1}}},
		  {"OBG","Mugik",123412342,{NotDiff,{.accepted = 1}}}
	     },
	     {{"Vrode programmirovanie","Ponyatno chitaush'ii lector",123412343,{Diff,{.mark = good}}},
		  {"Ne dai bog polya i volni","Fedotova",123412344,{Diff,{.mark = ex}}},
		  {"Umolyau tol'ko ne bei'sik","Avot v sssr...",12341234,{Diff,{.mark = good}}}
	     }
		},
		{2020,6,
		 {{"Nicto ne pon'yal","Ponabrali po ege",123412340,{NotDiff,{.accepted = 1}}},
		  {"A govorili budet proshe","Ochen' gestkii' prepod",123412341,{NotDiff,{.accepted = 1}}},
		  {"Zachem eto voobsche","Smotri vse v metodichke",123412342,{NotDiff,{.accepted = 1}}}
		 },
		 {{"Ni u kogo ne bilo lectstii'","Slishkom tiho vse govorit",123412343,{Diff,{.mark = ex}}},
		  {"Vsem avtomat","KVN skuchaet bez nego",123412344,{Diff,{.mark = ex}}},
		  {"Vrode esche programmirovanie","NormPrepod",12341234,{Diff,{.mark = good}}}
	     }
		}
	 }
	};
	printf("\n %s   %s \n", s1.firstName, s1.lastName);
	int m = 6;
	for (int j = 0; j < m; ++j)
	{
		printf("\n\n %i  %hi", s1.fearms[j].year, s1.fearms[j].team);
		int n = 3;
		for (int i = 0; i < n; ++i)
		{
			printf("\n %s   %s   %lli", s1.fearms[j].theor[i].name, s1.fearms[j].theor[i].teacher, s1.fearms[j].theor[i].timestamp);
			printf("   %c  ", s1.fearms[j].theor[i].mark.value);
		}
		for (int i = 0; i < n; ++i)
		{
			printf("\n %s   %s   %lli", s1.fearms[j].pract[i].name, s1.fearms[j].pract[i].teacher, s1.fearms[j].pract[i].timestamp);
			printf("   %i   ", s1.fearms[j].pract[i].mark.value);
		}
		printf("\n");
	}
}

int main()
{
	int f = 1;
	for (int i = 0; i < f; ++i)
	{
		++f;
		printf("\n Viberi task nomer 1 to zachetka or 0 to end : ");
		switch (_getch())
		{
		case '1':
			zachetkastudenta();
			printf(" \n");
			_getch();
			continue;
		case '0':
			system("cls");
			printf("end\n");
			f = f - 1;
			break;
		default:
			_getch();
			system("cls");
			continue;
		}
	}
}

// Запуск программы: CTRL+F5 или меню "Отладка" > "Запуск без отладки"
// Отладка программы: F5 или меню "Отладка" > "Запустить отладку"

// Советы по началу работы 
//   1. В окне обозревателя решений можно добавлять файлы и управлять ими.
//   2. В окне Team Explorer можно подключиться к системе управления версиями.
//   3. В окне "Выходные данные" можно просматривать выходные данные сборки и другие сообщения.
//   4. В окне "Список ошибок" можно просматривать ошибки.
//   5. Последовательно выберите пункты меню "Проект" > "Добавить новый элемент", чтобы создать файлы кода, или "Проект" > "Добавить существующий элемент", чтобы добавить в проект существующие файлы кода.
//   6. Чтобы снова открыть этот проект позже, выберите пункты меню "Файл" > "Открыть" > "Проект" и выберите SLN-файл.
