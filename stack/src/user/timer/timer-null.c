/****************************************************************************

  (c) SYSTEC electronic GmbH, D-07973 Greiz, August-Bebel-Str. 29
      www.systec-electronic.com

  Project:      openPOWERLINK

  Description:  source file for Epl Userspace-Timermodule NULL-Implementation

  License:

    Redistribution and use in source and binary forms, with or without
    modification, are permitted provided that the following conditions
    are met:

    1. Redistributions of source code must retain the above copyright
       notice, this list of conditions and the following disclaimer.

    2. Redistributions in binary form must reproduce the above copyright
       notice, this list of conditions and the following disclaimer in the
       documentation and/or other materials provided with the distribution.

    3. Neither the name of SYSTEC electronic GmbH nor the names of its
       contributors may be used to endorse or promote products derived
       from this software without prior written permission. For written
       permission, please contact info@systec-electronic.com.

    THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS
    "AS IS" AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT
    LIMITED TO, THE IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS
    FOR A PARTICULAR PURPOSE ARE DISCLAIMED. IN NO EVENT SHALL THE
    COPYRIGHT HOLDERS OR CONTRIBUTORS BE LIABLE FOR ANY DIRECT, INDIRECT,
    INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES (INCLUDING,
    BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES;
    LOSS OF USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER
    CAUSED AND ON ANY THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT
    LIABILITY, OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN
    ANY WAY OUT OF THE USE OF THIS SOFTWARE, EVEN IF ADVISED OF THE
    POSSIBILITY OF SUCH DAMAGE.

    Severability Clause:

        If a provision of this License is or becomes illegal, invalid or
        unenforceable in any jurisdiction, that shall not affect:
        1. the validity or enforceability in that jurisdiction of any other
           provision of this License; or
        2. the validity or enforceability in other jurisdictions of that or
           any other provision of this License.

  -------------------------------------------------------------------------

                $RCSfile$

                $Author$

                $Revision$  $Date$

                $State$

                Build Environment:
                KEIL uVision 2

  -------------------------------------------------------------------------

  Revision History:

  2006/07/06 k.t.:   start of the implementation

****************************************************************************/

#include "user/timeru.h"

/***************************************************************************/
/*                                                                         */
/*                                                                         */
/*          G L O B A L   D E F I N I T I O N S                            */
/*                                                                         */
/*                                                                         */
/***************************************************************************/

//---------------------------------------------------------------------------
// const defines
//---------------------------------------------------------------------------

//---------------------------------------------------------------------------
// local types
//---------------------------------------------------------------------------

//---------------------------------------------------------------------------
// module global vars
//---------------------------------------------------------------------------

//---------------------------------------------------------------------------
// local function prototypes
//---------------------------------------------------------------------------

/***************************************************************************/
/*                                                                         */
/*                                                                         */
/*          C L A S S  <Epl Userspace-Timermodule NULL-Implementation>     */
/*                                                                         */
/*                                                                         */
/***************************************************************************/
//
// Description: Epl Userspace-Timermodule NULL-Implementation
//
//
/***************************************************************************/

//=========================================================================//
//                                                                         //
//          P U B L I C   F U N C T I O N S                                //
//                                                                         //
//=========================================================================//

//---------------------------------------------------------------------------
//
// Function:    timeru_init
//
// Description: function init first instance
//
//
//
// Parameters:
//
//
// Returns:     tEplKernel  = errorcode
//
//
// State:
//
//---------------------------------------------------------------------------
tEplKernel timeru_init(void)
{
tEplKernel  Ret;

    Ret = timeru_addInstance();

return Ret;
}

//---------------------------------------------------------------------------
//
// Function:    timeru_addInstance
//
// Description: function init additional instance
//
//
//
// Parameters:
//
//
// Returns:     tEplKernel  = errorcode
//
//
// State:
//
//---------------------------------------------------------------------------
tEplKernel timeru_addInstance(void)
{
tEplKernel Ret;

    Ret = kEplSuccessful;

return Ret;
}

//---------------------------------------------------------------------------
//
// Function:    timeru_delInstance
//
// Description: function delte instance
//              -> under Win32 nothing to do
//              -> no instnace table needed
//
//
//
// Parameters:
//
//
// Returns:     tEplKernel  = errorcode
//
//
// State:
//
//---------------------------------------------------------------------------
tEplKernel timeru_delInstance(void)
{
tEplKernel  Ret;

    Ret = kEplSuccessful;

    return Ret;
}


//---------------------------------------------------------------------------
//
// Function:    timeru_process
//
// Description: This function is called repeatedly from within the main
//              loop of the application. It checks whether the first timer
//              entry has been elapsed.
//
// Parameters:  none
//
// Returns:     tEplKernel  = errorcode
//
// State:
//
//---------------------------------------------------------------------------

tEplKernel timeru_process(void)
{
    return kEplSuccessful;
}


//---------------------------------------------------------------------------
//
// Function:    timeru_setTimer
//
// Description: function create a timer and return a handle to the pointer
//
//
//
// Parameters:  pTimerHdl_p = pointer to a buffer to fill in the handle
//              timeInMs_p    = time for timer in ms
//              argument_p  = argument for timer
//
//
// Returns:     tEplKernel  = errorcode
//
//
// State:
//
//---------------------------------------------------------------------------
tEplKernel timeru_setTimer(tEplTimerHdl* pTimerHdl_p, ULONG timeInMs_p, tEplTimerArg argument_p)
{
tEplKernel          Ret;


    Ret = kEplSuccessful;

    // check handle
    if(pTimerHdl_p == NULL)
    {
        Ret = kEplTimerInvalidHandle;
        goto Exit;
    }

Exit:
    return Ret;
}


 //---------------------------------------------------------------------------
//
// Function:    timeru_modifyTimer
//
// Description: function change a timer and return a handle to the pointer
//
//
//
// Parameters:  pTimerHdl_p = pointer to a buffer to fill in the handle
//              timeInMs_p    = time for timer in ms
//              argument_p  = argument for timer
//
//
// Returns:     tEplKernel  = errorcode
//
//
// State:
//
//---------------------------------------------------------------------------
tEplKernel timeru_modifyTimer(tEplTimerHdl* pTimerHdl_p, unsigned long timeInMs_p, tEplTimerArg argument_p)
{
tEplKernel          Ret;

    Ret = kEplSuccessful;

    // check parameter
    if(pTimerHdl_p == NULL)
    {
        Ret = kEplTimerInvalidHandle;
        goto Exit;
    }


Exit:
    return Ret;
}

 //---------------------------------------------------------------------------
//
// Function:    timeru_deleteTimer
//
// Description: function delte a timer
//
//
//
// Parameters:  pTimerHdl_p = pointer to a buffer to fill in the handle
//
//
// Returns:     tEplKernel  = errorcode
//
//
// State:
//
//---------------------------------------------------------------------------
tEplKernel timeru_deleteTimer(tEplTimerHdl* pTimerHdl_p)
{
tEplKernel  Ret;

    Ret = kEplSuccessful;

    // check parameter
    if(pTimerHdl_p == NULL)
    {
        Ret = kEplTimerInvalidHandle;
        goto Exit;
    }

    // set handle invalide
    *pTimerHdl_p = 0;


Exit:
    return Ret;

}

//=========================================================================//
//                                                                         //
//          P R I V A T E   F U N C T I O N S                              //
//                                                                         //
//=========================================================================//



// EOF

