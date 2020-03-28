#include <QImage>
#include <cstdio>
#include "xbrz1.8/xbrz.h"

int main()
{
	int const SCALE = 4;

	QImage srcimage;
	srcimage.load("lena.png");
	srcimage = srcimage.convertToFormat(QImage::Format_RGBA8888);
	int w = srcimage.width();
	int h = srcimage.height();
	if (w > 0 && h > 0) {
		QImage dstimage(w * SCALE, h * SCALE, QImage::Format_RGBA8888);
		{
			xbrz::ScalerCfg cfg;
			xbrz::scale(SCALE, (uint32_t*)srcimage.bits(), (uint32_t*)dstimage.bits(), w, h, xbrz::ColorFormat::RGBA, cfg, 0, h);
		}
		dstimage.save("out.png");
	}
}
