SELECT a.Id From Weather a, Weather b
WHERE a.RecordDate - b.RecordDate = 1 
AND a.Temperature > b.Temperature;
