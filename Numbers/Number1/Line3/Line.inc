[IncludeLineStyles13]
@IncludeLineStyles13= @Resources/Styles.inc

[ShowSecondMeasure13]
Measure= Plugin
Plugin= ActionTimer
ActionList1= Second1 | Second2 | Second3
Second1= [!UpdateMeasure "MeasureSecond02"] 
Second2= [!UpdateMeasure "MeasureSecond07"] 
Second3= [!UpdateMeasure "MeasureSecond12"] 

[IncludeSeconds13]
@includeSeconds131= Seconds/Second1.inc
@includeSeconds132= Seconds/Second2.inc
@includeSeconds133= Seconds/Second3.inc