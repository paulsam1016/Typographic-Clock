[Second36]
Meter=String
MeterStyle= SecondStyle36 | SecondTextStyle
Text=36

[MeasureSecond36]
Measure=Plugin
Plugin=ActionTimer
UpdateDivider= -1
IfConditionMode= 1
DynamicVariables= 1
IfCondition   = [SecondMeasure] <> 36
IfCondition2   = [MinuteMeasure1] = 0
IfCondition3   = [MinuteMeasure1] = 1
IfCondition4   = [MinuteMeasure1] = 2
IfCondition5   = [MinuteMeasure1] = 3
IfCondition6   = [MinuteMeasure1] = 4
IfCondition7   = [MinuteMeasure1] = 5
IfCondition8   = [MinuteMeasure1] = 6
IfCondition9   = [MinuteMeasure1] = 7
IfCondition10   = [MinuteMeasure1] = 8
IfCondition11   = [MinuteMeasure1] = 9
IfCondition12   = [SecondMeasure] = 36
IfTrueAction   = [!SetOption Second36 FontColor #inactiveColor#][!SetOption Second36 FontWeight 300]
IfTrueAction2   = [!SetOption Second36 FontColor #inactiveColor#][!SetOption Second36 FontWeight 300]
IfTrueAction3   = [!SetOption Second36 FontColor #activeColor#][!SetOption Second36 FontWeight 500]
IfTrueAction4   = [!SetOption Second36 FontColor #inactiveColor#][!SetOption Second36 FontWeight 300]
IfTrueAction5   = [!SetOption Second36 FontColor #inactiveColor#][!SetOption Second36 FontWeight 300]
IfTrueAction6   = [!SetOption Second36 FontColor #inactiveColor#][!SetOption Second36 FontWeight 300]
IfTrueAction7   = [!SetOption Second36 FontColor #inactiveColor#][!SetOption Second36 FontWeight 300]
IfTrueAction8   = [!SetOption Second36 FontColor #inactiveColor#][!SetOption Second36 FontWeight 300]
IfTrueAction9   = [!SetOption Second36 FontColor #inactiveColor#][!SetOption Second36 FontWeight 300]
IfTrueAction10   = [!SetOption Second36 FontColor #inactiveColor#][!SetOption Second36 FontWeight 300]
IfTrueAction11   = [!SetOption Second36 FontColor #inactiveColor#][!SetOption Second36 FontWeight 300]
IfTrueAction12   = [!SetOption Second36 FontColor #currentColor#]