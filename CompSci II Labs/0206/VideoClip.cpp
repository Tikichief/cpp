#include "VideoClip.h"

VideoClip::VideoClip(string t, long i)
	: title(t), likes(i) { }

string VideoClip::getTitle(void) const
{
	return title;
}

long VideoClip::getLikes(void) const
{
	return likes;
}

void VideoClip::setTitle(string t)
{
	title = t;
}

void VideoClip::setLikes(long i)
{
	likes = i;
}

VideoClip operator+(VideoClip a, VideoClip b)
{
	VideoClip result;
	result.title = a.title + " + " + b.title;
	result.likes = a.likes + b.likes;
	return result;
}

bool operator<(VideoClip a, VideoClip b)
{
	if (a.likes < b.likes)
		return true;
	else
		return false;
}

ostream& operator<<(ostream& s, VideoClip v)
{
	cout << "Title: ";
	s << v.title << endl;

	cout << "Likes: ";
	s << v.likes << endl;

	return s;
}

istream& operator>>(istream& s, VideoClip & v)
{
	cout << "Title: ";
	getline(s, v.title);

	cout << "Likes: ";
	s >> v.likes;
	s.ignore();

	return s;
}

bool operator==(VideoClip a, VideoClip b)
{
	if (a.title == b.title)
		return true;
	else
		return false;
}

bool operator>(VideoClip a, VideoClip b)
{
	if (a.title > b.title)
		return true;
	else
		return false;
}
