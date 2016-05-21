#ifndef GVAR_H
#define GVAR_H

#pragma once

#if _MSC_VER >= 1600
#pragma execution_character_set("utf-8")
#endif

#include <qstring.h>
#include <map>
#include <set>
#include <vector>
//#include "Instrument.h"

//前置机地址
//extern QString FRONT_ADDRESS;

//行情机状态
//extern const QString OFFLINE;
//extern const QString CONNECTING;
//extern const QString ONLINE;

//放置行情数据文件*.dat的前缀地址
//extern const QString DAT_PREDIR;

//全部合约的列表(合约代码)
//extern std::map<QString, Instrument*> instruList;

//正在订阅的合约集合(合约代码)
//extern std::set<QString> instruSet;

//交易日
//extern QString tradeDate;

//数据库资料
extern QString DB_DRIVER_NAME="QMYSQL";
extern QString DB_HOST_NAME="139.196.252.127";
extern QString DATABASE_NAME="test";
extern QString USER_NAME="root";
extern QString PASSWORD="huangq33";

//一键订阅的合约名
extern std::vector<QString> onekeyInstru;
#endif // GVAR_H
