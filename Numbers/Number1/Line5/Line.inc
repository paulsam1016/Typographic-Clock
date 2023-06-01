[IncludeLineStyles15]
@IncludeLineStyles15= @Resources/Styles.inc

[ShowSecondMeasure15]
Measure= Plugin
Plugin= ActionTimer
ActionList1= Second1 | Second2 | Second3
Second1= [!UpdateMeasure "MeasureSecond04"] 
Second2= [!UpdateMeasure "MeasureSecond09"] 
Second3= [!UpdateMeasure "MeasureSecond14"] 

[IncludeSeconds15]
@includeSeconds151= Seconds/Second1.inc
@includeSeconds152= Seconds/Second2.inc
@includeSeconds153= Seconds/Second3.inc