[Second54]
Meter=String
MeterStyle= SecondStyle54 | SecondTextStyle
Text=54

[MeasureSecond54]
Measure=Plugin
Plugin=ActionTimer
UpdateDivider= -1
IfConditionMode= 1
DynamicVariables= 1
IfCondition   = [SecondMeasure] <> 54
IfCondition2   = [MinuteMeasure2] = 0
IfCondition3   = [MinuteMeasure2] = 1
IfCondition4   = [MinuteMeasure2] = 2
IfCondition5   = [MinuteMeasure2] = 3
IfCondition6   = [MinuteMeasure2] = 4
IfCondition7   = [MinuteMeasure2] = 5
IfCondition8   = [MinuteMeasure2] = 6
IfCondition9   = [MinuteMeasure2] = 7
IfCondition10   = [MinuteMeasure2] = 8
IfCondition11   = [MinuteMeasure2] = 9
IfCondition12   = [SecondMeasure] = 54
IfTrueAction   = [!SetOption Second54 FontColor #inactiveColor#][!SetOption Second54 FontWeight 300]
IfTrueAction2   = [!SetOption Second54 FontColor #activeColor#][!SetOption Second54 FontWeight 500]
IfTrueAction3   = [!SetOption Second54 FontColor #activeColor#][!SetOption Second54 FontWeight 500]
IfTrueAction4   = [!SetOption Second54 FontColor #activeColor#][!SetOption Second54 FontWeight 500]
IfTrueAction5   = [!SetOption Second54 FontColor #activeColor#][!SetOption Second54 FontWeight 500]
IfTrueAction6   = [!SetOption Second54 FontColor #inactiveColor#][!SetOption Second54 FontWeight 300]
IfTrueAction7   = [!SetOption Second54 FontColor #activeColor#][!SetOption Second54 FontWeight 500]
IfTrueAction8   = [!SetOption Second54 FontColor #activeColor#][!SetOption Second54 FontWeight 500]
IfTrueAction9   = [!SetOption Second54 FontColor #activeColor#][!SetOption Second54 FontWeight 500]
IfTrueAction10   = [!SetOption Second54 FontColor #activeColor#][!SetOption Second54 FontWeight 500]
IfTrueAction11   = [!SetOption Second54 FontColor #activeColor#][!SetOption Second54 FontWeight 500]
IfTrueAction12   = [!SetOption Second54 FontColor #currentColor#]