NDSummary.OnToolTipsLoaded("File:MicroStrain/Wireless/Commands/BaseStation_WriteEeprom_v2.h",{1675:"<div class=\"NDToolTip TClass LC\"><div class=\"NDClassPrototype\" id=\"NDClassPrototype1675\"><div class=\"CPEntry TClass Current\"><div class=\"CPName\">BaseStation_WriteEeprom_v2</div></div></div><div class=\"TTSummary\">Contains logic for the base station write eeprom command (v2)</div></div>",1677:"<div class=\"NDToolTip TFunction LC\"><div id=\"NDPrototype1677\" class=\"NDPrototype WideForm CStyle\"><table><tr><td class=\"PBeforeParameters\"><span class=\"SHKeyword\">static</span> ByteStream buildCommand(</td><td class=\"PParametersParentCell\"><table class=\"PParameters\"><tr><td class=\"PType first\"><span class=\"SHKeyword\">uint16</span>&nbsp;</td><td class=\"PName last\">eepromAddress,</td></tr><tr><td class=\"PType first\"><span class=\"SHKeyword\">uint16</span>&nbsp;</td><td class=\"PName last\">valueToWrite</td></tr></table></td><td class=\"PAfterParameters\">)</td></tr></table></div><div class=\"TTSummary\">Builds the eeprom write command packet</div></div>",1678:"<div class=\"NDToolTip TClass LC\"><div class=\"NDClassPrototype\" id=\"NDClassPrototype1678\"><div class=\"CPEntry TClass Current\"><div class=\"CPName\">Response</div></div></div><div class=\"TTSummary\">Handles the response to the base station write eeprom command</div></div>",1680:"<div class=\"NDToolTip TFunction LC\"><div id=\"NDPrototype1680\" class=\"NDPrototype WideForm CStyle\"><table><tr><td class=\"PBeforeParameters\">Response(</td><td class=\"PParametersParentCell\"><table class=\"PParameters\"><tr><td class=\"first\"></td><td class=\"PType\"><span class=\"SHKeyword\">uint16</span>&nbsp;</td><td class=\"PName last\">valueToWrite,</td></tr><tr><td class=\"first\"></td><td class=\"PType\"><span class=\"SHKeyword\">uint16</span>&nbsp;</td><td class=\"PName last\">eepromAddress,</td></tr><tr><td class=\"PModifierQualifier first\">std::</td><td class=\"PType\">weak_ptr&lt;ResponseCollector&gt;&nbsp;</td><td class=\"PName last\">collector</td></tr></table></td><td class=\"PAfterParameters\">)</td></tr></table></div><div class=\"TTSummary\">Creates a write eeprom Response object</div></div>",1682:"<div class=\"NDToolTip TVariable LC\"><div id=\"NDPrototype1682\" class=\"NDPrototype NoParameterForm\"><span class=\"SHKeyword\">uint16</span> m_valueWritten</div><div class=\"TTSummary\">The value that is expected to be written to eeprom from the associated command.</div></div>",1683:"<div class=\"NDToolTip TVariable LC\"><div id=\"NDPrototype1683\" class=\"NDPrototype NoParameterForm\"><span class=\"SHKeyword\">uint16</span> m_eepromAddress</div><div class=\"TTSummary\">The eeprom address to match in the response.</div></div>",1684:"<div class=\"NDToolTip TVariable LC\"><div id=\"NDPrototype1684\" class=\"NDPrototype NoParameterForm\">WirelessPacket::ResponseErrorCode m_errorCode</div><div class=\"TTSummary\">The WirelessPacket::ResponseErrorCode from the response.</div></div>",1686:"<div class=\"NDToolTip TFunction LC\"><div id=\"NDPrototype1686\" class=\"NDPrototype WideForm CStyle\"><table><tr><td class=\"PBeforeParameters\"><span class=\"SHKeyword\">virtual bool</span> match(</td><td class=\"PParametersParentCell\"><table class=\"PParameters\"><tr><td class=\"PModifierQualifier first\"><span class=\"SHKeyword\">const</span>&nbsp;</td><td class=\"PType\">WirelessPacket&nbsp;</td><td class=\"PNamePrefix\">&amp;</td><td class=\"PName last\">packet</td></tr></table></td><td class=\"PAfterParameters\">) <span class=\"SHKeyword\">override</span></td></tr></table></div><div class=\"TTSummary\">Checks if the packet passed in matches either the success or failure response.</div></div>",1687:"<div class=\"NDToolTip TFunction LC\"><div id=\"NDPrototype1687\" class=\"NDPrototype NoParameterForm\">WirelessPacket::ResponseErrorCode errorCode() <span class=\"SHKeyword\">const</span></div><div class=\"TTSummary\">Gets the WirelessPacket::ResponseErrorCode from the response packet.</div></div>",1688:"<div class=\"NDToolTip TFunction LC\"><div id=\"NDPrototype1688\" class=\"NDPrototype WideForm CStyle\"><table><tr><td class=\"PBeforeParameters\"><span class=\"SHKeyword\">bool</span> matchSuccessResponse(</td><td class=\"PParametersParentCell\"><table class=\"PParameters\"><tr><td class=\"PModifierQualifier first\"><span class=\"SHKeyword\">const</span>&nbsp;</td><td class=\"PType\">WirelessPacket&nbsp;</td><td class=\"PNamePrefix\">&amp;</td><td class=\"PName last\">packet</td></tr></table></td><td class=\"PAfterParameters\">)</td></tr></table></div><div class=\"TTSummary\">Checks if the packet passed in matches the success response.</div></div>",1689:"<div class=\"NDToolTip TFunction LC\"><div id=\"NDPrototype1689\" class=\"NDPrototype WideForm CStyle\"><table><tr><td class=\"PBeforeParameters\"><span class=\"SHKeyword\">bool</span> matchFailResponse(</td><td class=\"PParametersParentCell\"><table class=\"PParameters\"><tr><td class=\"PModifierQualifier first\"><span class=\"SHKeyword\">const</span>&nbsp;</td><td class=\"PType\">WirelessPacket&nbsp;</td><td class=\"PNamePrefix\">&amp;</td><td class=\"PName last\">packet</td></tr></table></td><td class=\"PAfterParameters\">)</td></tr></table></div><div class=\"TTSummary\">Checks if the packet passed in matches the failure response.</div></div>"});