#define _USE_MATH_DEFINES
#include <iostream>
#include <cmath>

int task_one()						//������� 1: ������� ������ ����� ����� �� ��������
{	
	std::cout << "Task 1" << std::endl;
	std::cout << "*           *" << std::endl;
	std::cout << "* *       * *" << std::endl;
	std::cout << "*   *   *   *" << std::endl;
	std::cout << "*     *     *" << std::endl;
	std::cout << "*           *" << std::endl;
	std::cout << "*           *" << std::endl;

	return 0;
}


int task_two() {                    //������� 2i: ������� ������� � �������� ���������������, � ������������ ������ ������
	std::cout << "Task 2" << std::endl;
	float lengthOfSide = 0;         //���� �� ������ ���������������

	std::cout << "Set the length of side of the octagon\n";  
	std::cin >> lengthOfSide;

	float S = 2 * lengthOfSide * lengthOfSide * (1 + sqrt(2));  //������� ������� ���������������
	float P = lengthOfSide * 8;									//������� ��������� ���������������

	std::cout << "The area of octagon equals: " << S << " The perimeter of your octagon equals: " << P << std::endl;

	return 0;
}


int task_three() {                    //������� 3: ������������ ������ ��� �����. ������� �������� � ������� ������ �����. 
	int taskThree_FirstNumber;
	int taskThree_SecondNumber;

	std::cout << "Task 3" << std::endl;
	
	std::cout << "Enter your first number: \n";
	std::cin >> taskThree_FirstNumber;
	
	std::cout << "Enter your second number: \n";
	std::cin >> taskThree_SecondNumber;
	
	float raznost = taskThree_FirstNumber - taskThree_SecondNumber;
	float chastnoe = taskThree_FirstNumber % taskThree_SecondNumber;

	std::cout << "The raznost equals: " << raznost << " The chastnoe equals: " << chastnoe << std::endl;
	return 0;
}


int task_four() {              //������� 4: ������������ ������ ��� �����. ���������� �������� �������� ���������� ���, ����� �������� ������ ��������� �� ������, � ������ - � ������.
	std::cout << "Task 4" << std::endl;
	float first_number;
	float second_number;
	
	std::cout << "Enter your first number: \n";
	std::cin >> first_number;

	std::cout << "Enter your second number: \n";
	std::cin >> second_number;

	std::cout << "The first number: " << first_number << " The second number: " << second_number << std::endl;

	float replacedFirst_Number = second_number;
	float replacedSecond_Number = first_number;

	std::cout << "The first replaced number: " << replacedFirst_Number << " The second replaced number: " << replacedSecond_Number << std::endl;

	return 0;
}


int task_five() {              //������� 5: ������������ ������ ��� �����. ��������� ������ ����� � ��� ����, ������ ����� ��������� �� 3, ������ ����� ��������� � ������� � ����� ������� ����� ����� ���� �����.

	std::cout << "Task 5" << std::endl;
	float taskFive_FirstNumber;
	float taskFive_SecondNumber;
	float taskFive_ThirdNumber;

	std::cout << "Enter your first number: \n";
	std::cin >> taskFive_FirstNumber;

	std::cout << "Enter your second number: \n";
	std::cin >> taskFive_SecondNumber;

	std::cout << "Enter your third number: \n";
	std::cin >> taskFive_ThirdNumber;

	taskFive_FirstNumber = taskFive_FirstNumber * 2;
	taskFive_SecondNumber = taskFive_SecondNumber - 3;
	taskFive_ThirdNumber = taskFive_ThirdNumber * taskFive_ThirdNumber;

	float sum = taskFive_FirstNumber + taskFive_SecondNumber + taskFive_ThirdNumber;

	std::cout << "Result: " << sum << std::endl;
	return 0;
}


int task_six() {              //������� 6: ������������ ������ ��� �����. ������� ������� �������������� ���� �����, � ����� �������� ��������� ����� ������� � �������� ����� � ���������� ������������.

	std::cout << "Task 6" << std::endl;
	float taskSix_FirstNumber;
	float taskSix_SecondNumber;
	float taskSix_ThirdNumber;

	std::cout << "Enter your first number: \n";
	std::cin >> taskSix_FirstNumber;

	std::cout << "Enter your second number: \n";
	std::cin >> taskSix_SecondNumber;

	std::cout << "Enter your third number: \n";
	std::cin >> taskSix_ThirdNumber;
	
	float averageOfNumbers = (taskSix_FirstNumber + taskSix_SecondNumber + taskSix_ThirdNumber) / 3;

	float answer = ((taskSix_FirstNumber + taskSix_ThirdNumber) * 2) - (taskSix_SecondNumber * 3);

	std::cout << "Result: " << answer << std::endl;
	return 0;
}


int task_seven() {              //������� 7: ������������ ������ �����. �������� �� ����� ������� ����� �����, ��� ����� �����.

	std::cout << "Task 7" << std::endl;
	float taskSeven_Number;

	std::cout << "Enter your number: \n";
	std::cin >> taskSeven_Number;

	float taskSeven_NumberSquare = taskSeven_Number * taskSeven_Number ;
	float taskSeven_NumberCub = taskSeven_Number * taskSeven_Number * taskSeven_Number;

	std::cout << "Squared: " << taskSeven_NumberSquare << " Cubed: " << taskSeven_NumberCub << std::endl;
	return 0;
}


int task_eight() {              //������� 8: ��������� �������� ���������.
	std::cout << "Task 8" << std::endl;

	int a = 2;
	int b = 3;

	int taskEight_Res = (a + 4 * b) * (a - 3 * b) + a * a;

	std::cout << taskEight_Res << std::endl;

	return 0;
}


int task_nine() {              //������� 9g: ������� ��������� �������: �������� ��������.
	std::cout << "Task 9" << std::endl;
	int DegPHour;

	std::cout << "Enter the amount of degrees per hour: " << std::endl;
	std::cin >> DegPHour;

	float DegPMinute = DegPHour / 60;
	float RadPMinute = DegPMinute / 60;

	std::cout << "Degrees Per Hour: " << DegPHour << " Degrees Per Minute: " << DegPMinute << " Radians Per Minute: " << RadPMinute <<std::endl;

	return 0;
}


int task_ten() {              //������� 10: �������� ��� ����� �����. ���������� ����� �� ��� ����������. 
	std::cout << "Task 10" << std::endl;
	float taskTen_FirstNumber;
	float taskTen_SecondNumber;
	float taskTen_ThirdNumber;

	std::cout << "Enter your first number: \n";
	std::cin >> taskTen_FirstNumber;

	std::cout << "Enter your second number: \n";
	std::cin >> taskTen_SecondNumber;

	std::cout << "Enter your third number: \n";
	std::cin >> taskTen_ThirdNumber;

	float preres = fmax(float(taskTen_FirstNumber), float(taskTen_SecondNumber));
	float res = fmax(float(preres), float(taskTen_ThirdNumber));

	std::cout << "Result: " << res << std::endl;

	return 0;
}


int task_eleven() {              //������� 11:  �������� ��� ����� �����. ���������� ��������� �� 5, ���������� ��������� 3. 
	std::cout << "Task 10" << std::endl;
	float taskEleven_FirstNumber;
	float taskEleven_SecondNumber;
	float taskEleven_ThirdNumber;

	std::cout << "Enter your first number: \n";
	std::cin >> taskEleven_FirstNumber;

	std::cout << "Enter your second number: \n";
	std::cin >> taskEleven_SecondNumber;

	std::cout << "Enter your third number: \n";
	std::cin >> taskEleven_ThirdNumber;

	float preres = fmax(float(taskEleven_FirstNumber), float(taskEleven_SecondNumber));
	float resmax = fmax(float(preres), float(taskEleven_ThirdNumber));

	float preres2 = fmin(float(taskEleven_FirstNumber), float(taskEleven_SecondNumber));
	float resmin = fmin(float(preres2), float(taskEleven_ThirdNumber));

	std::cout << "The biggest result: " << resmax + 5 << " The smallest result: " << resmin - 3;

	return 0;
}


int main() {
	task_one();
	task_two();
	task_three();
	task_four();
	task_five();
	task_six();
	task_seven();
	task_eight();
	task_nine();
	task_ten();
	task_eleven();
}