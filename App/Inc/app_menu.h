/**
 ****************************************************************************************************
 * @file        app_menu.h
 * @author      Autumn
 * @version     V1.0
 * @date        2026-06-16
 * @brief       OLED菜单系统
 ****************************************************************************************************
 * @attention
 *
 * 0.96寸 OLED 128x64, 12号字体
 * 按键: KEY0=返回, KEY1=下移, KEY2=上移, KEY_UP=确认
 *
 ****************************************************************************************************
 */

#ifndef __APP_MENU_H
#define __APP_MENU_H

#include "stm32f1xx_hal.h"

/* 菜单页面 */
typedef enum
{
    PAGE_MAIN_MENU = 0,     /* 主菜单 */
    PAGE_PERCENT,           /* 百分比选择 */
    PAGE_STATUS,            /* 状态显示 */
    PAGE_MAX
} menu_page_t;

/* 菜单项 */
typedef enum
{
    MENU_OPEN = 0,          /* 打开 */
    MENU_CLOSE,             /* 关闭 */
    MENU_STOP,              /* 停止 */
    MENU_PERCENT,           /* 百分比控制 */
    MENU_QUERY,             /* 查询状态 */
    MENU_MAX
} menu_item_t;

/**
 * @brief       菜单初始化
 */
void app_menu_init(void);

/**
 * @brief       菜单处理(主循环调用)
 * @param       key: 当前按键值 (0=无按键)
 * @retval      无
 */
void app_menu_process(uint8_t key);

#endif
