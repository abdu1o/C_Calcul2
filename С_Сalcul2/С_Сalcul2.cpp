#include <iostream>
using namespace std;

//(1)---------------------------------
//int main()
//{
//	int count = 0;
//
//	while (count <= 100)
//	{	
//		count++;
//		if (count % 2 == 0)
//		{
//			cout << count << "\n";
//		}
//	}
//}
//------------------------------------


//(2)---------------------------------
//int main()
//{
//	int num1, num2;
//
//	cout << "Enter range (1 - 100): ";
//	cin >> num1 >> num2;
//
//	int temp_num = 0;
//
//	while (num1 <= num2)
//	{
//		temp_num += num1;
//		num1++;
//	}
//	cout << "Summ of ur range: " << temp_num << endl;
//}
//------------------------------------


//(3)---------------------------------
//int main()
//{
//	double num1, num2;
//
//	cout << "Enter range (Celsius) \n [1 - 100] \n ";
//	cin >> num1 >> num2;
//
//	system("cls");
//	cout << "C \t F";
//
//	while (num1 <= num2)
//	{
//		cout << "\n" << num1 << "\t" << (num1 * 9 / 5) + 32;
//		num1++;
//	}
//}
//------------------------------------


//(4)---------------------------------
//int main()
//{
//	int num;
//
//	cout << "Enter number: ";
//	cin >> num;
//
//	int fact = 1;
//
//	while (num > 0)
//	{
//		fact *= num--;
//	}
//	cout << "Factorial of ur number: " << fact << endl;
//}
//------------------------------------


//(5)---------------------------------
//int main()
//{
//    int num;
//
//    cout << "Enter number: ";
//    cin >> num;
//    int num_temp = 1;
//
//    int sum = num % 10;
//
//    while ((num /= 10) > 0)
//    {
//        num_temp++;
//        sum += num % 10;
//    }
//    cout << "\n Count of numbers: " << num_temp << "\n Summ of numbers: " << sum;
//}
//------------------------------------