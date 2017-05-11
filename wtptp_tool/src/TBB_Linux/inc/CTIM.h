/******************************************************************************
 *
 *  (C)Copyright 2015 Marvell. All Rights Reserved.
 *
 *  THIS IS UNPUBLISHED PROPRIETARY SOURCE CODE OF MARVELL.
 *  The copyright notice above does not evidence any actual or intended 
 *  publication of such source code.
 *  This Module contains Proprietary Information of Marvell and should be
 *  treated as Confidential.
 *  The information in this file is provided for the exclusive use of the
 *  licensees of Marvell.
 *  Such users have the right to use, modify, and incorporate this code into
 *  products for purposes authorized by the license agreement provided they
 *  include this notice and the associated copyright notice with any such
 *  product.
 *  The information in this file is provided "AS IS" without warranty.
 *
 ******************************************************************************/
  /********************************************************************************
Marvell BSD License Option

If you received this File from Marvell, you may opt to use, redistribute and/or
modify this File under the following licensing terms.
Redistribution and use in source and binary forms, with or without modification,
are permitted provided that the following conditions are met:

	* Redistributions of source code must retain the above copyright notice,
	  this list of conditions and the following disclaimer.

	* Redistributions in binary form must reproduce the above copyright
	  notice, this list of conditions and the following disclaimer in the
	  documentation and/or other materials provided with the distribution.

	* Neither the name of Marvell nor the names of its contributors may be
	  used to endorse or promote products derived from this software without
	  specific prior written permission.

THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS "AS IS" AND
ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE IMPLIED
WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE ARE
DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT OWNER OR CONTRIBUTORS BE LIABLE FOR
ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES
(INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES;
LOSS OF USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED AND ON
ANY THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT
(INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE OF THIS
SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.

*******************************************************************************/

#ifndef __CTIM_H__
#define __CTIM_H__
#include "Tim.h"

#include <string>
#include <cstring>

using namespace std;
class CCTIM {
private:
	CTIM m_TimHeader;
public:
	CCTIM();
	~CCTIM();
	int getSize();

	void setVersionStr(string& sVersion);
	string& getVersionStr();

	void setTrusted(UINT_T bSet);
	UINT_T& getTrusted();

	void setTrustedStr(string& sTrusted);
	string& getTrustedStr();

	void setIssueDateStr(string& sIssueDate);
	string& getIssueDateStr();

	void setOEMUniqueIdStr(string& sOemUniqueId);
	string& getOEMUniqueIdStr();

	void setBootRomFlashSignatureStr(string& sBootRomFlashSignature);
	string& getBootRomFlashSignatureStr();

	void setSteppingStr(string& sSettings);
	string& getSteppingStr();

	void setWtmSaveStateFlashSignatureStr(string& sSignature);
	string& getWtmSaveStateFlashSignatureStr();

	void setWtmSaveStateFlashEntryAddressStr(string& sAddress);
	string& getWtmSaveStateFlashEntryAddressStr();

	void setWtmSaveStateBackupEntryAddressStr(string& sAddress);
	string& getWtmSaveStateBackupEntryAddressStr();

	void setWtmSaveStatePatchSignatureStr(string& sAddress);
	string& getWtmSaveStatePatchSignatureStr();

	void setWtmSaveStatePatchAddressStr(string& sAddress);
	string& getWtmSaveStatePatchAddressStr();

	void setVersion(UINT_T sVersion);
	UINT_T& getVersion();

	void setIdentifier(UINT_T Identifier);
	UINT_T& getIdentifier();

	void setIssueDate(UINT_T sIssueDate);
	UINT_T& getIssueDate();

	void setOEMUniqueId(UINT_T sOemUniqueId);
	UINT_T& getOEMUniqueId();

	void setBootRomFlashSignature(UINT_T sBootRomFlashSignature);
	UINT_T& getBootRomFlashSignature();

	void setStepping(UINT_T sSettings);
	UINT_T& getStepping();

	void setWtmSaveStateFlashSignature(UINT_T sSignature);
	UINT_T& getWtmSaveStateFlashSignature();

	void setWtmSaveStateFlashEntryAddress(UINT_T sAddress);
	UINT_T& getWtmSaveStateFlashEntryAddress();

	void setWtmSaveStateBackupEntryAddress(UINT_T sAddress);
	UINT_T& getWtmSaveStateBackupEntryAddress();

	void setWtmSaveStatePatchSignature(UINT_T sAddress);
	UINT_T& getWtmSaveStatePatchSignature();

	void setWtmSaveStatePatchAddress(UINT_T sAddress);
	UINT_T& getWtmSaveStatePatchAddress();

	void setNumImages(UINT_T numImages);
	UINT_T& getNumImages();

	void setNumKeys(UINT_T numKeys);
	UINT_T& getNumKeys();

	void setSizeOfReserved(UINT_T sizeOfReserved);
	UINT_T& getSizeOfReserved();

	CTIM& getTimHeader() {
		return m_TimHeader;
	}
	void setTimHeader(CTIM& TimHeader);
};

#endif //__CTIM_H__
