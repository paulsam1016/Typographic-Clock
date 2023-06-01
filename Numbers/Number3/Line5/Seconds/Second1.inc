[Second34]
Meter=String
MeterStyle= SecondStyle34 | SecondTextStyle
Text=34

[MeasureSecond34]
Measure=Plugin
Plugin=ActionTimer
UpdateDivider= -1
IfConditionMode= 1
DynamicVariables= 1
IfCondition   = [SecondMeasure] <> 34
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
IfCondition12   = [SecondMeasure] = 34
IfTrueAction   = [!SetOption Second34 FontColor #inactiveColor#][!SetOption Second34 FontWeight 300]
IfTrueAction2   = [!SetOption Second34 FontColor #activeColor#][!SetOption Second34 FontWeight 500]
IfTrueAction3   = [!SetOption Second34 FontColor #activeColor#][!SetOption Second34 FontWeight 500]
IfTrueAction4   = [!SetOption Second34 FontColor #activeColor#][!SetOption Second34 FontWeight 500]
IfTrueAction5   = [!SetOption Second34 FontColor #activeColor#][!SetOption Second34 FontWeight 500]
IfTrueAction6   = [!SetOption Second34 FontColor #inactiveColor#][!SetOption Second34 FontWeight 300]
IfTrueAction7   = [!SetOption Second34 FontColor #activeColor#][!SetOption Second34 FontWeight 500]
IfTrueAction8   = [!SetOption Second34 FontColor #activeColor#][!SetOption Second34 FontWeight 500]
IfTrueAction9   = [!SetOption Second34 FontColor #inactiveColor#][!SetOption Second34 FontWeight 300]
IfTrueAction10   = [!SetOption Second34 FontColor #activeColor#][!SetOption Second34 FontWeight 500]
IfTrueAction11   = [!SetOption Second34 FontColor #activeColor#][!SetOption Second34 FontWeight 500]
IfTrueAction12   = [!SetOption Second34 FontColor #currentColor#]