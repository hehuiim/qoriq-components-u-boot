/*
 * Copyright 2018 NXP
 *
 * SPDX-License-Identifier:	GPL-2.0+
 */

#ifndef __LX2_RDB_H
#define __LX2_RDB_H

#include "lx2160a_common.h"

/* Qixis */
#define QIXIS_XMAP_MASK			0x07
#define QIXIS_XMAP_SHIFT		5
#define QIXIS_RST_CTL_RESET_EN		0x30

#define QIXIS_LBMAP_DFLTBANK		0x00
#define QIXIS_LBMAP_ALTBANK		0x20
#define QIXIS_LBMAP_QSPI		0x00
#define QIXIS_RCW_SRC_QSPI		0xff
#define QIXIS_RST_CTL_RESET		0x31
#define QIXIS_RCFG_CTL_RECONFIG_IDLE	0x20
#define QIXIS_RCFG_CTL_RECONFIG_START	0x21
#define QIXIS_RCFG_CTL_WATCHDOG_ENBLE	0x08
#define QIXIS_LBMAP_MASK		0x0f

/* VID */
#define I2C_MUX_CH_VOL_MONITOR		0xA
/* Voltage monitor on channel 2*/
#define I2C_VOL_MONITOR_ADDR		0x63
#define I2C_VOL_MONITOR_BUS_V_OFFSET	0x2
#define I2C_VOL_MONITOR_BUS_V_OVF	0x1
#define I2C_VOL_MONITOR_BUS_V_SHIFT	3

#define CONFIG_VID_FLS_ENV		"lx2rdb1_vdd_mv"
#define CONFIG_VID

/* The lowest and highest voltage allowed for LX2RDB1 */
#define VDD_MV_MIN			775
#define VDD_MV_MAX			855

/* PM Bus commands code for LTC3882*/
#define PMBUS_CMD_PAGE                  0x0
#define PMBUS_CMD_READ_VOUT             0x8B
#define PMBUS_CMD_PAGE_PLUS_WRITE       0x05
#define PMBUS_CMD_VOUT_COMMAND          0x21
#define PWM_CHANNEL0                    0x0

#define CONFIG_VOL_MONITOR_LTC3882_SET
#define CONFIG_VOL_MONITOR_LTC3882_READ

/* MAC/PHY configuration */
#if defined(CONFIG_FSL_MC_ENET) && !defined(CONFIG_SPL_BUILD)
#define CONFIG_PHYLIB_10G
#define CONFIG_MII
#define CONFIG_ETHPRIME		"DPMAC1@xgmii"

#define CONFIG_PHY_AQUANTIA
#define AQR107_PHY_ADDR1	0x04
#define AQR107_PHY_ADDR2	0x05

#define CONFIG_PHY_CORTINA
#define CORTINA_NO_FW_UPLOAD
#define CORTINA_FW_IN_EEPROM
#define CORTINA_PHY_ADDR1	0x0

#define CONFIG_PHY_ATHEROS
#define RGMII_PHY_ADDR1		0x01
#define RGMII_PHY_ADDR2		0x02

#define IN112525_IRQ_CCSR_MASK 0x600

#endif

#include <asm/fsl_secure_boot.h>

#endif /* __LX2_RDB_H */