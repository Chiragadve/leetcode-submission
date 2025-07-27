# Write your MySQL query statement below

SELECT machine_id,ROUND(AVG(duration),3)processing_time
FROM(
SELECT machine_id,(end_time - start_time) AS duration 
FROM(
    SELECT machine_id,process_id,
MAX(CASE WHEN activity_type = 'start' THEN timestamp END) AS start_time,
MAX(CASE WHEN activity_type = 'end' THEN timestamp END) AS end_time
FROM Activity GROUP BY machine_id,process_id) AS processing_time
) AS durations
GROUP BY machine_id;


