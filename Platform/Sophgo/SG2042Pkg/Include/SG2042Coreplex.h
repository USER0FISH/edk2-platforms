/** @file
  Sophgo SG2042 Coreplex library definitions.

  Copyright (c) 2023, Academy of Intelligent Innovation, Shandong Universiy, China.P.R. All rights reserved.<BR>

  SPDX-License-Identifier: BSD-2-Clause-Patent

**/
#ifndef SG2042_COREPLEX_H_
#define SG2042_COREPLEX_H_

#include <PiPei.h>

#include <SmbiosProcessorSpecificData.h>
#include <ProcessorSpecificHobData.h>

/**
  Build processor and platform information for the SG2042 platform

  @retval EFI_SUCCESS       The RISC-V SMBIOS HOBs were successfully built.
  @retval Other             The operation failed.

**/
EFI_STATUS
BuildRiscVSmbiosHobs (
  VOID
  );

#endif
