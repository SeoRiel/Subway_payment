#include <iostream>

int main()
{
	// Input type
	int age;
	int paymentType;
	int range;
	int charge;

	std::cout << "나이를 입력하세요. : ";
	std::cin >> age;

	std::cout << "결제 수단을 입력하세요. (1. 교통 카드 / 2. 일반) : ";
	std::cin >> paymentType;

	std::cout << "이동 거리를 입력하세요 : ";
	std::cin >> range;

	if (paymentType == 1)													// 교통 카드
	{
		if (age >= 19)														// 어른 (19세 이상)
		{
			if (range > 15 && range <= 20)									// 15km 초과 20km 이하
			{
				std::cout << "이용 금액은 1,450원 입니다." << std::endl;
			}
			else if (range > 10 && range <= 15)								// 10km 초과 15km 이하
			{
				std::cout << "이용 금액은 1,350원 입니다." << std::endl;
			}
			else if (range <= 10)											// 10km 초과
			{
				std::cout << "이용 금액은 1,250원 입니다." << std::endl;
			}
			else															// 10km 미만
			{
				std::cout << "이용 금액은 1,250원 입니다." << std::endl;
			}
		}
		else if (age >= 13 && age <= 18)									// 청소년 (13세 이상, 18세 이하)
		{
			if (range > 15 && range <= 20)
			{
				std::cout << "이용 금액은 880원 입니다." << std::endl;
			}
			else if (range > 10 && range <= 15)
			{
				std::cout << "이용 금액은 800원 입니다." << std::endl;
			}
			else if (range <= 10)
			{
				std::cout << "이용 금액은 720원 입니다." << std::endl;
			}
			else
			{
				std::cout << "이용 금액은 720원 입니다." << std::endl;
			}
		}
		else if (age >= 6 && age < 13)										// 어린이 (6세 이상, 13세 미만)
		{
			if (range > 15 && range <= 20)
			{
				std::cout << "이용 금액은 550원 입니다." << std::endl;
			}
			else if (range > 10 && range <= 15)
			{
				std::cout << "이용 금액은 500원 입니다." << std::endl;
			}
			else if (range <= 10)
			{
				std::cout << "이용 금액은 450원 입니다." << std::endl;
			}
			else
			{
				std::cout << "이용 금액은 450원 입니다." << std::endl;
			}
		}
	}
	else if (paymentType == 2)												// 일반
	{
		if (age >= 18 && age <= 13 && age >= 19)							// 어른, 청소년
		{
			if (range > 15 && range <= 20)
			{
				std::cout << "이용 금액은 1,550원 입니다." << std::endl;
			}
			else if (range > 10 && range <= 15)
			{
				std::cout << "이용 금액은 1,450원 입니다." << std::endl;
			}
			else if (range >= 10)
			{
				std::cout << "이용 금액은 1,350원 입니다." << std::endl;
			}
			else
			{
				std::cout << "이용 금액은 1,350원 입니다." << std::endl;
			}
		}
		else if (age >= 6 && age < 13)									// 어린이 (6세 이상, 13세 미만)
		{
			if (range > 15 && range <= 20)
			{
				std::cout << "이용 금액은 550원 입니다." << std::endl;
			}
			else if (range > 10 && range <= 15)
			{
				std::cout << "이용 금액은 500원 입니다." << std::endl;
			}
			else if (range >= 10)
			{
				std::cout << "이용 금액은 450원 입니다." << std::endl;
			}
			else
			{
				std::cout << "이용 금액은 450원 입니다." << std::endl;
			}
		}
	}
	else
	{
		std::cout << "유효하지 않은 결제 수단입니다." << std::endl;
	}

	return 0;
}