WITH consecutive_groups AS (
    SELECT id, 
           visit_date, 
           people,
           id - ROW_NUMBER() OVER (ORDER BY id) AS grp -- Group consecutive IDs
    FROM Stadium
    WHERE people >= 100 -- Filter out rows with less than 100 people
),
grouped_visits AS (
    SELECT grp, COUNT(*) AS group_size -- Count the number of rows in each group
    FROM consecutive_groups
    GROUP BY grp
    HAVING COUNT(*) >= 3 -- Filter groups with 3 or more consecutive rows
)
SELECT s.id, s.visit_date, s.people
FROM consecutive_groups s
JOIN grouped_visits g ON s.grp = g.grp
ORDER BY s.visit_date;
