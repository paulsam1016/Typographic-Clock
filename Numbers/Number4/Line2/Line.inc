[IncludeLineStyles42]
@IncludeLineStyles42= @Resources/Styles.inc

[ShowSecondMeasure42]
Measure= Plugin
Plugin= ActionTimer
ActionList1= Second1 | Second2 | Second3
Second1= [!UpdateMeasure "MeasureSecond46"] 
Second2= [!UpdateMeasure "MeasureSecond51"] 
Second3= [!UpdateMeasure "MeasureSecond56"] 

[IncludeSeconds42]
@includeSeconds421= Seconds/Second1.inc
@includeSeconds422= Seconds/Second2.inc
@includeSeconds423= Seconds/Second3.inc