static const WCHAR* g_strGameTitle;

struct VideoSetup
{
	unsigned int height;
	unsigned int witdh;

	bool isWindowed = false;

	VideoSetup(int _height, int _witdh) { height = _height; witdh = _witdh; }
};