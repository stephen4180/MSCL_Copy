NDSummary.OnToolTipsLoaded("File:TimedCondition.h",{5509:"<div class=\"NDToolTip TClass LC\"><div class=\"NDClassPrototype\" id=\"NDClassPrototype5509\"><div class=\"CPEntry TClass Current\"><div class=\"CPName\">TimedCondition</div></div></div><div class=\"TTSummary\">Class that acts as a simple wrapper around a std::condition_variable.&nbsp; Used for one process waiting on a certain condition to be met or a timeout, in which case the other process is notified of the action.</div></div>",5511:"<div class=\"NDToolTip TFunction LC\"><div id=\"NDPrototype5511\" class=\"NDPrototype NoParameterForm\">TimedCondition()</div><div class=\"TTSummary\">Creates a TimedCondition object</div></div>",5513:"<div class=\"NDToolTip TVariable LC\"><div id=\"NDPrototype5513\" class=\"NDPrototype NoParameterForm\">std::condition_variable m_condition</div><div class=\"TTSummary\">The condition object that this class provides a wrapper for.</div></div>",5514:"<div class=\"NDToolTip TVariable LC\"><div id=\"NDPrototype5514\" class=\"NDPrototype NoParameterForm\">std::mutex m_mutex</div><div class=\"TTSummary\">The mutex to handle thread-safe access</div></div>",5515:"<div class=\"NDToolTip TVariable LC\"><div id=\"NDPrototype5515\" class=\"NDPrototype NoParameterForm\"><span class=\"SHKeyword\">bool</span> m_isNotified</div><div class=\"TTSummary\">Whether or not the condition has been notified</div></div>",5517:"<div class=\"NDToolTip TFunction LC\"><div id=\"NDPrototype5517\" class=\"NDPrototype WideForm CStyle\"><table><tr><td class=\"PBeforeParameters\"><span class=\"SHKeyword\">bool</span> timedWait(</td><td class=\"PParametersParentCell\"><table class=\"PParameters\"><tr><td class=\"PType first\"><span class=\"SHKeyword\">uint64</span>&nbsp;</td><td class=\"PName last\">timeout</td></tr></table></td><td class=\"PAfterParameters\">)</td></tr></table></div><div class=\"TTSummary\">Blocks until the condition is met by calling notify() or until the timeout has expired.&nbsp; Also returns true immediately if the condition has already been notified.</div></div>",5518:"<div class=\"NDToolTip TFunction LC\"><div id=\"NDPrototype5518\" class=\"NDPrototype NoParameterForm\"><span class=\"SHKeyword\">void</span> notify()</div><div class=\"TTSummary\">Unblocks the TimedCondition if it is currently blocked from calling timedWait()</div></div>"});