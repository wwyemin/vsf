/*****************************************************************************
 *   Copyright(C)2009-2019 by VSF Team                                       *
 *                                                                           *
 *  Licensed under the Apache License, Version 2.0 (the "License");          *
 *  you may not use this file except in compliance with the License.         *
 *  You may obtain a copy of the License at                                  *
 *                                                                           *
 *     http://www.apache.org/licenses/LICENSE-2.0                            *
 *                                                                           *
 *  Unless required by applicable law or agreed to in writing, software      *
 *  distributed under the License is distributed on an "AS IS" BASIS,        *
 *  WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied. *
 *  See the License for the specific language governing permissions and      *
 *  limitations under the License.                                           *
 *                                                                           *
 ****************************************************************************/

#ifndef __VSF_USB_UVC_H__
#define __VSF_USB_UVC_H__

/*============================ INCLUDES ======================================*/
/*============================ MACROS ========================================*/
/*============================ MACROFIED FUNCTIONS ===========================*/
/*============================ TYPES =========================================*/

enum usb_UVC_req_t {
    USB_UVCREQ_CUR      = 1,
    USB_UVCREQ_MIN      = 2,
    USB_UVCREQ_MAX      = 3,
    USB_UVCREQ_RES      = 4,
    USB_UVCREQ_LEN      = 5,
    USB_UVCREQ_INFO     = 6,
    USB_UVCREQ_DEF      = 7,
    USB_UVCREQ_ALL      = 0x10,
    USB_UVCREQ_SET      = 0x00,
    USB_UVCREQ_GET      = 0x80,
};
typedef enum usb_UVC_req_t usb_UVC_req_t;

/*============================ GLOBAL VARIABLES ==============================*/
/*============================ PROTOTYPES ====================================*/

#endif    // __VSFUSB_UVC_H__
