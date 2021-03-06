/*
 *  Author: bwilliams
 *  Created: April 6, 2012
 *
 *  Copyright (C) 2012-2016 VMware, Inc.  All rights reserved. -- VMware Confidential
 *
 *  This code was generated by the script "build/dev/codeGen/genCppXml". Please
 *  speak to Brian W. before modifying it by hand.
 *
 */

#ifndef ProviderInfraXmlRoots_h_
#define ProviderInfraXmlRoots_h_


#include "Doc/ProviderInfraDoc/CProviderRegDoc.h"

#include "Doc/DocXml/ProviderInfraXml/ProviderInfraXmlLink.h"
#include "Doc/ProviderInfraDoc/CSchemaSummaryDoc.h"

namespace Caf {

	namespace XmlRoots {

		/// Saves the ProviderRegDoc to a string.
		std::string PROVIDERINFRAXML_LINKAGE saveProviderRegToString(
			const SmartPtrCProviderRegDoc providerRegDoc);

		/// Parses the SchemaSummaryDoc from the string.
		SmartPtrCProviderRegDoc PROVIDERINFRAXML_LINKAGE parseProviderRegFromString(
			const std::string xml);

		/// Saves the ProviderRegDoc to a file.
		void PROVIDERINFRAXML_LINKAGE saveProviderRegToFile(
			const SmartPtrCProviderRegDoc providerRegDoc,
			const std::string filePath);

		/// Parses the SchemaSummaryDoc from the file.
		SmartPtrCProviderRegDoc PROVIDERINFRAXML_LINKAGE parseProviderRegFromFile(
			const std::string filePath);

		/// Saves the SchemaSummaryDoc to a string.
		std::string PROVIDERINFRAXML_LINKAGE saveSchemaSummaryToString(
			const SmartPtrCSchemaSummaryDoc schemaSummaryDoc);

		/// Parses the SchemaSummaryDoc from the string.
		SmartPtrCSchemaSummaryDoc PROVIDERINFRAXML_LINKAGE parseSchemaSummaryFromString(
			const std::string xml);

		/// Saves the SchemaSummaryDoc to a file.
		void PROVIDERINFRAXML_LINKAGE saveSchemaSummaryToFile(
			const SmartPtrCSchemaSummaryDoc schemaSummaryDoc,
			const std::string filePath);

		/// Parses the SchemaSummaryDoc from the file.
		SmartPtrCSchemaSummaryDoc PROVIDERINFRAXML_LINKAGE parseSchemaSummaryFromFile(
			const std::string filePath);
	}
}

#endif /* ProviderInfraXmlRoots_h_ */
