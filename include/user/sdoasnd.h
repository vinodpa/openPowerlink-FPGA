/**
********************************************************************************
\file   sdoasnd.h

\brief  Definitions for SDO over ASnd protocol abstraction layer

The file contains definitions for the SDO over ASnd protocol abstraction layer.
*******************************************************************************/

/*------------------------------------------------------------------------------
Copyright (c) 2013, Bernecker+Rainer Industrie-Elektronik Ges.m.b.H. (B&R)
Copyright (c) 2013, SYSTEC electronic GmbH
All rights reserved.

Redistribution and use in source and binary forms, with or without
modification, are permitted provided that the following conditions are met:
    * Redistributions of source code must retain the above copyright
      notice, this list of conditions and the following disclaimer.
    * Redistributions in binary form must reproduce the above copyright
      notice, this list of conditions and the following disclaimer in the
      documentation and/or other materials provided with the distribution.
    * Neither the name of the copyright holders nor the
      names of its contributors may be used to endorse or promote products
      derived from this software without specific prior written permission.

THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS "AS IS" AND
ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE IMPLIED
WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE ARE
DISCLAIMED. IN NO EVENT SHALL COPYRIGHT HOLDERS BE LIABLE FOR ANY
DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES
(INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES;
LOSS OF USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED AND
ON ANY THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT
(INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE OF THIS
SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.
------------------------------------------------------------------------------*/

#ifndef _INC_sdoasnd_H_
#define _INC_sdoasnd_H_

//------------------------------------------------------------------------------
// includes
//------------------------------------------------------------------------------
#include <sdo.h>
#include <dll.h>

//------------------------------------------------------------------------------
// const defines
//------------------------------------------------------------------------------

//------------------------------------------------------------------------------
// typedef
//------------------------------------------------------------------------------

//------------------------------------------------------------------------------
// function prototypes
//------------------------------------------------------------------------------

#ifdef __cplusplus
extern "C" {
#endif

#if defined(CONFIG_INCLUDE_SDO_ASND)

tEplKernel PUBLIC EplSdoAsnduInit(tSequLayerReceiveCb fpReceiveCb_p);
tEplKernel PUBLIC EplSdoAsnduAddInstance(tSequLayerReceiveCb fpReceiveCb_p);
tEplKernel PUBLIC EplSdoAsnduDelInstance(void);
tEplKernel PUBLIC EplSdoAsnduInitCon(tSdoConHdl* pSdoConHandle_p, unsigned int uiTargetNodeId_p);
tEplKernel PUBLIC EplSdoAsnduSendData(tSdoConHdl SdoConHandle_p, tEplFrame* pSrcData_p, DWORD dwDataSize_p);
tEplKernel PUBLIC EplSdoAsnduDelCon(tSdoConHdl SdoConHandle_p);

#endif

#ifdef __cplusplus
}
#endif

#endif /* _INC_sdoasnd_H_ */
