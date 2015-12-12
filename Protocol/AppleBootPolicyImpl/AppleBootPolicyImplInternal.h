//
// Copyright (C) 2005 - 2015 Apple Inc. All rights reserved.
//
// This program and the accompanying materials have not been licensed.
// Neither is its usage, its redistribution, in source or binary form,
// licensed, nor implicitely or explicitely permitted, except when
// required by applicable law.
//
// Unless required by applicable law or agreed to in writing, software
// distributed is distributed on an "AS IS" BASIS, WITHOUT WARRANTIES
// OR CONDITIONS OF ANY KIND, either express or implied.
//

///
/// @file      Protocol/AppleBootPolicyImpl/AppleBootPolicyImplInternal.h
///
///            
///
/// @author    Download-Fritz
/// @date      11/12/2015: Initial version
/// @copyright Copyright (C) 2005 - 2015 Apple Inc. All rights reserved.
///

#ifndef __APPLE_BOOT_POLICY_IMPL_INTERNAL_H__
#define __APPLE_BOOT_POLICY_IMPL_INTERNAL_H__

#include <Protocol/AppleBootPolicyImpl.h>

// BootPolicyFileExists
/// Checks whether the given file exists or not.
///
/// @param[in] Root      The volume's opened root.
/// @param[in] FileName  The path of the file to check.
///
/// @return Returned is whether the specified file exists or not.
BOOLEAN
BootPolicyFileExists (
  IN EFI_FILE_HANDLE  Root,
  IN CHAR16           *FileName
  );

#endif // ifndef __APPLE_BOOT_POLICY_IMPL_INTERNAL_H__
