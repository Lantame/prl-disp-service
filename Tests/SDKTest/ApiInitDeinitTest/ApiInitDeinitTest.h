/////////////////////////////////////////////////////////////////////////////
///
///	@file ApiInitDeinitTest.h
///
///	This file is the part of parallels public SDK library tests suite.
///	Tests suite for checking PrlApi_Init() PrlApi_Deinit() multiple calls.
///
///	@author sandro
///
/// Copyright (c) 2005-2015 Parallels IP Holdings GmbH
///
/// This file is part of Virtuozzo Core. Virtuozzo Core is free
/// software; you can redistribute it and/or modify it under the terms
/// of the GNU General Public License as published by the Free Software
/// Foundation; either version 2 of the License, or (at your option) any
/// later version.
/// 
/// This program is distributed in the hope that it will be useful,
/// but WITHOUT ANY WARRANTY; without even the implied warranty of
/// MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
/// GNU General Public License for more details.
/// 
/// You should have received a copy of the GNU General Public License
/// along with this program; if not, write to the Free Software
/// Foundation, Inc., 51 Franklin Street, Fifth Floor, Boston, MA
/// 02110-1301, USA.
///
/// Our contact details: Parallels IP Holdings GmbH, Vordergasse 59, 8200
/// Schaffhausen, Switzerland.
///
/////////////////////////////////////////////////////////////////////////////

#ifndef ApiInitDeinitTest_H
#define ApiInitDeinitTest_H

#include <QtTest/QtTest>
#include <QObject>

class ApiInitDeinitTest : public QObject
{
Q_OBJECT

private slots:
	void test();
};

/** Special helper that lets to start tests execution in second events loop */
class TestsExecuter : public QObject
{
Q_OBJECT
public:
	TestsExecuter(int _argc, char **_argv) : argc(_argc), argv(_argv) {}

public slots:
	void PushTestsExecution();

private:
	int argc;
	char **argv;
};

#endif

