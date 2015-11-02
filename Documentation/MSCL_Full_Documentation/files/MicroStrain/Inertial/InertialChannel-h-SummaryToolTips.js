NDSummary.OnToolTipsLoaded("File:MicroStrain/Inertial/InertialChannel.h",{1211:"<div class=\"NDToolTip TClass LC\"><div class=\"NDClassPrototype\" id=\"NDClassPrototype1211\"><div class=\"CPEntry TClass Current\"><div class=\"CPName\">InertialChannel</div></div></div><div class=\"TTSummary\">Represents a single &quot;channel&quot; or data descriptors that can make up an Inertial Device\'s message format</div></div>",1213:"<div class=\"NDToolTip TFunction LC\"><div id=\"NDPrototype1213\" class=\"NDPrototype WideForm CStyle\"><table><tr><td class=\"PBeforeParameters\">InertialChannel(</td><td class=\"PParametersParentCell\"><table class=\"PParameters\"><tr><td class=\"PModifierQualifier first\">InertialTypes::</td><td class=\"PType\">ChannelField&nbsp;</td><td></td><td class=\"PName last\">channelField,</td></tr><tr><td class=\"PModifierQualifier first\"><span class=\"SHKeyword\">const</span>&nbsp;</td><td class=\"PType\">SampleRate&nbsp;</td><td class=\"PNamePrefix\">&amp;</td><td class=\"PName last\">sampleRate</td></tr></table></td><td class=\"PAfterParameters\">)</td></tr></table></div><div class=\"TTSummary\">Creates an InertialChannel object.</div></div>",1215:"<div class=\"NDToolTip TVariable LC\"><div id=\"NDPrototype1215\" class=\"NDPrototype NoParameterForm\">InertialTypes::ChannelField m_channelField</div><div class=\"TTSummary\">The InertialTypes::ChannelField for this channel.</div></div>",1216:"<div class=\"NDToolTip TVariable LC\"><div id=\"NDPrototype1216\" class=\"NDPrototype NoParameterForm\">SampleRate m_sampleRate</div><div class=\"TTSummary\">The SampleRate of the inertial channel.</div></div>",1218:"<div class=\"NDToolTip TFunction LC\"><div id=\"NDPrototype1218\" class=\"NDPrototype NoParameterForm\">InertialTypes::ChannelField channelField() <span class=\"SHKeyword\">const</span></div><div class=\"TTSummary\">Gets the InertialTypes::ChannelField for this channel.</div></div>",1219:"<div class=\"NDToolTip TFunction LC\"><div id=\"NDPrototype1219\" class=\"NDPrototype NoParameterForm\"><span class=\"SHKeyword\">const</span> SampleRate&amp; sampleRate() <span class=\"SHKeyword\">const</span></div><div class=\"TTSummary\">Gets the SampleRate set for this channel.</div></div>",1220:"<div class=\"NDToolTip TFunction LC\"><div id=\"NDPrototype1220\" class=\"NDPrototype WideForm CStyle\"><table><tr><td class=\"PBeforeParameters\"><span class=\"SHKeyword\">uint16</span> rateDecimation(</td><td class=\"PParametersParentCell\"><table class=\"PParameters\"><tr><td class=\"PType first\"><span class=\"SHKeyword\">uint16</span>&nbsp;</td><td class=\"PName last\">sampleRateBase</td></tr></table></td><td class=\"PAfterParameters\">) <span class=\"SHKeyword\">const</span></td></tr></table></div><div class=\"TTSummary\">Gets the rate decimation that is used to determine the sample rate (sample rate = sampleratebase / rate decimation).</div></div>",1221:"<div class=\"NDToolTip TFunction LC\"><div id=\"NDPrototype1221\" class=\"NDPrototype WideForm CStyle\"><table><tr><td class=\"PBeforeParameters\"><span class=\"SHKeyword\">const</span> SampleRate&amp; validateSampleRate(</td><td class=\"PParametersParentCell\"><table class=\"PParameters\"><tr><td class=\"PType first\"><span class=\"SHKeyword\">uint16</span>&nbsp;</td><td class=\"PName last\">sampleRateBase</td></tr></table></td><td class=\"PAfterParameters\">)</td></tr></table></div><div class=\"TTSummary\">Validates the sample rate of the InertialChannel object, updating it to a supported rate if necessary.&nbsp; This function will be called before an InertialChannel is set on the InertialNode.&nbsp; You can call it yourself if you want to update the channel yourself to determine the true SampleRate that will be applied.</div></div>",1222:"<div class=\"NDToolTip TFunction LC\"><div id=\"NDPrototype1222\" class=\"NDPrototype WideForm CStyle\"><table><tr><td class=\"PBeforeParameters\"><span class=\"SHKeyword\">const</span> SampleRate&amp; validateSampleRate(</td><td class=\"PParametersParentCell\"><table class=\"PParameters\"><tr><td class=\"PType first\">InertialNode&nbsp;</td><td class=\"PNamePrefix\">&amp;</td><td class=\"PName last\">node</td></tr></table></td><td class=\"PAfterParameters\">)</td></tr></table></div><div class=\"TTSummary\">Validates the sample rate of the InertialChannel object, updating it to a supported rate if necessary.&nbsp; This function will be called before an InertialChannel is set on the InertialNode.&nbsp; You can call it yourself if you want to update the channel yourself to determine the true SampleRate that will be applied.</div></div>",1223:"<div class=\"NDToolTip TFunction LC\"><div id=\"NDPrototype1223\" class=\"NDPrototype NoParameterForm\"><span class=\"SHKeyword\">uint8</span> fieldDescriptor() <span class=\"SHKeyword\">const</span></div><div class=\"TTSummary\">Gets the field descriptor byte of the Inertial Channel.</div></div>",1224:"<div class=\"NDToolTip TFunction LC\"><div id=\"NDPrototype1224\" class=\"NDPrototype NoParameterForm\"><span class=\"SHKeyword\">uint8</span> descriptorSet() <span class=\"SHKeyword\">const</span></div><div class=\"TTSummary\">Gets the descriptor set byte of the Inertial Channel.</div></div>",1226:"<div class=\"NDToolTip TType LC\"><div class=\"TTSummary\">typedef for a vector of InertialChannel objects</div></div>"});