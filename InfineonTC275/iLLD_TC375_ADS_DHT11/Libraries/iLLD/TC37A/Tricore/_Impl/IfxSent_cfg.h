/**
 * \file IfxSent_cfg.h
 * \brief SENT on-chip implementation data
 * \ingroup IfxLld_Sent
 *
 * \version iLLD_1_0_1_15_0_1
 * \copyright Copyright (c) 2019 Infineon Technologies AG. All rights reserved.
 *
 *
 *
 *                                 IMPORTANT NOTICE
 *
 * Use of this file is subject to the terms of use agreed between (i) you or
 * the company in which ordinary course of business you are acting and (ii)
 * Infineon Technologies AG or its licensees. If and as long as no such terms
 * of use are agreed, use of this file is subject to following:
 *
 * Boost Software License - Version 1.0 - August 17th, 2003
 *
 * Permission is hereby granted, free of charge, to any person or organization
 * obtaining a copy of the software and accompanying documentation covered by
 * this license (the "Software") to use, reproduce, display, distribute,
 * execute, and transmit the Software, and to prepare derivative works of the
 * Software, and to permit third-parties to whom the Software is furnished to
 * do so, all subject to the following:
 *
 * The copyright notices in the Software and this entire statement, including
 * the above license grant, this restriction and the following disclaimer, must
 * be included in all copies of the Software, in whole or in part, and all
 * derivative works of the Software, unless such copies or derivative works are
 * solely in the form of machine-executable object code generated by a source
 * language processor.
 *
 * THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
 * IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
 * FITNESS FOR A PARTICULAR PURPOSE, TITLE AND NON-INFRINGEMENT. IN NO EVENT
 * SHALL THE COPYRIGHT HOLDERS OR ANYONE DISTRIBUTING THE SOFTWARE BE LIABLE
 * FOR ANY DAMAGES OR OTHER LIABILITY, WHETHER IN CONTRACT, TORT OR OTHERWISE,
 * ARISING FROM, OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER
 * DEALINGS IN THE SOFTWARE.
 *
 *
 *
 * \defgroup IfxLld_Sent SENT
 * \ingroup IfxLld
 * \defgroup IfxLld_Sent_Impl Implementation
 * \ingroup IfxLld_Sent
 * \defgroup IfxLld_Sent_Std Standard Driver
 * \ingroup IfxLld_Sent
 */

#ifndef IFXSENT_CFG_H
#define IFXSENT_CFG_H 1

/******************************************************************************/
/*----------------------------------Includes----------------------------------*/
/******************************************************************************/

/******************************************************************************/
/*-----------------------------------Macros-----------------------------------*/
/******************************************************************************/

/** \brief Specifies all interrupt events
 */
#define IFXSENT_CFG_CHANNEL_INTEN (0x1FEDU)

/** \brief Specifies the step range for calculating module clock
 */
#define IFXSENT_CFG_STEP_RANGE    (1024)

/** \brief Specifies timeout value in transmission
 */
#define IFXSENT_CFG_TIMEOUT_VALUE ((uint16)0xFFFFU)

#define IFXSENT_NUM_CHANNELS      (15)

#define IFXSENT_NUM_MODULES       (1)

/******************************************************************************/
/*-------------------------------Enumerations---------------------------------*/
/******************************************************************************/

/** \brief Specifies the channel Id
 */
typedef enum
{
    IfxSent_ChannelId_0    = 0,  /**< \brief Specifies the channel Id 0 */
    IfxSent_ChannelId_1    = 1,  /**< \brief Specifies the channel Id 1 */
    IfxSent_ChannelId_2    = 2,  /**< \brief Specifies the channel Id 2 */
    IfxSent_ChannelId_3    = 3,  /**< \brief Specifies the channel Id 3 */
    IfxSent_ChannelId_4    = 4,  /**< \brief Specifies the channel Id 4 */
    IfxSent_ChannelId_5    = 5,  /**< \brief Specifies the channel Id 5 */
    IfxSent_ChannelId_6    = 6,  /**< \brief Specifies the channel Id 6 */
    IfxSent_ChannelId_7    = 7,  /**< \brief Specifies the channel Id 7 */
    IfxSent_ChannelId_8    = 8,  /**< \brief Specifies the channel Id 8 */
    IfxSent_ChannelId_9    = 9,  /**< \brief Specifies the channel Id 9 */
    IfxSent_ChannelId_10   = 10, /**< \brief Specifies the channel Id 10 */
    IfxSent_ChannelId_11   = 11, /**< \brief Specifies the channel Id 11 */
    IfxSent_ChannelId_12   = 12, /**< \brief Specifies the channel Id 12 */
    IfxSent_ChannelId_13   = 13, /**< \brief Specifies the channel Id 13 */
    IfxSent_ChannelId_14   = 14, /**< \brief Specifies the channel Id 14 */
    IfxSent_ChannelId_none = -1  /**< \brief None Sent channels */
} IfxSent_ChannelId;

#endif /* IFXSENT_CFG_H */
