#pragma once

#include "hal_platform_nrf52840_config.h"
#include "platforms.h"

#define HAL_PLATFORM_USART2 (1)
#define HAL_PLATFORM_SLEEP20 (1)

#if PLATFORM_ID == PLATFORM_XENON

#define HAL_PLATFORM_RADIO_ANTENNA_INTERNAL (1)
#define HAL_PLATFORM_RADIO_ANTENNA_EXTERNAL (1)

#else // PLATFORM_ID != PLATFORM_XENON

#define HAL_PLATFORM_PMIC_BQ24195 (1)
#define HAL_PLATFORM_PMIC_BQ24195_I2C (HAL_I2C_INTERFACE1)
#define HAL_PLATFORM_FUELGAUGE_MAX17043 (1)
#define HAL_PLATFORM_FUELGAUGE_MAX17043_I2C (HAL_I2C_INTERFACE1)
#define HAL_PLATFORM_POWER_MANAGEMENT (1)
#define HAL_PLATFORM_POWER_MANAGEMENT_OPTIONAL (1)
#define HAL_PLATFORM_PMIC_BQ24195_FAULT_COUNT_THRESHOLD (4)
#define HAL_PLATFORM_RADIO_ANTENNA_EXTERNAL (1)

#endif // PLATFORM_ID != PLATFORM_XENON
