#include "elementblock.h"
#include "system.h"
#include <QtDebug>


extern SYSTEMS * sys;
/*
ElementBlock::ElementBlock(QGraphicsRectItem *parent)
{
    int x = sys->Menu->getX();
    int y = sys->Menu->getY();
    setPos(x,y);
    setRect(0,0,38,38);
    ElementNum = sys->getelemNum();
}
*/

ElementBlock::ElementBlock(QGraphicsPixmapItem *parent)
{
    int x = sys->Menu->getX();
    int y = sys->Menu->getY();
    ElementNum = sys->getelemNum();
    setPos(x,y);
    //setRect(0,0,38,38);
    addimage(ElementNum);
}

void ElementBlock::mousePressEvent(QGraphicsSceneMouseEvent *event)
{
    sys->setelemNum(ElementNum);
    sys->addInfo();
    sys->Menu->setY(25);
    qDebug() << ElementNum << endl;
}

void ElementBlock::addimage(int s)
{
    s = ElementNum;
    if(s == 0)
    setPixmap(QPixmap(":/new/images/1 h.PNG").scaled(38,38,Qt::KeepAspectRatio));
    if(s == 1)
    setPixmap(QPixmap(":/new/images/2 he.PNG").scaled(38,38,Qt::KeepAspectRatio));
    if(s == 2)
    setPixmap(QPixmap(":/new/images/3 li.PNG").scaled(38,38,Qt::KeepAspectRatio));
    if(s == 3)
    setPixmap(QPixmap(":/new/images/4 be.PNG").scaled(38,38,Qt::KeepAspectRatio));
    if(s == 4)
    setPixmap(QPixmap(":/new/images/5 b.PNG").scaled(38,38,Qt::KeepAspectRatio));
    if(s == 5)
    setPixmap(QPixmap(":/new/images/6 c.PNG").scaled(38,38,Qt::KeepAspectRatio));
    if(s == 6)
    setPixmap(QPixmap(":/new/images/7 n.PNG").scaled(38,38,Qt::KeepAspectRatio));
    if(s == 7)
    setPixmap(QPixmap(":/new/images/8 o.PNG").scaled(38,38,Qt::KeepAspectRatio));
    if(s == 8)
    setPixmap(QPixmap(":/new/images/9 f.PNG").scaled(38,38,Qt::KeepAspectRatio));
    if(s == 9)
    setPixmap(QPixmap(":/new/images/10 ne.PNG").scaled(38,38,Qt::KeepAspectRatio));
    if(s == 10)
    setPixmap(QPixmap(":/new/images/11 na.PNG").scaled(38,38,Qt::KeepAspectRatio));
    if(s == 11)
    setPixmap(QPixmap(":/new/images/12 mg.PNG").scaled(38,38,Qt::KeepAspectRatio));
    if(s == 12)
    setPixmap(QPixmap(":/new/images/13 al.PNG").scaled(38,38,Qt::KeepAspectRatio));
    if(s == 13)
    setPixmap(QPixmap(":/new/images/14 sl.PNG").scaled(38,38,Qt::KeepAspectRatio));
    if(s == 14)
    setPixmap(QPixmap(":/new/images/15 p.PNG").scaled(38,38,Qt::KeepAspectRatio));
    if(s == 15)
    setPixmap(QPixmap(":/new/images/16 s.PNG").scaled(38,38,Qt::KeepAspectRatio));
    if(s == 16)
    setPixmap(QPixmap(":/new/images/17 cl.PNG").scaled(38,38,Qt::KeepAspectRatio));
    if(s == 17)
    setPixmap(QPixmap(":/new/images/18 ar.PNG").scaled(38,38,Qt::KeepAspectRatio));
    if(s == 18)
    setPixmap(QPixmap(":/new/images/19 k.PNG").scaled(38,38,Qt::KeepAspectRatio));
    if(s == 19)
    setPixmap(QPixmap(":/new/images/20 ca.PNG").scaled(38,38,Qt::KeepAspectRatio));
    if(s == 20)
    setPixmap(QPixmap(":/new/images/21 sc.PNG").scaled(38,38,Qt::KeepAspectRatio));
    if(s == 21)
    setPixmap(QPixmap(":/new/images/22 ti.PNG").scaled(38,38,Qt::KeepAspectRatio));
    if(s == 22)
    setPixmap(QPixmap(":/new/images/23 v.PNG").scaled(38,38,Qt::KeepAspectRatio));
    if(s == 23)
    setPixmap(QPixmap(":/new/images/24 cr.PNG").scaled(38,38,Qt::KeepAspectRatio));
    if(s == 24)
    setPixmap(QPixmap(":/new/images/25 mn.PNG").scaled(38,38,Qt::KeepAspectRatio));
    if(s == 25)
    setPixmap(QPixmap(":/new/images/26 fe.PNG").scaled(38,38,Qt::KeepAspectRatio));
    if(s == 26)
    setPixmap(QPixmap(":/new/images/27 co.PNG").scaled(38,38,Qt::KeepAspectRatio));
    if(s == 27)
    setPixmap(QPixmap(":/new/images/28 ni.PNG").scaled(38,38,Qt::KeepAspectRatio));
    if(s == 28)
    setPixmap(QPixmap(":/new/images/29 cu.PNG").scaled(38,38,Qt::KeepAspectRatio));
    if(s == 29)
    setPixmap(QPixmap(":/new/images/30 zn.PNG").scaled(38,38,Qt::KeepAspectRatio));
    if(s == 30)
    setPixmap(QPixmap(":/new/images/31 ga.PNG").scaled(38,38,Qt::KeepAspectRatio));
    if(s == 31)
    setPixmap(QPixmap(":/new/images/32 ge.PNG").scaled(38,38,Qt::KeepAspectRatio));
    if(s == 32)
    setPixmap(QPixmap(":/new/images/33 as.PNG").scaled(38,38,Qt::KeepAspectRatio));
    if(s == 33)
    setPixmap(QPixmap(":/new/images/34 se.PNG").scaled(38,38,Qt::KeepAspectRatio));
    if(s == 34)
    setPixmap(QPixmap(":/new/images/35 br.PNG").scaled(38,38,Qt::KeepAspectRatio));
    if(s == 35)
    setPixmap(QPixmap(":/new/images/36 kr.PNG").scaled(38,38,Qt::KeepAspectRatio));
    if(s == 36)
    setPixmap(QPixmap(":/new/images/37 rb.PNG").scaled(38,38,Qt::KeepAspectRatio));
    if(s == 37)
    setPixmap(QPixmap(":/new/images/38 sr.PNG").scaled(38,38,Qt::KeepAspectRatio));
    if(s == 38)
    setPixmap(QPixmap(":/new/images/39 y.PNG").scaled(38,38,Qt::KeepAspectRatio));
    if(s == 39)
    setPixmap(QPixmap(":/new/images/40 zr.PNG").scaled(38,38,Qt::KeepAspectRatio));
    if(s == 40)
    setPixmap(QPixmap(":/new/images/41 nb.PNG").scaled(38,38,Qt::KeepAspectRatio));
    if(s == 41)
    setPixmap(QPixmap(":/new/images/42 mo.PNG").scaled(38,38,Qt::KeepAspectRatio));
    if(s == 42)
    setPixmap(QPixmap(":/new/images/43 tc.PNG").scaled(38,38,Qt::KeepAspectRatio));
    if(s == 43)
    setPixmap(QPixmap(":/new/images/44 ru.PNG").scaled(38,38,Qt::KeepAspectRatio));
    if(s == 44)
    setPixmap(QPixmap(":/new/images/45 rh.PNG").scaled(38,38,Qt::KeepAspectRatio));
    if(s == 45)
    setPixmap(QPixmap(":/new/images/46 pd.PNG").scaled(38,38,Qt::KeepAspectRatio));
    if(s == 46)
    setPixmap(QPixmap(":/new/images/47 ag.PNG").scaled(38,38,Qt::KeepAspectRatio));
    if(s == 47)
    setPixmap(QPixmap(":/new/images/48 cd.PNG").scaled(38,38,Qt::KeepAspectRatio));
    if(s == 48)
    setPixmap(QPixmap(":/new/images/49 ir.PNG").scaled(38,38,Qt::KeepAspectRatio));
    if(s == 49)
    setPixmap(QPixmap(":/new/images/50 sn.PNG").scaled(38,38,Qt::KeepAspectRatio));
    if(s == 50)
    setPixmap(QPixmap(":/new/images/51 sb.PNG").scaled(38,38,Qt::KeepAspectRatio));
    if(s == 51)
    setPixmap(QPixmap(":/new/images/52 te.PNG").scaled(38,38,Qt::KeepAspectRatio));
    if(s == 52)
    setPixmap(QPixmap(":/new/images/53 i.PNG").scaled(38,38,Qt::KeepAspectRatio));
    if(s == 53)
    setPixmap(QPixmap(":/new/images/54 xe.PNG").scaled(38,38,Qt::KeepAspectRatio));
    if(s == 54)
    setPixmap(QPixmap(":/new/images/55 cs.PNG").scaled(38,38,Qt::KeepAspectRatio));
    if(s == 55)
    setPixmap(QPixmap(":/new/images/56 ba.PNG").scaled(38,38,Qt::KeepAspectRatio));
    if(s == 56)
    setPixmap(QPixmap(":/new/images/57 la.PNG").scaled(38,38,Qt::KeepAspectRatio));
    if(s == 57)
    setPixmap(QPixmap(":/new/images/58 ce.PNG").scaled(38,38,Qt::KeepAspectRatio));
    if(s == 58)
    setPixmap(QPixmap(":/new/images/59 pr.PNG").scaled(38,38,Qt::KeepAspectRatio));
    if(s == 59)
    setPixmap(QPixmap(":/new/images/60 nd.PNG").scaled(38,38,Qt::KeepAspectRatio));
    if(s == 60)
    setPixmap(QPixmap(":/new/images/61 pm.PNG").scaled(38,38,Qt::KeepAspectRatio));
    if(s == 61)
    setPixmap(QPixmap(":/new/images/62 sm.PNG").scaled(38,38,Qt::KeepAspectRatio));
    if(s == 62)
    setPixmap(QPixmap(":/new/images/63 eu.PNG").scaled(38,38,Qt::KeepAspectRatio));
    if(s == 63)
    setPixmap(QPixmap(":/new/images/64 gd.PNG").scaled(38,38,Qt::KeepAspectRatio));
    if(s == 64)
    setPixmap(QPixmap(":/new/images/65 tb.PNG").scaled(38,38,Qt::KeepAspectRatio));
    if(s == 65)
    setPixmap(QPixmap(":/new/images/66 dy.PNG").scaled(38,38,Qt::KeepAspectRatio));
    if(s == 66)
    setPixmap(QPixmap(":/new/images/67 ho.PNG").scaled(38,38,Qt::KeepAspectRatio));
    if(s == 67)
    setPixmap(QPixmap(":/new/images/68 er.PNG").scaled(38,38,Qt::KeepAspectRatio));
    if(s == 68)
    setPixmap(QPixmap(":/new/images/69 tm.PNG").scaled(38,38,Qt::KeepAspectRatio));
    if(s == 69)
    setPixmap(QPixmap(":/new/images/70 yb.PNG").scaled(38,38,Qt::KeepAspectRatio));
    if(s == 70)
    setPixmap(QPixmap(":/new/images/71 Lu.PNG").scaled(38,38,Qt::KeepAspectRatio));
    if(s == 71)
    setPixmap(QPixmap(":/new/images/72 hf.PNG").scaled(38,38,Qt::KeepAspectRatio));
    if(s == 72)
    setPixmap(QPixmap(":/new/images/73 ta.PNG").scaled(38,38,Qt::KeepAspectRatio));
    if(s == 73)
    setPixmap(QPixmap(":/new/images/74 w.PNG").scaled(38,38,Qt::KeepAspectRatio));
    if(s == 74)
    setPixmap(QPixmap(":/new/images/75 re.PNG").scaled(38,38,Qt::KeepAspectRatio));
    if(s == 75)
    setPixmap(QPixmap(":/new/images/76 os.PNG").scaled(38,38,Qt::KeepAspectRatio));
    if(s == 76)
    setPixmap(QPixmap(":/new/images/77 ir.PNG").scaled(38,38,Qt::KeepAspectRatio));
    if(s == 77)
    setPixmap(QPixmap(":/new/images/78 pt.PNG").scaled(38,38,Qt::KeepAspectRatio));
    if(s == 78)
    setPixmap(QPixmap(":/new/images/79 au.PNG").scaled(38,38,Qt::KeepAspectRatio));
    if(s == 79)
    setPixmap(QPixmap(":/new/images/80 hg.PNG").scaled(38,38,Qt::KeepAspectRatio));
    if(s == 80)
    setPixmap(QPixmap(":/new/images/81 tl.PNG").scaled(38,38,Qt::KeepAspectRatio));
    if(s == 81)
    setPixmap(QPixmap(":/new/images/82 pb.PNG").scaled(38,38,Qt::KeepAspectRatio));
    if(s == 82)
    setPixmap(QPixmap(":/new/images/83 bi.PNG").scaled(38,38,Qt::KeepAspectRatio));
    if(s == 83)
    setPixmap(QPixmap(":/new/images/84 po.PNG").scaled(38,38,Qt::KeepAspectRatio));
    if(s == 84)
    setPixmap(QPixmap(":/new/images/85 at.PNG").scaled(38,38,Qt::KeepAspectRatio));
    if(s == 85)
    setPixmap(QPixmap(":/new/images/86 rn.PNG").scaled(38,38,Qt::KeepAspectRatio));
    if(s == 86)
    setPixmap(QPixmap(":/new/images/87 fr.PNG").scaled(38,38,Qt::KeepAspectRatio));
    if(s == 87)
    setPixmap(QPixmap(":/new/images/88 ra.PNG").scaled(38,38,Qt::KeepAspectRatio));
    if(s == 88)
    setPixmap(QPixmap(":/new/images/89 ac.PNG").scaled(38,38,Qt::KeepAspectRatio));
    if(s == 89)
    setPixmap(QPixmap(":/new/images/90 th.PNG").scaled(38,38,Qt::KeepAspectRatio));
    if(s == 90)
    setPixmap(QPixmap(":/new/images/91 pa.PNG").scaled(38,38,Qt::KeepAspectRatio));
    if(s == 91)
    setPixmap(QPixmap(":/new/images/92 u.PNG").scaled(38,38,Qt::KeepAspectRatio));
    if(s == 92)
    setPixmap(QPixmap(":/new/images/93 np.PNG").scaled(38,38,Qt::KeepAspectRatio));
    if(s == 93)
    setPixmap(QPixmap(":/new/images/94 pu.PNG").scaled(38,38,Qt::KeepAspectRatio));
    if(s == 94)
    setPixmap(QPixmap(":/new/images/95 am.PNG").scaled(38,38,Qt::KeepAspectRatio));
    if(s == 95)
    setPixmap(QPixmap(":/new/images/96 cm.PNG").scaled(38,38,Qt::KeepAspectRatio));
    if(s == 96)
    setPixmap(QPixmap(":/new/images/97 bk.PNG").scaled(38,38,Qt::KeepAspectRatio));
    if(s == 97)
    setPixmap(QPixmap(":/new/images/98 cf.PNG").scaled(38,38,Qt::KeepAspectRatio));
    if(s == 98)
    setPixmap(QPixmap(":/new/images/99 es.PNG").scaled(38,38,Qt::KeepAspectRatio));
    if(s == 99)
    setPixmap(QPixmap(":/new/images/100 fm.PNG").scaled(38,38,Qt::KeepAspectRatio));
    if(s == 100)
    setPixmap(QPixmap(":/new/images/101 md.PNG").scaled(38,38,Qt::KeepAspectRatio));
    if(s == 101)
    setPixmap(QPixmap(":/new/images/102 no.PNG").scaled(38,38,Qt::KeepAspectRatio));
    if(s == 102)
    setPixmap(QPixmap(":/new/images/103 lr.PNG").scaled(38,38,Qt::KeepAspectRatio));
    if(s == 103)
    setPixmap(QPixmap(":/new/images/104 rf.PNG").scaled(38,38,Qt::KeepAspectRatio));
    if(s == 104)
    setPixmap(QPixmap(":/new/images/105 db.PNG").scaled(38,38,Qt::KeepAspectRatio));
    if(s == 105)
    setPixmap(QPixmap(":/new/images/106 sg.PNG").scaled(38,38,Qt::KeepAspectRatio));
    if(s == 106)
    setPixmap(QPixmap(":/new/images/107 bh.PNG").scaled(38,38,Qt::KeepAspectRatio));
    if(s == 107)
    setPixmap(QPixmap(":/new/images/108 hs.PNG").scaled(38,38,Qt::KeepAspectRatio));
    if(s == 108)
    setPixmap(QPixmap(":/new/images/109 mt.PNG").scaled(38,38,Qt::KeepAspectRatio));
    if(s == 109)
    setPixmap(QPixmap(":/new/images/110 ds.PNG").scaled(38,38,Qt::KeepAspectRatio));
    if(s == 110)
    setPixmap(QPixmap(":/new/images/111 rg.PNG").scaled(38,38,Qt::KeepAspectRatio));
    if(s == 111)
    setPixmap(QPixmap(":/new/images/112 cn.PNG").scaled(38,38,Qt::KeepAspectRatio));
    if(s == 112)
    setPixmap(QPixmap(":/new/images/113 nh.PNG").scaled(38,38,Qt::KeepAspectRatio));
    if(s == 113)
    setPixmap(QPixmap(":/new/images/114 fl.PNG").scaled(38,38,Qt::KeepAspectRatio));
    if(s == 114)
    setPixmap(QPixmap(":/new/images/115 mc.PNG").scaled(38,38,Qt::KeepAspectRatio));
    if(s == 115)
    setPixmap(QPixmap(":/new/images/116 lv.PNG").scaled(38,38,Qt::KeepAspectRatio));
    if(s == 116)
    setPixmap(QPixmap(":/new/images/117 ts.PNG").scaled(38,38,Qt::KeepAspectRatio));
    if(s == 117)
    setPixmap(QPixmap(":/new/images/118 og.PNG").scaled(38,38,Qt::KeepAspectRatio));
}
//setPixmap(QPixmap(":new/images/Cards/ACECLUBS.png").scaled(120,120,Qt::KeepAspectRatio));
