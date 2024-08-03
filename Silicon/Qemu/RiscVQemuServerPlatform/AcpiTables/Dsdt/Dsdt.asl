/** @file
*  Differentiated System Description Table Fields (DSDT)
*
*  Copyright (c) 2024, Academy of Intelligent Innovation, Shandong Universiy, China.P.R. All rights reserved.<BR>
*
*  SPDX-License-Identifier: BSD-2-Clause-Patent
*
**/

#include <IndustryStandard/RiscVQemuServerPlatformAcpi.h>

DefinitionBlock ("DsdtTable.aml", "DSDT", EFI_ACPI_6_5_DIFFERENTIATED_SYSTEM_DESCRIPTION_TABLE_REVISION, "AII", "RVSERVER",
                 FixedPcdGet32 (PcdAcpiDefaultOemRevision)) {

include ("Uart.asl")

}                