/*
 * easySqlite.h
 *
 *  Created on: Apr 25, 2013
 *      Author: Dawid Drozd
 */

#ifndef EASYSQLITE_H_
#define EASYSQLITE_H_

#ifdef __clang__
    #pragma clang diagnostic push
    #pragma clang diagnostic ignored "-Wcomma"
    #pragma clang diagnostic ignored "-Wshorten-64-to-32"
    #pragma clang diagnostic ignored "-Wunreachable-code"
    #pragma clang diagnostic ignored "-Wunused-const-variable"
#endif

#include "SqlCommon.h"
#include "SqlField.h"
#include "SqlDatabase.h"
#include "SqlTable.h"
#include "SqlDatabase.h"
#include "SqlField.h"
#include "SHA1.h"
#include "sqlite3.h"
#include "SqlRecord.h"
#include "SqlTable.h"
#include "SqlCommon.h"
#include "SqlValue.h"
#include "SqlFieldSet.h"
#include "SqlRecordSet.h"

#ifdef __clang__
    #pragma clang diagnostic pop
#endif

using namespace sql;

#endif /* EASYSQLITE_H_ */
