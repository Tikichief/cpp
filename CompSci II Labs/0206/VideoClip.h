#pragma once

#include <iostream>
#include <string>

using namespace std;

class VideoClip
{
private:
	string title;
	long likes;
public:
	VideoClip(string t = "", long i = 0);

	string getTitle(void) const;
	long getLikes(void) const;

	void setTitle(string);
	void setLikes(long);

	friend VideoClip operator+(VideoClip a, VideoClip b);
	friend bool operator<(VideoClip a, VideoClip b);
	friend ostream& operator<<(ostream& s, VideoClip v);
	friend istream& operator>>(istream& s, VideoClip & v);
	// 4 Feb
	friend bool operator==(VideoClip a, VideoClip b);
	// 6 Feb
	friend bool operator>(VideoClip a, VideoClip b);
};
