NDSummary.OnToolTipsLoaded("File:MicroStrain/ResponsePattern.h",{7808:"<div class=\"NDToolTip TClass LC\"><div class=\"NDClassPrototype\" id=\"NDClassPrototype7808\"><div class=\"CPEntry TClass Current\"><div class=\"CPName\">ResponsePattern</div></div></div><div class=\"TTSummary\">A pattern matching the expected response from a device command (Base Class).</div></div>",7816:"<div class=\"NDToolTip TFunction LC\"><div id=\"NDPrototype7816\" class=\"NDPrototype WideForm CStyle\"><table><tr><td class=\"PBeforeParameters\"><span class=\"SHKeyword\">explicit</span> ResponsePattern(</td><td class=\"PParametersParentCell\"><table class=\"PParameters\"><tr><td class=\"PModifierQualifier first\">std::</td><td class=\"PType\">weak_ptr&lt;ResponseCollector&gt;&nbsp;</td><td class=\"PName last\">collector</td></tr></table></td><td class=\"PAfterParameters\">)</td></tr></table></div><div class=\"TTSummary\">Creates a ResponsePattern attached to a collector.</div></div>",7817:"<div class=\"NDToolTip TFunction LC\"><div id=\"NDPrototype7817\" class=\"NDPrototype NoParameterForm\"><span class=\"SHKeyword\">virtual</span> ~ResponsePattern()</div><div class=\"TTSummary\">Destroys the ResponsePattern and unregisters this response from its ResponseCollector</div></div>",7818:"<div class=\"NDToolTip TFunction LC\"><div id=\"NDPrototype7818\" class=\"NDPrototype WideForm CStyle\"><table><tr><td class=\"PBeforeParameters\"><span class=\"SHKeyword\">void</span> setResponseCollector(</td><td class=\"PParametersParentCell\"><table class=\"PParameters\"><tr><td class=\"PModifierQualifier first\">std::</td><td class=\"PType\">weak_ptr&lt;ResponseCollector&gt;&nbsp;</td><td class=\"PName last\">collector</td></tr></table></td><td class=\"PAfterParameters\">)</td></tr></table></div><div class=\"TTSummary\">Sets the ResponseCollector for this pattern, and registers this pattern with the collector.</div></div>",7820:"<div class=\"NDToolTip TVariable LC\"><div id=\"NDPrototype7820\" class=\"NDPrototype NoParameterForm\">std::weak_ptr&lt;ResponseCollector&gt; m_collector</div><div class=\"TTSummary\">The ResponseCollector that holds this response pattern</div></div>",7821:"<div class=\"NDToolTip TVariable LC\"><div id=\"NDPrototype7821\" class=\"NDPrototype NoParameterForm\">TimedCondition m_matchCondition</div><div class=\"TTSummary\">The TimedCondition for matching the response pattern</div></div>",7822:"<div class=\"NDToolTip TVariable LC\"><div id=\"NDPrototype7822\" class=\"NDPrototype NoParameterForm\">mutable std::mutex m_parsingMutex</div><div class=\"TTSummary\">A mutex used for parsing data, which may modify the fullMatched and success flags</div></div>",7823:"<div class=\"NDToolTip TVariable LC\"><div id=\"NDPrototype7823\" class=\"NDPrototype NoParameterForm\"><span class=\"SHKeyword\">bool</span> m_fullyMatched</div><div class=\"TTSummary\">Whether or not the ResponsePattern has been fully matched.&nbsp; Some commands have multiple parts to their response. This will not be true until all required parts have been matched.</div></div>",7824:"<div class=\"NDToolTip TVariable LC\"><div id=\"NDPrototype7824\" class=\"NDPrototype NoParameterForm\"><span class=\"SHKeyword\">bool</span> m_success</div><div class=\"TTSummary\">Whether or not the command was a success (a success response was matched).</div></div>",7826:"<div class=\"NDToolTip TFunction LC\"><div id=\"NDPrototype7826\" class=\"NDPrototype WideForm CStyle\"><table><tr><td class=\"PBeforeParameters\"><span class=\"SHKeyword\">void</span> throwIfFailed(</td><td class=\"PParametersParentCell\"><table class=\"PParameters\"><tr><td class=\"PModifierQualifier first\"><span class=\"SHKeyword\">const</span> std::</td><td class=\"PType\"><span class=\"SHKeyword\">string</span>&nbsp;</td><td class=\"PNamePrefix\">&amp;</td><td class=\"PName last\">commandName</td></tr></table></td><td class=\"PAfterParameters\">) <span class=\"SHKeyword\">const</span></td></tr></table></div><div class=\"TTSummary\">Throws an Error if the command has failed (if m_success is false).&nbsp; Otherwise, no action is taken.</div></div>",7827:"<div class=\"NDToolTip TFunction LC\"><div id=\"NDPrototype7827\" class=\"NDPrototype WideForm CStyle\"><table><tr><td class=\"PBeforeParameters\"><span class=\"SHKeyword\">virtual bool</span> match(</td><td class=\"PParametersParentCell\"><table class=\"PParameters\"><tr><td class=\"PType first\">DataBuffer&nbsp;</td><td class=\"PNamePrefix\">&amp;</td><td class=\"PName last\">data</td></tr></table></td><td class=\"PAfterParameters\">)</td></tr></table></div><div class=\"TTSummary\">Checks if the bytes passed in match the response pattern from their current read position.&nbsp; If data was matched, the read position in the DataBuffer will be updated to be passed the bytes read.</div></div>",7828:"<div class=\"NDToolTip TFunction LC\"><div id=\"NDPrototype7828\" class=\"NDPrototype WideForm CStyle\"><table><tr><td class=\"PBeforeParameters\"><span class=\"SHKeyword\">virtual bool</span> match(</td><td class=\"PParametersParentCell\"><table class=\"PParameters\"><tr><td class=\"PModifierQualifier first\"><span class=\"SHKeyword\">const</span>&nbsp;</td><td class=\"PType\">WirelessPacket&nbsp;</td><td class=\"PNamePrefix\">&amp;</td><td class=\"PName last\">packet</td></tr></table></td><td class=\"PAfterParameters\">)</td></tr></table></div><div class=\"TTSummary\">Checks if the WirelessPacket passed in matches the response pattern\'s bytes</div></div>",7829:"<div class=\"NDToolTip TFunction LC\"><div id=\"NDPrototype7829\" class=\"NDPrototype WideForm CStyle\"><table><tr><td class=\"PBeforeParameters\"><span class=\"SHKeyword\">virtual bool</span> match(</td><td class=\"PParametersParentCell\"><table class=\"PParameters\"><tr><td class=\"PModifierQualifier first\"><span class=\"SHKeyword\">const</span>&nbsp;</td><td class=\"PType\">MipDataField&nbsp;</td><td class=\"PNamePrefix\">&amp;</td><td class=\"PName last\">field</td></tr></table></td><td class=\"PAfterParameters\">)</td></tr></table></div><div class=\"TTSummary\">Checks if the MipDataField passed in matches the response pattern\'s bytes</div></div>",7830:"<div class=\"NDToolTip TFunction LC\"><div id=\"NDPrototype7830\" class=\"NDPrototype WideForm CStyle\"><table><tr><td class=\"PBeforeParameters\"><span class=\"SHKeyword\">virtual bool</span> wait(</td><td class=\"PParametersParentCell\"><table class=\"PParameters\"><tr><td class=\"PType first\"><span class=\"SHKeyword\">uint64</span>&nbsp;</td><td class=\"PName last\">timeout</td></tr></table></td><td class=\"PAfterParameters\">)</td></tr></table></div><div class=\"TTSummary\">Waits for a certain amount of time for the response pattern to be matched</div></div>",7831:"<div class=\"NDToolTip TFunction LC\"><div id=\"NDPrototype7831\" class=\"NDPrototype NoParameterForm\"><span class=\"SHKeyword\">bool</span> fullyMatched() <span class=\"SHKeyword\">const</span></div><div class=\"TTSummary\">Checks whether the response pattern has been fully matched.&nbsp; Some commands have multiple parts to their response. This checks whether all responses have been satisfied.</div></div>",7832:"<div class=\"NDToolTip TFunction LC\"><div id=\"NDPrototype7832\" class=\"NDPrototype NoParameterForm\"><span class=\"SHKeyword\">bool</span> success() <span class=\"SHKeyword\">const</span></div><div class=\"TTSummary\">Gets whether or not the command was a success (a success response was matched).</div></div>"});