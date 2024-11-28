# Write your MySQL query statement below
(SELECT U.name AS results FROM Users U LEFT JOIN MovieRating MR ON U.user_id = MR.user_id GROUP BY MR.user_id ORDER BY
COUNT(MR.user_id) DESC, U.name LIMIT 1)

UNION ALL

(SELECT M.title AS results FROM Movies M LEFT JOIN  MovieRating MR ON M.movie_id = MR.movie_id
WHERE DATE_FORMAT(created_at, "%M %Y") = "February 2020" GROUP BY MR.movie_id ORDER BY 
AVG(MR.rating) DESC, M.title LIMIT 1)