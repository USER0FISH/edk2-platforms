/** @file
*  Differentiated System Description Table Fields (DSDT)
*
*  Copyright (c) 2024, Academy of Intelligent Innovation, Shandong Universiy, China.P.R. All rights reserved.<BR>
*
*  SPDX-License-Identifier: BSD-2-Clause-Patent
*
**/

Scope(_S0)
{
    //serial
    Device (COM0) {
    Name (_HID, "ns16550a")        // _HID: Hardware ID
    Name (_UID, Zero)
    Name (_CRS, ResourceTemplate () {
        Memory32Fixed (ReadWrite,
            FixedPcdGet32 (PcdSerialRegisterBase),
            0x00001000)
        Interrupt (ResourceConsumer, Level, ActiveHigh, Exclusive) { 11 }
    })
    Method (_STA) {
        Return (0xF)
    }
    }
}

