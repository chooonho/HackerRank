#include <string>
#include <iostream>

int main()
{
	std::string time;
	bool done = false;

	do
	{
		std::cin >> time;
		while (time.length() < 10)
		{
			std::cout << "Invalid time!" << std::endl;
			std::cin >> time;
		}
		while (time.substr(time.length() - 2) != "AM" && time.substr(time.length() - 2) != "PM")
		{
			std::cout << "Either PM or AM!" << std::endl;
			std::cin >> time;
		}

		bool morning = time.substr(time.length() - 2) == "AM";
		time = time.substr(0, time.length() - 2);
		if (time.find_first_not_of("0123456789:") != std::string::npos)
		{
			std::cout << "Invalid time!" << std::endl;
			continue;
		}

		std::string hourText = time.substr(0, 2);
		std::string minuteText = time.substr(time.find_first_of(":") + 1, 2);
		std::string secondText = time.substr(time.find_last_of(":") + 1);

		int hour = ((hourText[0] - '0') * 10) + (hourText[1] - '0');
		int minute = ((minuteText[0] - '0') * 10) + (minuteText[1] - '0');
		int second = ((secondText[0] - '0') * 10) + (secondText[1] - '0');

		if ((hour < 1 || hour > 12) || (minute < 0 || minute > 59) || (second < 0 || second > 59))
		{
			std::cout << "Invalid hour / minute / second" << std::endl;
			continue;
		}

		if (!morning)
		{
			if (hour != 12)
			{
				hour += 12;
			}
		}
		else
		{
			if (hour == 12)
			{
				hour = 0;
			}
		}

		if (hour < 10)
		{
			std::cout << "0";
		}
		std::cout << hour << ":";

		if (minute < 10)
		{
			std::cout << "0";
		}
		std::cout << minute << ":";

		if (second < 10)
		{
			std::cout << "0";
		}
		std::cout << second << std::endl;

		done = true;

	} while (!done);

	return 0;
}