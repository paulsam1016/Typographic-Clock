[IncludeLineStyles22]
@IncludeLineStyles22= @Resources/Styles.inc

[ShowSecondMeasure22]
Measure= Plugin
Plugin= ActionTimer
ActionList1= Second1 | Second2 | Second3
Second1= [!UpdateMeasure "MeasureSecond16"] 
Second2= [!UpdateMeasure "MeasureSecond21"] 
Second3= [!UpdateMeasure "MeasureSecond26"] 

[IncludeSeconds22]
@includeSeconds221= Seconds/Second1.inc
@includeSeconds222= Seconds/Second2.inc
@includeSeconds223= Seconds/Second3.inc