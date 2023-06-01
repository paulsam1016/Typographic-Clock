[Second56]
Meter=String
MeterStyle= SecondStyle56 | SecondTextStyle
Text=56

[MeasureSecond56]
Measure=Plugin
Plugin=ActionTimer
UpdateDivider= -1
IfConditionMode= 1
DynamicVariables= 1
IfCondition   = [SecondMeasure] <> 56
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
IfCondition12   = [SecondMeasure] = 56
IfTrueAction   = [!SetOption Second56 FontColor #inactiveColor#][!SetOption Second56 FontWeight 300]
IfTrueAction2   = [!SetOption Second56 FontColor #activeColor#][!SetOption Second56 FontWeight 500]
IfTrueAction3   = [!SetOption Second56 FontColor #inactiveColor#][!SetOption Second56 FontWeight 300]
IfTrueAction4   = [!SetOption Second56 FontColor #activeColor#][!SetOption Second56 FontWeight 500]
IfTrueAction5   = [!SetOption Second56 FontColor #activeColor#][!SetOption Second56 FontWeight 500]
IfTrueAction6   = [!SetOption Second56 FontColor #activeColor#][!SetOption Second56 FontWeight 500]
IfTrueAction7   = [!SetOption Second56 FontColor #inactiveColor#][!SetOption Second56 FontWeight 300]
IfTrueAction8   = [!SetOption Second56 FontColor #inactiveColor#][!SetOption Second56 FontWeight 300]
IfTrueAction9   = [!SetOption Second56 FontColor #activeColor#][!SetOption Second56 FontWeight 500]
IfTrueAction10   = [!SetOption Second56 FontColor #activeColor#][!SetOption Second56 FontWeight 500]
IfTrueAction11   = [!SetOption Second56 FontColor #activeColor#][!SetOption Second56 FontWeight 500]
IfTrueAction12   = [!SetOption Second56 FontColor #currentColor#]