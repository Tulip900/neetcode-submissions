-- Write your query below
SELECT name
FROM customers
WHERE id NOT IN (
    SELECT DISTINCT customer_id 
    FROM orders 
    WHERE customer_id IS NOT NULL
)

