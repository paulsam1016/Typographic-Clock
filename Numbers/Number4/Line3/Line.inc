[IncludeLineStyles43]
@IncludeLineStyles43= @Resources/Styles.inc

[ShowSecondMeasure43]
Measure= Plugin
Plugin= ActionTimer
ActionList1= Second1 | Second2 | Second3
Second1= [!UpdateMeasure "MeasureSecond47"] 
Second2= [!UpdateMeasure "MeasureSecond52"] 
Second3= [!UpdateMeasure "MeasureSecond57"] 

[IncludeSeconds43]
@includeSeconds431= Seconds/Second1.inc
@includeSeconds432= Seconds/Second2.inc
@includeSeconds433= Seconds/Second3.inc