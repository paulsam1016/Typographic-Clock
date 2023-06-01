[BackgroundMeter]
Meter       = Image
W           = #backgroundWidth#
H           = #backgroundHeight#
SolidColor  = #white#

; TITLES
[TitleStyle]
W           = #backgroundWidth#
H           = 20
X           = (#backgroundWidth# / 2)
FontSize    = 14
StringAlign = Center
StringStyle = BoldItalic
Padding     = 0,#padding#,0,#padding#
FontColor   = #black#
AntiAlias   = 1

[GeneralStyle]
Y           = 0r
SolidColor  = #green#

[ColorStyle]
Y           = 0R
SolidColor  = #green#

; SETTINGS
[LabelStyle]
W           = #labelWidth#
H           = #labelHeight#
X           = 0
Y           = 0R
FontSize    = 12
FontColor   = #black#
SolidColor  = #white#
Padding     = #padding#,#padding#,#padding#,#padding#
StringStyle = Bold
AntiAlias   = 1

[ValueStyle]
W           = #valueWidth#
H           = #valueHeight#
X           = ((#valueWidth# + #padding#) / 2)R
Y           = 0r
FontSize    = 12
StringAlign = Center
FontColor   = #black#
SolidColor  = #white#
Padding     = #padding#,#padding#,#padding#,#padding#
StringStyle = Italic
AntiAlias   = 1
