/*
 * Copyright (c) 2015 Parallels IP Holdings GmbH
 *
 * This file is part of Virtuozzo Core Libraries. Virtuozzo Core
 * Libraries is free software; you can redistribute it and/or modify it
 * under the terms of the GNU Lesser General Public License as published
 * by the Free Software Foundation; either version 2.1 of the License, or
 * (at your option) any later version.
 *
 * This library is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
 * Lesser General Public License for more details.
 *
 * You should have received a copy of the GNU Lesser General Public
 * License along with this library.  If not, see
 * <http://www.gnu.org/licenses/> or write to Free Software Foundation,
 * 51 Franklin Street, Fifth Floor Boston, MA 02110, USA.
 *
 * Our contact details: Parallels IP Holdings GmbH, Vordergasse 59, 8200
 * Schaffhausen, Switzerland.
 */

#ifndef _CVZNETWORKSHAPING_H_
#define _CVZNETWORKSHAPING_H_

#include <prlxmlmodel/NetworkConfig/CNetworkShapingConfig.h>
#include <prlxmlmodel/NetworkConfig/CNetworkClassesConfig.h>
#include <prlxmlmodel/VmConfig/CVmNetworkRates.h>

class CVzNetworkShaping
{
public:
	static int update_network_shaping_config(const CNetworkShapingConfig &conf);
	static int get_network_shaping_config(CNetworkShapingConfig &conf);
	static int update_network_classes_config(const CNetworkClassesConfig &conf);
	static int get_network_classes_config(CNetworkClassesConfig &conf);
	static int set_rate(const QString &id, const CVmNetworkRates &lstRate);
	static PRL_RESULT restart_shaper();
};

#endif

