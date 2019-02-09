#include "VideoClip.h"
#include "Header.h"

int main()
{
	VideoClip videos[2];

	for (auto &vid : videos)
	{
		cout << "Enter the name of the videoclip object " << endl;
		cin >> vid;
	}
	cout << endl;
	for (auto &vid : videos)
	{
		cout << vid << endl;
	}

	VideoClip x;
	cout << "Enter the name of the videoclip to search:" << endl;
	cin >> x;
	cout << endl;

	int position;

	position = LinearSearch(videos, x);
	if (position != -1)
		cout << "Linear Search found it at position: " << position << endl;
	else
		cout << "Linear Search did not find it." << endl;

	position = BinarySearch(videos, x);
	if (position != -1)
		cout << "Binary Search found it at position: " << position << endl;
	else
		cout << "Binary Search did not find it." << endl;


	system("pause");
	return 0;
}
