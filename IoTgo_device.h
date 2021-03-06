/**
 * @file IoTgo_device.h
 *
 * Include all classes of devices supported by IoTgo Library, such as Switch,
 * Light and Temperature & Humidity Sensor etc. User can include this
 * header file in *.ino or *.cpp source for using IoTgo Library. 
 * 
 * @author  Wu Pengfei (email:<pengfei.wu@itead.cc>)
 * @date    2014/11/20
 * @copyright 
 * Copyright (C) 2013-2014 ITEAD Intelligent Systems Co., Ltd. \n
 * This program is free software; you can redistribute it and/or
 * modify it under the terms of the GNU General Public License as
 * published by the Free Software Foundation; either version 2 of
 * the License, or (at your option) any later version.
 */
 
#ifndef __IOTGO_DEVICE_H__
#define __IOTGO_DEVICE_H__

#include "IoTgo_config.h"

#include "Dev_Switch.h"
#include "Dev_Light.h"

#include "Dev_THSensor.h"
#include "utility/HW_SHT1x.h"

#if defined(NET_USE_ESP8266)

#include "Eth_ESP8266.h"

#elif defined(NET_USE_W5X00)

#include "Eth_W5X00.h"

#elif defined(NET_USE_GSM)

#include "Eth_GSM.h"

#endif /* #if defined(NET_USE_ESP8266) */

#endif /* #ifndef __IOTGO_DEVICE_H__ */

