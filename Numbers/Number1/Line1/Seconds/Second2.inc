[Second05]
Meter=String
MeterStyle= SecondStyle05 | SecondTextStyle
Text=05

[MeasureSecond05]
Measure=Plugin
Plugin=ActionTimer
UpdateDivider= -1
IfConditionMode= 1
DynamicVariables= 1
IfCondition   = [SecondMeasure] <> 05
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
IfCondition12   = [SecondMeasure] = 05
IfTrueAction   = [!SetOption Second05 FontColor #inactiveColor#][!SetOption Second05 FontWeight 300]
IfTrueAction2   = [!SetOption Second05 FontColor #activeColor#][!SetOption Second05 FontWeight 500]
IfTrueAction3   = [!SetOption Second05 FontColor #activeColor#][!SetOption Second05 FontWeight 500]
IfTrueAction4   = [!SetOption Second05 FontColor #activeColor#][!SetOption Second05 FontWeight 500]
IfTrueAction5   = [!SetOption Second05 FontColor #activeColor#][!SetOption Second05 FontWeight 500]
IfTrueAction6   = [!SetOption Second05 FontColor #inactiveColor#][!SetOption Second05 FontWeight 300]
IfTrueAction7   = [!SetOption Second05 FontColor #activeColor#][!SetOption Second05 FontWeight 500]
IfTrueAction8   = [!SetOption Second05 FontColor #activeColor#][!SetOption Second05 FontWeight 500]
IfTrueAction9   = [!SetOption Second05 FontColor #activeColor#][!SetOption Second05 FontWeight 500]
IfTrueAction10   = [!SetOption Second05 FontColor #activeColor#][!SetOption Second05 FontWeight 500]
IfTrueAction11   = [!SetOption Second05 FontColor #activeColor#][!SetOption Second05 FontWeight 500]
IfTrueAction12   = [!SetOption Second05 FontColor #currentColor#]