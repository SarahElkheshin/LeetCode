

#SELECT U.NAME FROM Users U JOIN MovieRating MR ON  U.user_id = MR.user_id GROUP BY MR.user_id ORDER BY COUNT(MR.movie_id) DESC, U.NAME ASC LIMIT 1
#SELECT M.title FROM Movies M JOIN MovieRating MR ON  M.movie_id = MR.movie_id ORDER BY AVG(rating) DESC, M.title LIMIT 1
# Write your MySQL query statement below
(SELECT name AS results
FROM MovieRating JOIN Users USING(user_id)
GROUP BY name
ORDER BY COUNT(*) DESC, name
LIMIT 1)

UNION ALL

(SELECT title AS results
FROM MovieRating JOIN Movies USING(movie_id)
WHERE EXTRACT(YEAR_MONTH FROM created_at) = 202002
GROUP BY title
ORDER BY AVG(rating) DESC, title
LIMIT 1);