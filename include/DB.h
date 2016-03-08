/*
 *
 * (C) 2013-16 - ntop.org
 *
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation; either version 3 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program; if not, write to the Free Software Foundation,
 * Inc., 59 Temple Place - Suite 330, Boston, MA 02111-1307, USA.
 *
 */

#ifndef _DB_CLASS_H_
#define _DB_CLASS_H_

#include "ntop_includes.h"

class DB {
 protected:
  NetworkInterface *iface;
  Mutex *m;

 public:
  DB(NetworkInterface *_iface = NULL);
  virtual ~DB();
  
  virtual bool dumpFlow(time_t when, bool partial_dump, Flow *f, char *json);
  virtual int exec_sql_query(lua_State *vm, char *sql, bool limit_rows);
};

#endif /* _DB_CLASS_H_ */
