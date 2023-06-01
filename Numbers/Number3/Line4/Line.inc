[IncludeLineStyles34]
@IncludeLineStyles34= @Resources/Styles.inc

[ShowSecondMeasure34]
Measure= Plugin
Plugin= ActionTimer
ActionList1= Second1 | Second2 | Second3
Second1= [!UpdateMeasure "MeasureSecond33"] 
Second2= [!UpdateMeasure "MeasureSecond38"] 
Second3= [!UpdateMeasure "MeasureSecond43"] 

[IncludeSeconds34]
@includeSeconds341= Seconds/Second1.inc
@includeSeconds342= Seconds/Second2.inc
@includeSeconds343= Seconds/Second3.inc