/** @file
*
*  Copyright (c) 2020, Linaro Limited. All rights reserved.
*
*  SPDX-License-Identifier: BSD-2-Clause-Patent
**/

#ifndef RISCVQEMUSERVERPLATFORMACPI_H
#define RISCVQEMUSERVERPLATFORMACPI_H


#define EFI_ACPI_SERIAL_PORT_CONSOLE_REDIRECTION_TABLE_INTERFACE_TYPE_RISCV_SBI_CONSOLE 0X0015
///
/// RISC-V PLIC/APLIC interrupt (Global System Interrupt)
///
#define EFI_ACPI_SERIAL_PORT_CONSOLE_REDIRECTION_TABLE_INTERRUPT_TYPE_PLIC_OR_APLIC  0x10

// A macro to initialise the common header part of EFI ACPI tables as defined by
// EFI_ACPI_DESCRIPTION_HEADER structure.
#define RISCVQEMUSERVERPLATFORM_ACPI_HEADER(Signature, Type, Revision) {                      \
    Signature,                                   /* UINT32  Signature */       \
    sizeof (Type),                               /* UINT32  Length */          \
    Revision,                                    /* UINT8   Revision */        \
    0,                                           /* UINT8   Checksum */        \
    { 'A', 'I', 'I' },                           /* UINT8   OemId[6] */        \
    FixedPcdGet64 (PcdAcpiDefaultOemTableId),    /* UINT64  OemTableId */      \
    FixedPcdGet32 (PcdAcpiDefaultOemRevision),   /* UINT32  OemRevision */     \
    FixedPcdGet32 (PcdAcpiDefaultCreatorId),     /* UINT32  CreatorId */       \
    FixedPcdGet32 (PcdAcpiDefaultCreatorRevision)/* UINT32  CreatorRevision */ \
  }


#endif