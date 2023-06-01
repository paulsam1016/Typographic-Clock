[Second59]
Meter=String
MeterStyle= SecondStyle59 | SecondTextStyle
Text=59

[MeasureSecond59]
Measure=Plugin
Plugin=ActionTimer
UpdateDivider= -1
IfConditionMode= 1
DynamicVariables= 1
IfCondition   = [SecondMeasure] <> 59
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
IfCondition12   = [SecondMeasure] = 59
IfTrueAction   = [!SetOption Second59 FontColor #inactiveColor#][!SetOption Second59 FontWeight 300]
IfTrueAction2   = [!SetOption Second59 FontColor #activeColor#][!SetOption Second59 FontWeight 500]
IfTrueAction3   = [!SetOption Second59 FontColor #activeColor#][!SetOption Second59 FontWeight 500]
IfTrueAction4   = [!SetOption Second59 FontColor #activeColor#][!SetOption Second59 FontWeight 500]
IfTrueAction5   = [!SetOption Second59 FontColor #activeColor#][!SetOption Second59 FontWeight 500]
IfTrueAction6   = [!SetOption Second59 FontColor #activeColor#][!SetOption Second59 FontWeight 500]
IfTrueAction7   = [!SetOption Second59 FontColor #activeColor#][!SetOption Second59 FontWeight 500]
IfTrueAction8   = [!SetOption Second59 FontColor #activeColor#][!SetOption Second59 FontWeight 500]
IfTrueAction9   = [!SetOption Second59 FontColor #inactiveColor#][!SetOption Second59 FontWeight 300]
IfTrueAction10   = [!SetOption Second59 FontColor #activeColor#][!SetOption Second59 FontWeight 500]
IfTrueAction11   = [!SetOption Second59 FontColor #activeColor#][!SetOption Second59 FontWeight 500]
IfTrueAction12   = [!SetOption Second59 FontColor #currentColor#]