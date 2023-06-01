[Second06]
Meter=String
MeterStyle= SecondStyle06 | SecondTextStyle
Text=06

[MeasureSecond06]
Measure=Plugin
Plugin=ActionTimer
UpdateDivider= -1
IfConditionMode= 1
DynamicVariables= 1
IfCondition   = [SecondMeasure] <> 06
IfCondition2   = [HourMeasure1] = 0
IfCondition3   = [HourMeasure1] = 1
IfCondition4   = [HourMeasure1] = 2
IfCondition5   = [HourMeasure1] = 3
IfCondition6   = [HourMeasure1] = 4
IfCondition7   = [HourMeasure1] = 5
IfCondition8   = [HourMeasure1] = 6
IfCondition9   = [HourMeasure1] = 7
IfCondition10   = [HourMeasure1] = 8
IfCondition11   = [HourMeasure1] = 9
IfCondition12   = [SecondMeasure] = 06
IfTrueAction   = [!SetOption Second06 FontColor #inactiveColor#][!SetOption Second06 FontWeight 300]
IfTrueAction2   = [!SetOption Second06 FontColor #inactiveColor#][!SetOption Second06 FontWeight 300]
IfTrueAction3   = [!SetOption Second06 FontColor #activeColor#][!SetOption Second06 FontWeight 500]
IfTrueAction4   = [!SetOption Second06 FontColor #inactiveColor#][!SetOption Second06 FontWeight 300]
IfTrueAction5   = [!SetOption Second06 FontColor #inactiveColor#][!SetOption Second06 FontWeight 300]
IfTrueAction6   = [!SetOption Second06 FontColor #inactiveColor#][!SetOption Second06 FontWeight 300]
IfTrueAction7   = [!SetOption Second06 FontColor #inactiveColor#][!SetOption Second06 FontWeight 300]
IfTrueAction8   = [!SetOption Second06 FontColor #inactiveColor#][!SetOption Second06 FontWeight 300]
IfTrueAction9   = [!SetOption Second06 FontColor #inactiveColor#][!SetOption Second06 FontWeight 300]
IfTrueAction10   = [!SetOption Second06 FontColor #inactiveColor#][!SetOption Second06 FontWeight 300]
IfTrueAction11   = [!SetOption Second06 FontColor #inactiveColor#][!SetOption Second06 FontWeight 300]
IfTrueAction12   = [!SetOption Second06 FontColor #currentColor#]