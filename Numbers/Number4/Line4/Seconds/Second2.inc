[Second53]
Meter=String
MeterStyle= SecondStyle53 | SecondTextStyle
Text=53

[MeasureSecond53]
Measure=Plugin
Plugin=ActionTimer
UpdateDivider= -1
IfConditionMode= 1
DynamicVariables= 1
IfCondition   = [SecondMeasure] <> 53
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
IfCondition12   = [SecondMeasure] = 53
IfTrueAction   = [!SetOption Second53 FontColor #inactiveColor#][!SetOption Second53 FontWeight 300]
IfTrueAction2   = [!SetOption Second53 FontColor #inactiveColor#][!SetOption Second53 FontWeight 300]
IfTrueAction3   = [!SetOption Second53 FontColor #activeColor#][!SetOption Second53 FontWeight 500]
IfTrueAction4   = [!SetOption Second53 FontColor #inactiveColor#][!SetOption Second53 FontWeight 300]
IfTrueAction5   = [!SetOption Second53 FontColor #inactiveColor#][!SetOption Second53 FontWeight 300]
IfTrueAction6   = [!SetOption Second53 FontColor #inactiveColor#][!SetOption Second53 FontWeight 300]
IfTrueAction7   = [!SetOption Second53 FontColor #inactiveColor#][!SetOption Second53 FontWeight 300]
IfTrueAction8   = [!SetOption Second53 FontColor #inactiveColor#][!SetOption Second53 FontWeight 300]
IfTrueAction9   = [!SetOption Second53 FontColor #activeColor#][!SetOption Second53 FontWeight 500]
IfTrueAction10   = [!SetOption Second53 FontColor #inactiveColor#][!SetOption Second53 FontWeight 300]
IfTrueAction11   = [!SetOption Second53 FontColor #inactiveColor#][!SetOption Second53 FontWeight 300]
IfTrueAction12   = [!SetOption Second53 FontColor #currentColor#]