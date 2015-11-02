NDSummary.OnToolTipsLoaded("CClass:DataBuffer",{4067:"<div class=\"NDToolTip TClass LC\"><div class=\"NDClassPrototype\" id=\"NDClassPrototype4067\"><div class=\"CPEntry TClass Current\"><div class=\"CPName\">DataBuffer</div></div></div><div class=\"TTSummary\">A buffer of bytes extending from the ByteStream class that is used for holding bytes read in from the connection</div></div>",4069:"<div class=\"NDToolTip TVariable LC\"><div id=\"NDPrototype4069\" class=\"NDPrototype NoParameterForm\">ByteStream m_data</div><div class=\"TTSummary\">The underlying ByteStream that holds the data</div></div>",4070:"<div class=\"NDToolTip TVariable LC\"><div id=\"NDPrototype4070\" class=\"NDPrototype NoParameterForm\">std::size_t m_appendPosition</div><div class=\"TTSummary\">The current position to use when appending data to the buffer</div></div>",4071:"<div class=\"NDToolTip TVariable LC\"><div id=\"NDPrototype4071\" class=\"NDPrototype NoParameterForm\">std::size_t m_readPosition</div><div class=\"TTSummary\">The current position in the buffer for reading data</div></div>",4073:"<div class=\"NDToolTip TFunction LC\"><div id=\"NDPrototype4073\" class=\"NDPrototype WideForm CStyle\"><table><tr><td class=\"PBeforeParameters\"><span class=\"SHKeyword\">explicit</span> DataBuffer(</td><td class=\"PParametersParentCell\"><table class=\"PParameters\"><tr><td class=\"PType first\"><span class=\"SHKeyword\">uint32</span>&nbsp;</td><td class=\"PName last\">size</td></tr></table></td><td class=\"PAfterParameters\">)</td></tr></table></div><div class=\"TTSummary\">Constructor to create a DataBuffer object</div></div>",4074:"<div class=\"NDToolTip TFunction LC\"><div id=\"NDPrototype4074\" class=\"NDPrototype WideForm CStyle\"><table><tr><td class=\"PBeforeParameters\"><span class=\"SHKeyword\">explicit</span> DataBuffer(</td><td class=\"PParametersParentCell\"><table class=\"PParameters\"><tr><td class=\"PModifierQualifier first\"><span class=\"SHKeyword\">const</span>&nbsp;</td><td class=\"PType\">Bytes&nbsp;</td><td class=\"PNamePrefix\">&amp;</td><td class=\"PName last\">data</td></tr></table></td><td class=\"PAfterParameters\">)</td></tr></table></div><div class=\"TTSummary\">Constructor to create a DataBuffer object given existing data as Bytes</div></div>",4075:"<div class=\"NDToolTip TFunction LC\"><div id=\"NDPrototype4075\" class=\"NDPrototype WideForm CStyle\"><table><tr><td class=\"PBeforeParameters\"><span class=\"SHKeyword\">explicit</span> DataBuffer(</td><td class=\"PParametersParentCell\"><table class=\"PParameters\"><tr><td class=\"PModifierQualifier first\"><span class=\"SHKeyword\">const</span>&nbsp;</td><td class=\"PType\">ByteStream&nbsp;</td><td class=\"PNamePrefix\">&amp;</td><td class=\"PName last\">data</td></tr></table></td><td class=\"PAfterParameters\">)</td></tr></table></div><div class=\"TTSummary\">Constructor to create a DataBuffer given an existing ByteStream</div></div>",4076:"<div class=\"NDToolTip TFunction LC\"><div id=\"NDPrototype4076\" class=\"NDPrototype NoParameterForm\"><span class=\"SHKeyword\">virtual</span> ~DataBuffer()</div><div class=\"TTSummary\">Default destructor for the DataBuffer object</div></div>",4077:"<div class=\"NDToolTip TFunction LC\"><div id=\"NDPrototype4077\" class=\"NDPrototype NoParameterForm\"><span class=\"SHKeyword\">uint8</span> peekByte()</div><div class=\"TTSummary\">Gets the next byte from the buffer without moving the read position</div></div>",4078:"<div class=\"NDToolTip TFunction LC\"><div id=\"NDPrototype4078\" class=\"NDPrototype NoParameterForm\"><span class=\"SHKeyword\">int8</span> read_int8()</div><div class=\"TTSummary\">Reads the next 1-byte signed integer from the buffer</div></div>",4079:"<div class=\"NDToolTip TFunction LC\"><div id=\"NDPrototype4079\" class=\"NDPrototype NoParameterForm\"><span class=\"SHKeyword\">uint8</span> read_uint8()</div><div class=\"TTSummary\">Reads the next 1-byte unsigned integer from the buffer</div></div>",4080:"<div class=\"NDToolTip TFunction LC\"><div id=\"NDPrototype4080\" class=\"NDPrototype NoParameterForm\"><span class=\"SHKeyword\">int16</span> read_int16()</div><div class=\"TTSummary\">Reads the next 2-byte signed integer from the buffer</div></div>",4081:"<div class=\"NDToolTip TFunction LC\"><div id=\"NDPrototype4081\" class=\"NDPrototype NoParameterForm\"><span class=\"SHKeyword\">uint16</span> read_uint16()</div><div class=\"TTSummary\">Reads the next 2-byte unsigned integer from the buffer</div></div>",4082:"<div class=\"NDToolTip TFunction LC\"><div id=\"NDPrototype4082\" class=\"NDPrototype NoParameterForm\"><span class=\"SHKeyword\">uint32</span> read_uint32()</div><div class=\"TTSummary\">Reads the next 4-byte unsigned integer from the buffer</div></div>",4083:"<div class=\"NDToolTip TFunction LC\"><div id=\"NDPrototype4083\" class=\"NDPrototype NoParameterForm\"><span class=\"SHKeyword\">float</span> read_float()</div><div class=\"TTSummary\">Reads the next 4-byte float from the buffer</div></div>",4084:"<div class=\"NDToolTip TFunction LC\"><div id=\"NDPrototype4084\" class=\"NDPrototype NoParameterForm\"><span class=\"SHKeyword\">double</span> read_double()</div><div class=\"TTSummary\">Reads the next 8-byte double from the buffer</div></div>",4085:"<div class=\"NDToolTip TFunction LC\"><div id=\"NDPrototype4085\" class=\"NDPrototype WideForm CStyle\"><table><tr><td class=\"PBeforeParameters\">std::<span class=\"SHKeyword\">string</span> read_string(</td><td class=\"PParametersParentCell\"><table class=\"PParameters\"><tr><td class=\"PModifierQualifier first\">std::</td><td class=\"PType\">size_t&nbsp;</td><td class=\"PName last\">length</td></tr></table></td><td class=\"PAfterParameters\">)</td></tr></table></div><div class=\"TTSummary\">Reads a string of the specified length from the buffer</div></div>",4086:"<div class=\"NDToolTip TFunction LC\"><div id=\"NDPrototype4086\" class=\"NDPrototype NoParameterForm\">std::size_t size() <span class=\"SHKeyword\">const</span></div><div class=\"TTSummary\">Gets the amount of bytes in the DataBuffer</div></div>",4088:"<div class=\"NDToolTip TFunction LC\"><div id=\"NDPrototype4088\" class=\"NDPrototype NoParameterForm\"><span class=\"SHKeyword\">bool</span> moreToRead() <span class=\"SHKeyword\">const</span></div><div class=\"TTSummary\">Gets whether or not there are more bytes to be read in the DataBuffer</div></div>",4089:"<div class=\"NDToolTip TFunction LC\"><div id=\"NDPrototype4089\" class=\"NDPrototype NoParameterForm\"><span class=\"SHKeyword\">void</span> shiftExtraToStart()</div><div class=\"TTSummary\">Copies any unparsed data in the DataBuffer to the front of the buffer.&nbsp; Also resets the readPosition and moves the appendPosition to immediately after the data that was moved.</div></div>",4090:"<div class=\"NDToolTip TFunction LC\"><div id=\"NDPrototype4090\" class=\"NDPrototype NoParameterForm\">BufferWriter getBufferWriter()</div><div class=\"TTSummary\">Creates a BufferWriter object based on this DataBuffer.</div></div>",4091:"<div class=\"NDToolTip TFunction LC\"><div id=\"NDPrototype4091\" class=\"NDPrototype NoParameterForm\"><span class=\"SHKeyword\">void</span> resetBuffer()</div><div class=\"TTSummary\">Resets the append and read positions in the buffer back to 0.</div></div>"});