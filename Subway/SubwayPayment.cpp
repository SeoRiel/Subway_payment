#include <iostream>

int main()
{
	// Input type
	int age;
	int paymentType;
	int range;
	int charge;

	std::cout << "���̸� �Է��ϼ���. : ";
	std::cin >> age;

	std::cout << "���� ������ �Է��ϼ���. (1. ���� ī�� / 2. �Ϲ�) : ";
	std::cin >> paymentType;

	std::cout << "�̵� �Ÿ��� �Է��ϼ��� : ";
	std::cin >> range;

	if (paymentType == 1)													// ���� ī��
	{
		if (age >= 19)														// � (19�� �̻�)
		{
			if (range > 15 && range <= 20)									// 15km �ʰ� 20km ����
			{
				std::cout << "�̿� �ݾ��� 1,450�� �Դϴ�." << std::endl;
			}
			else if (range > 10 && range <= 15)								// 10km �ʰ� 15km ����
			{
				std::cout << "�̿� �ݾ��� 1,350�� �Դϴ�." << std::endl;
			}
			else if (range <= 10)											// 10km �ʰ�
			{
				std::cout << "�̿� �ݾ��� 1,250�� �Դϴ�." << std::endl;
			}
			else															// 10km �̸�
			{
				std::cout << "�̿� �ݾ��� 1,250�� �Դϴ�." << std::endl;
			}
		}
		else if (age >= 13 && age <= 18)									// û�ҳ� (13�� �̻�, 18�� ����)
		{
			if (range > 15 && range <= 20)
			{
				std::cout << "�̿� �ݾ��� 880�� �Դϴ�." << std::endl;
			}
			else if (range > 10 && range <= 15)
			{
				std::cout << "�̿� �ݾ��� 800�� �Դϴ�." << std::endl;
			}
			else if (range <= 10)
			{
				std::cout << "�̿� �ݾ��� 720�� �Դϴ�." << std::endl;
			}
			else
			{
				std::cout << "�̿� �ݾ��� 720�� �Դϴ�." << std::endl;
			}
		}
		else if (age >= 6 && age < 13)										// ��� (6�� �̻�, 13�� �̸�)
		{
			if (range > 15 && range <= 20)
			{
				std::cout << "�̿� �ݾ��� 550�� �Դϴ�." << std::endl;
			}
			else if (range > 10 && range <= 15)
			{
				std::cout << "�̿� �ݾ��� 500�� �Դϴ�." << std::endl;
			}
			else if (range <= 10)
			{
				std::cout << "�̿� �ݾ��� 450�� �Դϴ�." << std::endl;
			}
			else
			{
				std::cout << "�̿� �ݾ��� 450�� �Դϴ�." << std::endl;
			}
		}
	}
	else if (paymentType == 2)												// �Ϲ�
	{
		if (age >= 18 && age <= 13 && age >= 19)							// �, û�ҳ�
		{
			if (range > 15 && range <= 20)
			{
				std::cout << "�̿� �ݾ��� 1,550�� �Դϴ�." << std::endl;
			}
			else if (range > 10 && range <= 15)
			{
				std::cout << "�̿� �ݾ��� 1,450�� �Դϴ�." << std::endl;
			}
			else if (range >= 10)
			{
				std::cout << "�̿� �ݾ��� 1,350�� �Դϴ�." << std::endl;
			}
			else
			{
				std::cout << "�̿� �ݾ��� 1,350�� �Դϴ�." << std::endl;
			}
		}
		else if (age >= 6 && age < 13)									// ��� (6�� �̻�, 13�� �̸�)
		{
			if (range > 15 && range <= 20)
			{
				std::cout << "�̿� �ݾ��� 550�� �Դϴ�." << std::endl;
			}
			else if (range > 10 && range <= 15)
			{
				std::cout << "�̿� �ݾ��� 500�� �Դϴ�." << std::endl;
			}
			else if (range >= 10)
			{
				std::cout << "�̿� �ݾ��� 450�� �Դϴ�." << std::endl;
			}
			else
			{
				std::cout << "�̿� �ݾ��� 450�� �Դϴ�." << std::endl;
			}
		}
	}
	else
	{
		std::cout << "��ȿ���� ���� ���� �����Դϴ�." << std::endl;
	}

	return 0;
}