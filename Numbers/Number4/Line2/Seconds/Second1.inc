[Second46]
Meter=String
MeterStyle= SecondStyle46 | SecondTextStyle
Text=46

[MeasureSecond46]
Measure=Plugin
Plugin=ActionTimer
UpdateDivider= -1
IfConditionMode= 1
DynamicVariables= 1
IfCondition   = [SecondMeasure] <> 46
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
IfCondition12   = [SecondMeasure] = 46
IfTrueAction   = [!SetOption Second46 FontColor #inactiveColor#][!SetOption Second46 FontWeight 300]
IfTrueAction2   = [!SetOption Second46 FontColor #activeColor#][!SetOption Second46 FontWeight 500]
IfTrueAction3   = [!SetOption Second46 FontColor #inactiveColor#][!SetOption Second46 FontWeight 300]
IfTrueAction4   = [!SetOption Second46 FontColor #inactiveColor#][!SetOption Second46 FontWeight 300]
IfTrueAction5   = [!SetOption Second46 FontColor #inactiveColor#][!SetOption Second46 FontWeight 300]
IfTrueAction6   = [!SetOption Second46 FontColor #activeColor#][!SetOption Second46 FontWeight 500]
IfTrueAction7   = [!SetOption Second46 FontColor #activeColor#][!SetOption Second46 FontWeight 500]
IfTrueAction8   = [!SetOption Second46 FontColor #activeColor#][!SetOption Second46 FontWeight 500]
IfTrueAction9   = [!SetOption Second46 FontColor #inactiveColor#][!SetOption Second46 FontWeight 300]
IfTrueAction10   = [!SetOption Second46 FontColor #activeColor#][!SetOption Second46 FontWeight 500]
IfTrueAction11   = [!SetOption Second46 FontColor #activeColor#][!SetOption Second46 FontWeight 500]
IfTrueAction12   = [!SetOption Second46 FontColor #currentColor#]